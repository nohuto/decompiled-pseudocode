__int64 __fastcall NtUserfnHkINLPKBDLLHOOKSTRUCT(int a1, unsigned __int64 a2, struct tagKBDLLHOOKSTRUCT *a3)
{
  __int128 v4; // [rsp+28h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]

  v4 = 0LL;
  v5 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagKBDLLHOOKSTRUCT *)MmUserProbeAddress;
  v4 = *(_OWORD *)a3;
  v5 = *((_QWORD *)a3 + 2);
  return xxxCallNextHookEx(a1, a2, (__int64)&v4);
}
