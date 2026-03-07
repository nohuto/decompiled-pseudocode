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
