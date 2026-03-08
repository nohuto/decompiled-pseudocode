/*
 * XREFs of ?RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x1C007F704
 * Callers:
 *     NtFlipObjectRemoveContent @ 0x1C0080B70 (NtFlipObjectRemoveContent.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x1C008453C (-RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::RemoveContent(
        FlipManagerObject *this,
        unsigned __int64 a2,
        struct CDisableScanoutToken **a3)
{
  int v6; // ebx

  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v6 >= 0 )
  {
    v6 = CFlipManager::RemoveContent((FlipManagerObject *)((char *)this + 32), a2, a3);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v6;
}
