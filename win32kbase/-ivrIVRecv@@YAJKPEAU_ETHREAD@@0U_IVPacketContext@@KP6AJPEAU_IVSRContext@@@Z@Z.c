__int64 __fastcall ivrIVRecv(unsigned int a1, __int64 a2, __int64 a3, __int128 *a4, int a5, __int64 a6)
{
  __int64 v6; // xmm1_8
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  if ( !gpfnIVRecv )
    return 3221225659LL;
  v6 = *((_QWORD *)a4 + 2);
  v8 = *a4;
  v9 = v6;
  return gpfnIVRecv(a1, a2, a3, &v8, a5, a6);
}
