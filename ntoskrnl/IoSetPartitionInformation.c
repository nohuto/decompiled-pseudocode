/*
 * XREFs of IoSetPartitionInformation @ 0x14093DA80
 * Callers:
 *     DifIoSetPartitionInformationWrapper @ 0x1405DF060 (DifIoSetPartitionInformationWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x140672D88 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x140672EB0 (--1SC_DISK@@UEAA@XZ.c)
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140673750 (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14093D4C8 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoSetPartitionInformation(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG PartitionNumber,
        ULONG PartitionType)
{
  UCHAR v5; // di
  NTSTATUS v7; // ebx
  _SET_PARTITION_INFORMATION_EX v9; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v10[50]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = PartitionType;
  SC_DISK::SC_DISK((SC_DISK *)v10);
  v10[49] = 0LL;
  v10[0] = &NT_DISK::`vftable';
  *((_DWORD *)&v9.PartitionStyle + 1) = 0;
  memset(&v9.Mbr + 1, 0, 0x6FuLL);
  v9.PartitionStyle = PARTITION_STYLE_MBR;
  v9.Mbr.PartitionType = v5;
  v7 = NT_DISK::Initialize((NT_DISK *)v10, DeviceObject);
  if ( v7 >= 0 )
    v7 = SC_DISK::SetPartition((SC_DISK *)v10, PartitionNumber, &v9);
  v10[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v10);
  return v7;
}
