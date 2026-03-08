/*
 * XREFs of ??1SC_DISK@@UEAA@XZ @ 0x140672EB0
 * Callers:
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x140672FB0 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x14093D350 (--_ENT_DISK@@UEAAPEAXI@Z.c)
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
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x1406741F0 (--1SC_DEVICE@@UEAA@XZ.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

void __fastcall SC_DISK::~SC_DISK(SC_DISK *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx

  *(_QWORD *)this = &SC_DISK::`vftable';
  v2 = (void *)*((_QWORD *)this + 48);
  if ( v2 )
    SC_ENV::Free(v2);
  v3 = (void *)*((_QWORD *)this + 47);
  if ( v3 )
    SC_ENV::Free(v3);
  v4 = (void *)*((_QWORD *)this + 46);
  if ( v4 )
    SC_ENV::Free(v4);
  v5 = (void *)*((_QWORD *)this + 45);
  if ( v5 )
    SC_ENV::Free(v5);
  v6 = (void *)*((_QWORD *)this + 44);
  if ( v6 )
    SC_ENV::Free(v6);
  v7 = (void *)*((_QWORD *)this + 43);
  if ( v7 )
    SC_ENV::Free(v7);
  v8 = (void *)*((_QWORD *)this + 42);
  if ( v8 )
    SC_ENV::Free(v8);
  v9 = (void *)*((_QWORD *)this + 41);
  if ( v9 )
    SC_ENV::Free(v9);
  v10 = (void *)*((_QWORD *)this + 40);
  if ( v10 )
    SC_ENV::Free(v10);
  v11 = (void *)*((_QWORD *)this + 39);
  if ( v11 )
    SC_ENV::Free(v11);
  v12 = (void *)*((_QWORD *)this + 37);
  if ( v12 )
    SC_ENV::Free(v12);
  v13 = (void *)*((_QWORD *)this + 33);
  if ( v13 )
    SC_ENV::Free(v13);
  SC_DEVICE::~SC_DEVICE(this);
}
