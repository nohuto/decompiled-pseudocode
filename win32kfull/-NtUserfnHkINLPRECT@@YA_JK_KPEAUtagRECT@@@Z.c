__int64 __fastcall NtUserfnHkINLPRECT(int a1, unsigned __int64 a2, struct tagRECT *a3)
{
  __int128 v4; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagRECT *)MmUserProbeAddress;
  v4 = (__int128)*a3;
  return xxxCallNextHookEx(a1, a2, (__int64)&v4);
}
