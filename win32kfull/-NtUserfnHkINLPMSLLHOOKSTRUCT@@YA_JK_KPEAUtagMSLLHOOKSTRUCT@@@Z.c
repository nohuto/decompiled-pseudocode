__int64 __fastcall NtUserfnHkINLPMSLLHOOKSTRUCT(int a1, unsigned __int64 a2, struct tagMSLLHOOKSTRUCT *a3)
{
  __int128 v4; // [rsp+28h] [rbp-30h] BYREF
  __int128 v5; // [rsp+38h] [rbp-20h]

  v4 = 0LL;
  v5 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagMSLLHOOKSTRUCT *)MmUserProbeAddress;
  v4 = *(_OWORD *)a3;
  v5 = *((_OWORD *)a3 + 1);
  return xxxCallNextHookEx(a1, a2, (__int64)&v4);
}
