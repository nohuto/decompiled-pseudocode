/*
 * XREFs of EtwpRealtimeUpdateConsumers @ 0x1406913C8
 * Callers:
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 */

LONG __fastcall EtwpRealtimeUpdateConsumers(__int64 a1)
{
  __int64 *v1; // rbp
  _QWORD **v3; // rdi
  LONG result; // eax
  __int64 v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rax
  int v8; // r14d
  __int64 v9; // rsi
  _QWORD *i; // rcx

  v1 = (__int64 *)(a1 + 688);
  if ( (*(_DWORD *)(a1 + 824) & 0x20) != 0 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
    v5 = *(_QWORD *)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
    ExReleasePushLockEx(v1, 0LL);
    v6 = *(_QWORD *)(v5 + 40);
    v3 = (_QWORD **)(a1 + 328);
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_OWORD *)(v6 + 80) = *(_OWORD *)(a1 + 432);
    v7 = *(_QWORD **)(a1 + 336);
    if ( *v7 != a1 + 328 )
      __fastfail(3u);
    *(_QWORD *)v5 = v3;
    *(_QWORD *)(v5 + 8) = v7;
    *v7 = v5;
    *(_QWORD *)(a1 + 336) = v5;
    ++*(_DWORD *)(a1 + 344);
    *(_BYTE *)(v5 + 90) &= ~8u;
    _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x40u);
    *(_DWORD *)(a1 + 40) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
  }
  else
  {
    v3 = (_QWORD **)(a1 + 328);
  }
  result = *(_DWORD *)(a1 + 824);
  if ( (result & 0x10) != 0 )
  {
    v8 = -1073741162;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
    v9 = *(_QWORD *)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
    ExReleasePushLockEx(v1, 0LL);
    for ( i = *v3; i != v3; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)v9 == i && (*(_BYTE *)(v9 + 90) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 824), 4u);
        *(_BYTE *)(v9 + 90) |= 1u;
        v8 = 0;
      }
    }
    *(_DWORD *)(a1 + 40) = v8;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFEF);
    return KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
  }
  return result;
}
