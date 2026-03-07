__int64 __fastcall RtlDestroyAtomTable(__int64 a1)
{
  unsigned int v2; // r12d
  _QWORD **i; // r14
  _QWORD *v4; // rsi
  _QWORD *v5; // r15
  _QWORD *v6; // rbx
  _QWORD **v8; // rbp
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFF) != 1 )
    return 0LL;
  if ( RtlpLockAtomTable((_DWORD *)a1) )
  {
    v2 = 0;
    for ( i = (_QWORD **)(a1 + 32); v2 < *(_DWORD *)(a1 + 28); ++v2 )
    {
      v4 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v5 = v4;
        if ( !v4 )
          break;
        v4 = (_QWORD *)*v4;
        v8 = (_QWORD **)(v5 + 2);
        *v5 = 0LL;
        while ( 1 )
        {
          v9 = *v8;
          if ( *v8 == v8 )
            break;
          if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
            __fastfail(3u);
          *v8 = v10;
          v10[1] = v8;
          RtlpFreeAtom(v9);
        }
        RtlpFreeAtom(v5);
      }
    }
    *(_DWORD *)a1 = 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
    KeAbPostRelease(a1 + 8);
    KeLeaveCriticalRegion();
    v6 = *(_QWORD **)(a1 + 16);
    ExpRemoveHandleTable(v6);
    ExpFreeHandleTable(v6);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    RtlpFreeAtom(a1);
    return 0LL;
  }
  return 3221225485LL;
}
