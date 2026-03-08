/*
 * XREFs of ?NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z @ 0x1C01CD620
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0147340 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0009C64 (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkOPTINLPEVENTMSG(int a1, unsigned __int64 a2, struct tagEVENTMSG *a3)
{
  struct tagEVENTMSG *v5; // rdx
  __int64 result; // rax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  if ( a3 )
  {
    v5 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v5 = (struct tagEVENTMSG *)MmUserProbeAddress;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *((_BYTE *)v5 + 23) = *((_BYTE *)v5 + 23);
    v7 = *(_OWORD *)a3;
    v8 = *((_QWORD *)a3 + 2);
  }
  result = xxxCallNextHookEx(a1, a2, (unsigned __int64)&v7 & -(__int64)(a3 != 0LL));
  if ( a3 )
  {
    *(_OWORD *)a3 = v7;
    *((_QWORD *)a3 + 2) = v8;
  }
  return result;
}
