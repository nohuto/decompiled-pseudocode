/*
 * XREFs of NtUserHardErrorControl @ 0x1C01D5A70
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x1C0226A64 (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, ULONG64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // edi
  _BYTE *v11; // rdx
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF

  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( PsGetCurrentProcess(v7, v6, v8) == gpepCSRSS )
  {
    if ( a3 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (_BYTE *)a3;
      if ( a3 >= MmUserProbeAddress )
        v11 = (_BYTE *)MmUserProbeAddress;
      *v11 = *v11;
      v11[15] = v11[15];
      v13 = *(_OWORD *)a3;
    }
    v10 = xxxHardErrorControl(a1, a2, (unsigned __int64)&v13 & -(__int64)(a3 != 0));
    if ( a3 )
      *(_OWORD *)a3 = v13;
  }
  else
  {
    v10 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
