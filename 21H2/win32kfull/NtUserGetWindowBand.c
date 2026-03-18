/*
 * XREFs of NtUserGetWindowBand @ 0x1C00EC1D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetWindowBand(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  _DWORD *v9; // rdx

  EnterSharedCrit(a1, a2, a3);
  v7 = ValidateHwnd(a1);
  v8 = 0;
  if ( v7 )
  {
    if ( a2 )
    {
      v9 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v9 = (_DWORD *)MmUserProbeAddress;
      *v9 = *v9;
      v6 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 236LL);
      *a2 = v6;
      v8 = 1;
    }
    else
    {
      UserSetLastError(87LL, v5);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
