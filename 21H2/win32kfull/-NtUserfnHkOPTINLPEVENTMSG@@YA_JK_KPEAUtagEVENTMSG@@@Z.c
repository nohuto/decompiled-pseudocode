/*
 * XREFs of ?NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z @ 0x1C01F6820
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0151370 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0020314 (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkOPTINLPEVENTMSG(__int64 a1, __int64 a2, struct tagEVENTMSG *a3)
{
  __int64 v4; // xmm1_8
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( a3 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      *(_DWORD *)MmUserProbeAddress = 0;
    *(_OWORD *)a3 = *(_OWORD *)a3;
    v4 = *((_QWORD *)a3 + 2);
    *((_QWORD *)a3 + 2) = v4;
    v6 = *(_OWORD *)a3;
    v7 = v4;
  }
  result = xxxCallNextHookEx();
  if ( a3 )
  {
    *(_OWORD *)a3 = v6;
    *((_QWORD *)a3 + 2) = v7;
  }
  return result;
}
