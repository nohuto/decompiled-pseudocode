/*
 * XREFs of RtlEmptyAtomTable @ 0x1409B8EA0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlpLockAtomTable @ 0x1407DA790 (RtlpLockAtomTable.c)
 *     RtlpFreeAtom @ 0x1407DC628 (RtlpFreeAtom.c)
 *     RtlpFreeHandleForAtom @ 0x1407DC658 (RtlpFreeHandleForAtom.c)
 */

__int64 __fastcall RtlEmptyAtomTable(__int64 a1, char a2)
{
  unsigned int v5; // ebp
  __int64 *i; // r15
  __int64 *v7; // rsi
  __int64 v8; // rdx
  _QWORD **v9; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rbx

  if ( !RtlpLockAtomTable((_DWORD *)a1) )
    return 3221225485LL;
  v5 = 0;
  for ( i = (__int64 *)(a1 + 32); v5 < *(_DWORD *)(a1 + 28); ++v5 )
  {
    v7 = i++;
    while ( 1 )
    {
      v12 = *v7;
      if ( !*v7 )
        break;
      if ( a2 || (*(_BYTE *)(v12 + 38) & 1) == 0 )
      {
        v8 = *v7;
        *v7 = *(_QWORD *)v12;
        *(_QWORD *)v12 = 0LL;
        RtlpFreeHandleForAtom(a1, v8);
        v9 = (_QWORD **)(v12 + 16);
        while ( 1 )
        {
          v10 = *v9;
          if ( *v9 == v9 )
            break;
          if ( (_QWORD **)v10[1] != v9 || (v11 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
            __fastfail(3u);
          *v9 = v11;
          v11[1] = v9;
          RtlpFreeAtom((__int64)v10);
        }
        RtlpFreeAtom(v12);
      }
      else
      {
        v7 = (__int64 *)*v7;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return 0LL;
}
