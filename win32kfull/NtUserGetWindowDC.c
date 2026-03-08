/*
 * XREFs of NtUserGetWindowDC @ 0x1C00E9060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetWindowDC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DCEx; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx

  EnterSharedCrit(a1, a2, a3);
  DCEx = 0LL;
  if ( !a1 )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  v5 = ValidateHwnd(a1);
  if ( v5 )
LABEL_3:
    DCEx = _GetDCEx(v5, 0LL, 65537LL);
  UserSessionSwitchLeaveCrit(v6);
  return DCEx;
}
