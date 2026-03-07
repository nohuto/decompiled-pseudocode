__int64 __fastcall NtUserGetWindowDisplayAffinity(__int64 a1, _DWORD *a2)
{
  int v4; // edi
  ULONG64 v5; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v9 = 0;
  EnterSharedCrit();
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( (unsigned int)IsTopLevelWindow(v5) )
    {
      GetDisplayAffinity(v6, &v9);
      v4 = 1;
      v5 = MmUserProbeAddress;
      v7 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v7 = (_DWORD *)MmUserProbeAddress;
      *v7 = *v7;
      *a2 = v9;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
