/*
 * XREFs of ?SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z @ 0x180339674
 * Callers:
 *     ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1803397C0 (-v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18033AB3C (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18034BA20 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

__int64 __fastcall LegacyViewWrapper::SendVisibilityToWindow(__int64 a1, unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 result; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 280);
  if ( v4 )
  {
    if ( (*(_BYTE *)(a1 + 472) & 0x10) == 0 )
    {
      LOBYTE(v3) = a2 == 1;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 176) + 456LL)
                                                                       + 24LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 456LL),
        v4,
        0LL,
        0LL,
        v3);
      WindowReadyState::VisibilityChanged(a1 + 368, 0LL, a2);
      return WindowReadyState::VisibilityChanged(a1 + 368, 1LL, a2);
    }
  }
  return result;
}
