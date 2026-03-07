__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // r8d
  _DWORD *v6; // rdx

  EnterSharedCrit(a1, a2, a3);
  v5 = *(_DWORD *)(*((_QWORD *)PtiCurrentShared(v4) + 53) + 904LL);
  v6 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v6 = (_DWORD *)MmUserProbeAddress;
  *v6 = *v6;
  *a1 = v5;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress);
  return 1LL;
}
