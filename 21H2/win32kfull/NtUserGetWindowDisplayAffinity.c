/*
 * XREFs of NtUserGetWindowDisplayAffinity @ 0x1C01F72A0
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     GetDisplayAffinity @ 0x1C0243980 (GetDisplayAffinity.c)
 */

__int64 __fastcall NtUserGetWindowDisplayAffinity(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v5; // edi
  __int64 v6; // rax
  ULONG64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r9
  _DWORD *v10; // rdx
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  v12 = 0;
  EnterSharedCrit(a1, a2, a3);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    if ( IsTopLevelWindow(v6) )
    {
      GetDisplayAffinity(v9, &v12);
      v5 = 1;
      v7 = MmUserProbeAddress;
      v10 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v10 = (_DWORD *)MmUserProbeAddress;
      *v10 = *v10;
      *a2 = v12;
    }
    else
    {
      UserSetLastError(87LL, v8);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v5;
}
