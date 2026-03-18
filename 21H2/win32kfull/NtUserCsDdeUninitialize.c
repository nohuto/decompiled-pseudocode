/*
 * XREFs of NtUserCsDdeUninitialize @ 0x1C0004150
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0119D30 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall NtUserCsDdeUninitialize(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  EnterCrit(0LL, 0LL);
  LOBYTE(v2) = 9;
  v3 = HMValidateHandleNoRip(a1, v2);
  if ( v3 )
    xxxDestroyThreadDDEObject(gptiCurrent, v3);
  UserSessionSwitchLeaveCrit();
  return 1LL;
}
