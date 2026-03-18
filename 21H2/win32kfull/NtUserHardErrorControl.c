/*
 * XREFs of NtUserHardErrorControl @ 0x1C01F78E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x1C023CD7C (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, ULONG64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edi
  _BYTE *v10; // rdx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( PsGetCurrentProcess(v7, v6) == gpepCSRSS )
  {
    if ( a3 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (_BYTE *)a3;
      if ( a3 >= MmUserProbeAddress )
        v10 = (_BYTE *)MmUserProbeAddress;
      *v10 = *v10;
      v10[15] = v10[15];
      v12 = *(_OWORD *)a3;
    }
    v9 = xxxHardErrorControl(a1, a2, (unsigned __int64)&v12 & -(__int64)(a3 != 0));
    if ( a3 )
      *(_OWORD *)a3 = v12;
  }
  else
  {
    v9 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
