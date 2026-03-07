__int64 __fastcall KiSatisfyThreadWait(__int64 a1, __int64 a2, char a3, __int64 *a4, int a5)
{
  __int64 v7; // r12
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 *v12; // rdi
  volatile signed __int32 *v13; // rsi
  __int64 *v14; // rcx
  __int64 **v15; // rax

  *(_BYTE *)(a2 + 388) = 2;
  *(_QWORD *)(a2 + 64) = 0LL;
  v7 = *(_QWORD *)(a2 + 200);
  v9 = *(_QWORD *)(a2 + 976);
  if ( v9 )
  {
    *(_QWORD *)(a2 + 976) = 0LL;
    v11 = KeAbPreAcquire(v9, 0LL);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
  }
  if ( a5 )
  {
    v12 = &a4[6 * (unsigned __int8)a5];
    do
    {
      if ( *((_BYTE *)a4 + 17) < 5u )
      {
        v13 = (volatile signed __int32 *)a4[4];
        KiAcquireKobjectLockSafe(v13);
        if ( *((_BYTE *)a4 + 17) == 4 )
        {
          v14 = (__int64 *)*a4;
          if ( *(__int64 **)(*a4 + 8) != a4 || (v15 = (__int64 **)a4[1], *v15 != a4) )
            __fastfail(3u);
          *v15 = v14;
          v14[1] = (__int64)v15;
        }
        _InterlockedAnd(v13, 0xFFFFFF7F);
      }
      a4 += 6;
    }
    while ( a4 != v12 );
  }
  KiExitThreadWait(a1, a2, a3);
  return v7;
}
