/*
 * XREFs of IoReadPartitionTable @ 0x14093D800
 * Callers:
 *     DifIoReadPartitionTableWrapper @ 0x1405DE4A0 (DifIoReadPartitionTableWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x140672D88 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x140672EB0 (--1SC_DISK@@UEAA@XZ.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14067351C (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14093D4C8 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoReadPartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        BOOLEAN ReturnRecognizedPartitions,
        struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer)
{
  _QWORD *v6; // r9
  struct _DEVICE_OBJECT *v7; // r10
  NTSTATUS v8; // edi
  int PartitionTable; // eax
  ULONG *v10; // rbx
  SIZE_T v11; // rbp
  struct _DRIVE_LAYOUT_INFORMATION *PoolWithTag; // rax
  __int64 v13; // r8
  struct _DRIVE_LAYOUT_INFORMATION *v14; // r10
  __int64 v15; // rcx
  ULONG *v16; // r9
  char v17; // al
  PVOID P; // [rsp+20h] [rbp-1C8h] BYREF
  _QWORD v20[50]; // [rsp+30h] [rbp-1B8h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v20);
  v20[49] = 0LL;
  P = 0LL;
  *v6 = 0LL;
  v20[0] = &NT_DISK::`vftable';
  v8 = NT_DISK::Initialize((NT_DISK *)v20, v7);
  if ( v8 >= 0 )
  {
    PartitionTable = SC_DISK::ReadPartitionTable((SC_DISK *)v20, (struct SC_DISK_LAYOUT **)&P);
    v10 = (ULONG *)P;
    v8 = PartitionTable;
    if ( PartitionTable >= 0 )
    {
      if ( *(_DWORD *)P == 1 )
      {
        v8 = -1073741637;
      }
      else
      {
        v11 = (unsigned int)(144 * *((_DWORD *)P + 1) + 48);
        PoolWithTag = (struct _DRIVE_LAYOUT_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x54506F49u);
        *PartitionBuffer = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v11);
          v13 = 0LL;
          (*PartitionBuffer)->PartitionCount = v10[1];
          for ( (*PartitionBuffer)->Signature = v10[2]; (unsigned int)v13 < v10[1]; v13 = (unsigned int)(v13 + 1) )
          {
            v14 = *PartitionBuffer;
            v15 = (unsigned int)v13;
            v16 = &v10[36 * v13];
            if ( ReturnRecognizedPartitions )
            {
              v17 = *((_BYTE *)v16 + 80);
              if ( !v17 || v17 == 5 || v17 == 15 )
                continue;
            }
            v14->PartitionEntry[v15].StartingOffset.QuadPart = *(_QWORD *)&v10[36 * v13 + 14];
            v14->PartitionEntry[v15].PartitionLength.QuadPart = *(_QWORD *)&v10[36 * v13 + 16];
            v14->PartitionEntry[v15].HiddenSectors = v10[36 * v13 + 21];
            v14->PartitionEntry[v15].PartitionNumber = v10[36 * v13 + 18];
            v14->PartitionEntry[v15].PartitionType = *((_BYTE *)v16 + 80);
            v14->PartitionEntry[v15].BootIndicator = BYTE1(v10[36 * v13 + 20]);
            v14->PartitionEntry[v15].RecognizedPartition = BYTE2(v10[36 * v13 + 20]);
            v14->PartitionEntry[v15].RewritePartition = v10[36 * v13 + 19];
          }
        }
        else
        {
          v8 = -1073741670;
        }
      }
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  v20[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v20);
  return v8;
}
