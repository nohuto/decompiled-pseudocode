/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14088D958
 * Callers:
 *     IoCreateDisk @ 0x14088DAE0 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x14088DB90 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x14088DC90 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x14088DE60 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x14088DF10 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x14088DFF0 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x14088E0B0 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x14088E160 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x14088E2D0 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1405C6CF0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x1405C6DF0 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 */

__int64 __fastcall NT_DISK::Initialize(NT_DISK *this, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax

  *((_QWORD *)this + 44) = a2;
  result = SC_DISK::Initialize(this);
  if ( (int)result >= 0 )
    return SC_DISK::InitializePartitionCache(this);
  return result;
}
