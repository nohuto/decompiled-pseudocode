__int64 __fastcall NtUserGetWindowBand(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  _DWORD *v8; // rdx

  EnterSharedCrit(a1, a2, a3);
  v6 = ValidateHwnd(a1);
  v7 = 0;
  if ( v6 )
  {
    if ( a2 )
    {
      v8 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v8 = (_DWORD *)MmUserProbeAddress;
      *v8 = *v8;
      v5 = *(unsigned int *)(*(_QWORD *)(v6 + 40) + 236LL);
      *a2 = v5;
      v7 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
