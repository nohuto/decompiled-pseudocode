/*
 * XREFs of IoWritePartitionTable @ 0x14093DCD0
 * Callers:
 *     DifIoWritePartitionTableWrapper @ 0x1405DF960 (DifIoWritePartitionTableWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x140672D88 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x140672EB0 (--1SC_DISK@@UEAA@XZ.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1406737F8 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14093D4C8 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoWritePartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG SectorsPerTrack,
        ULONG NumberOfHeads,
        struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer)
{
  ULONG PartitionCount; // eax
  struct SC_DISK_LAYOUT *PoolWithTag; // rax
  struct SC_DISK_LAYOUT *v8; // rbx
  NTSTATUS v9; // edi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD v14[50]; // [rsp+20h] [rbp-1A8h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v14);
  PartitionCount = PartitionBuffer->PartitionCount;
  v14[49] = 0LL;
  v14[0] = &NT_DISK::`vftable';
  PoolWithTag = (struct SC_DISK_LAYOUT *)ExAllocatePoolWithTag(NonPagedPoolNx, 144 * PartitionCount + 48, 0x54506F49u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_DWORD *)PoolWithTag = 0;
    v10 = 0LL;
    *((_DWORD *)PoolWithTag + 1) = PartitionBuffer->PartitionCount;
    for ( *((_DWORD *)PoolWithTag + 2) = PartitionBuffer->Signature;
          (unsigned int)v10 < PartitionBuffer->PartitionCount;
          *((_DWORD *)PoolWithTag + 2 * v11 + 21) = PartitionBuffer->PartitionEntry[v12].HiddenSectors )
    {
      v11 = 18 * v10;
      v12 = (unsigned int)v10;
      v10 = (unsigned int)(v10 + 1);
      *((_DWORD *)PoolWithTag + 2 * v11 + 12) = 0;
      *((_QWORD *)PoolWithTag + v11 + 7) = PartitionBuffer->PartitionEntry[v12].StartingOffset.QuadPart;
      *((_QWORD *)PoolWithTag + v11 + 8) = PartitionBuffer->PartitionEntry[v12].PartitionLength.QuadPart;
      *((_DWORD *)PoolWithTag + 2 * v11 + 18) = PartitionBuffer->PartitionEntry[v12].PartitionNumber;
      *((_BYTE *)PoolWithTag + 8 * v11 + 76) = PartitionBuffer->PartitionEntry[v12].RewritePartition;
      *((_BYTE *)PoolWithTag + 8 * v11 + 80) = PartitionBuffer->PartitionEntry[v12].PartitionType;
      *((_BYTE *)PoolWithTag + 8 * v11 + 81) = PartitionBuffer->PartitionEntry[v12].BootIndicator;
      *((_BYTE *)PoolWithTag + 8 * v11 + 82) = PartitionBuffer->PartitionEntry[v12].RecognizedPartition;
    }
    v9 = NT_DISK::Initialize((NT_DISK *)v14, DeviceObject);
    if ( v9 >= 0 )
      v9 = SC_DISK::WritePartitionTable((SC_DISK *)v14, v8);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v9 = -1073741670;
  }
  v14[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v14);
  return v9;
}
