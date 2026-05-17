/*
 * XREFs of RtlpHpLargeFree @ 0x180003280
 * Callers:
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpFreeVA @ 0x180020824 (RtlpHpFreeVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 *     RtlpHeapLogRangeRelease @ 0x180108244 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapFailure @ 0x18010E03C (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int128 *a1, unsigned __int64 a2, char a3)
{
  int v4; // esi
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+28h] BYREF

  v19 = a2;
  v4 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(a1 + 4);
    a2 = v19;
  }
  v5 = (__int64)a1 + 72;
  v6 = *((_QWORD *)a1 + 9);
  if ( (a1[5] & 1) != 0 && v6 )
    v6 ^= v5;
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v7 )
    {
      if ( a2 <= v7 )
        break;
      v8 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v6;
    }
    if ( (a1[5] & 1) != 0 && v8 )
      v6 ^= v8;
    else
      v6 = v8;
  }
  if ( v6 )
  {
    RtlRbRemoveNode(v5, v6, a1[5] & 1);
    if ( !v4 )
      RtlReleaseSRWLockExclusive(a1 + 4);
    v9 = *(_QWORD *)(v6 + 32);
    v10 = (unsigned __int8)v9 >> 2;
    v16 = *a1;
    v11 = (((v9 >> 12) + ((v9 >> 1) & 1)) << 12) - 1;
    v18 = (1LL << v10) - (((1LL << v10) - 1) & ((1LL << v10) + v11)) + v11;
    RtlpHpFreeVA(&v19, &v18, 0x8000LL, &v16);
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 12, -(*(_QWORD *)(v6 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 11, -(__int64)(v18 >> 12));
    v17 = *a1;
    RtlpHpMetadataFree(v6, &v17);
    v12 = v18;
    v13 = v18;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v12 = v18;
      v14 = (__int64)NtCurrentPeb()->SharedData + 558;
    }
    else
    {
      v14 = 2147353480LL;
    }
    if ( *(_BYTE *)v14 )
      RtlpHeapLogRangeRelease(a1, v19, v12);
  }
  else
  {
    if ( !v4 )
    {
      RtlReleaseSRWLockExclusive(a1 + 4);
      LODWORD(a2) = v19;
    }
    RtlpLogHeapFailure(8, (_DWORD)a1, a2, 0, 0LL, 0LL);
    return 0LL;
  }
  return v13;
}
