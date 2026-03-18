/*
 * XREFs of ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00B2724
 * Callers:
 *     NtUserSetActiveWindow @ 0x1C00B2680 (NtUserSetActiveWindow.c)
 *     xxxActivateEnabledPopup @ 0x1C0222C18 (xxxActivateEnabledPopup.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00E19D0 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall xxxSetActiveWindow(struct tagWND *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rbx
  __int64 v4; // rdx

  if ( a1 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != *(_QWORD *)(gptiCurrent + 432LL) )
    return 0LL;
  v1 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
  v2 = v1 ? *v1 : 0LL;
  if ( !a1 )
    return 0LL;
  xxxActivateWindowWithOptions(a1, 0LL, 0LL, 1LL);
  LOBYTE(v4) = 1;
  return (struct tagWND *)HMValidateHandleNoSecure(v2, v4);
}
