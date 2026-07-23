/*
 * XREFs of KiSatisfyThreadWait @ 0x140522A34
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiExitThreadWait @ 0x140341340 (KiExitThreadWait.c)
 */

__int64 __fastcall KiSatisfyThreadWait(__int64 a1, __int64 a2, char a3, __int64 *a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  ULONG_PTR v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rdi
  volatile signed __int32 *v16; // rsi
  __int64 *v17; // rax
  __int64 **v18; // rcx

  *(_BYTE *)(a2 + 388) = 2;
  KiReleaseThreadLockSafe(a2);
  v12 = *(_QWORD *)(a2 + 200);
  v13 = *(_QWORD *)(a2 + 976);
  if ( v13 )
  {
    *(_QWORD *)(a2 + 976) = 0LL;
    v14 = KeAbPreAcquire(v13, 0LL, 1);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
  }
  if ( a5 )
  {
    v15 = &a4[6 * (unsigned __int8)a5];
    do
    {
      if ( *((_BYTE *)a4 + 17) < 5u )
      {
        v16 = (volatile signed __int32 *)a4[4];
        KiAcquireKobjectLockSafe(v16, v9, v10, v11);
        if ( *((_BYTE *)a4 + 17) == 4 )
        {
          v17 = (__int64 *)*a4;
          if ( *(__int64 **)(*a4 + 8) != a4 || (v18 = (__int64 **)a4[1], *v18 != a4) )
            __fastfail(3u);
          *v18 = v17;
          v17[1] = (__int64)v18;
        }
        _InterlockedAnd(v16, 0xFFFFFF7F);
      }
      a4 += 6;
    }
    while ( a4 != v15 );
  }
  LOBYTE(v10) = a3;
  KiExitThreadWait(a1, a2, v10, v11);
  return v12;
}
