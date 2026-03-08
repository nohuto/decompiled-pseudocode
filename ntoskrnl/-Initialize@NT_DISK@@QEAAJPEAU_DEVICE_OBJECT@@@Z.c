/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14093D4C8
 * Callers:
 *     IoCreateDisk @ 0x14093D650 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x14093D700 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x14093D800 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x14093D9D0 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x14093DA80 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x14093DB60 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x14093DC20 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x14093DCD0 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x14093DE40 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1406732C0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x140673424 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 */

__int64 __fastcall NT_DISK::Initialize(NT_DISK *this, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned __int8 v5; // r8

  *((_QWORD *)this + 49) = a2;
  result = SC_DISK::Initialize(this);
  if ( (int)result >= 0 )
    return SC_DISK::InitializePartitionCache(this, v4, v5);
  return result;
}
