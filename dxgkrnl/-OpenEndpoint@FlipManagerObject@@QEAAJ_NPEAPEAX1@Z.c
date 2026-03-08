/*
 * XREFs of ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C0081770
 * Callers:
 *     NtFlipObjectOpen @ 0x1C0080400 (NtFlipObjectOpen.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C006CA8C (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     ?OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z @ 0x1C00839D8 (-OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::OpenEndpoint(FlipManagerObject *this, unsigned __int8 a2, void **a3, void **a4)
{
  int v5; // ebp
  NTSTATUS Handle; // ebx
  __int64 v9; // r8

  v5 = a2;
  Handle = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( Handle >= 0 )
  {
    Handle = DxgkCompositionObject::CreateHandle(this, v5 + 1, v9, 0, a3);
    if ( Handle >= 0 )
      Handle = CFlipManager::OpenEndpoint((FlipManagerObject *)((char *)this + 32), v5, a4);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)Handle;
}
