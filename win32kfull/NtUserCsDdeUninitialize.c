/*
 * XREFs of NtUserCsDdeUninitialize @ 0x1C01CF1F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyThreadDDEObject @ 0x1C00F4BE0 (xxxDestroyThreadDDEObject.c)
 *     HMValidateHandleNoRip @ 0x1C01083AC (HMValidateHandleNoRip.c)
 */

__int64 __fastcall NtUserCsDdeUninitialize(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = HMValidateHandleNoRip(a1, 9);
  if ( v2 )
    xxxDestroyThreadDDEObject(gptiCurrent, v2);
  UserSessionSwitchLeaveCrit(v3);
  return 1LL;
}
