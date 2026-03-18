/*
 * XREFs of ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0080404
 * Callers:
 *     NtFlipObjectSetContent @ 0x1C0081990 (NtFlipObjectSetContent.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0013814 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C00853B8 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::SetContent(
        FlipManagerObject *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct CFlipPropertySet *a4)
{
  int v8; // ebx

  v8 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v8 >= 0 )
  {
    v8 = CFlipManager::SetContent((FlipManagerObject *)((char *)this + 32), a2, a3, a4);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v8;
}
