/*
 * XREFs of ??1SC_DEVICE@@UEAA@XZ @ 0x1406741F0
 * Callers:
 *     ??1SC_DISK@@UEAA@XZ @ 0x140672EB0 (--1SC_DISK@@UEAA@XZ.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1406742B0 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

void __fastcall SC_DEVICE::~SC_DEVICE(SC_DEVICE *this)
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

  *(_QWORD *)this = &SC_DEVICE::`vftable';
  v2 = (void *)*((_QWORD *)this + 24);
  if ( v2 )
    SC_ENV::Free(v2);
  v3 = (void *)*((_QWORD *)this + 23);
  if ( v3 )
    SC_ENV::Free(v3);
  v4 = (void *)*((_QWORD *)this + 22);
  if ( v4 )
    SC_ENV::Free(v4);
  v5 = (void *)*((_QWORD *)this + 20);
  if ( v5 )
    SC_ENV::Free(v5);
  v6 = (void *)*((_QWORD *)this + 19);
  if ( v6 )
    SC_ENV::Free(v6);
  v7 = (void *)*((_QWORD *)this + 21);
  if ( v7 )
    SC_ENV::Free(v7);
  v8 = (void *)*((_QWORD *)this + 10);
  if ( v8 )
    SC_ENV::Free(v8);
  v9 = (void *)*((_QWORD *)this + 8);
  if ( v9 )
    SC_ENV::Free(v9);
  v10 = (void *)*((_QWORD *)this + 6);
  if ( v10 )
    SC_ENV::Free(v10);
  v11 = (void *)*((_QWORD *)this + 4);
  if ( v11 )
    SC_ENV::Free(v11);
}
