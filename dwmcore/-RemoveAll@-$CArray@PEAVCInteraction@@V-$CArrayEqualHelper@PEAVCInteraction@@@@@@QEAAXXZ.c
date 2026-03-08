/*
 * XREFs of ?RemoveAll@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAXXZ @ 0x18010E228
 * Callers:
 *     _dynamic_atexit_destructor_for__CInteraction::s_DefaultStateLockedInteractions__ @ 0x180120280 (_dynamic_atexit_destructor_for__CInteraction--s_DefaultStateLockedInteractions__.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1802097D4 (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    operator delete(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
