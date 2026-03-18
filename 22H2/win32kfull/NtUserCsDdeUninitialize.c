/*
 * XREFs of NtUserCsDdeUninitialize @ 0x1C01CE1A0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00244B4 (HMValidateHandleNoRip.c)
 *     xxxDestroyThreadDDEObject @ 0x1C00BD1D0 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall NtUserCsDdeUninitialize(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  v2 = HMValidateHandleNoRip(a1, 9);
  if ( v2 )
    xxxDestroyThreadDDEObject(gptiCurrent, v2);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return 1LL;
}
