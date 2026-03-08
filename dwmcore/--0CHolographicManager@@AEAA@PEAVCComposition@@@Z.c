/*
 * XREFs of ??0CHolographicManager@@AEAA@PEAVCComposition@@@Z @ 0x1801016EC
 * Callers:
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18010165C (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CHolographicManager *__fastcall CHolographicManager::CHolographicManager(
        CHolographicManager *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)this = &CHolographicManager::`vftable'{for `IHolographicManager'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 1) = &CHolographicManager::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_WORD *)this + 120) = 0;
  InitializeSRWLock((PSRWLOCK)this + 13);
  return this;
}
