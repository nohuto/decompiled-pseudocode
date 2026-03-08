/*
 * XREFs of RtlpHpVsContextFree @ 0x1402B6740
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     RtlpFreeHeapInternal @ 0x1402E0AF4 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegFree @ 0x140308DBC (RtlpHpSegFree.c)
 * Callees:
 *     RtlpHpVsContextFreeList @ 0x140249050 (RtlpHpVsContextFreeList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFree(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  int v5; // r10d
  __int64 v6; // rbx
  PSLIST_ENTRY v9; // rsi
  unsigned int v10; // ecx
  union _SLIST_HEADER *v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // ecx
  unsigned __int64 v16; // r9
  int v17; // ecx
  unsigned __int64 v18; // r9
  __int64 v19; // r9
  int v20; // ecx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r9
  int v23; // r9d
  int v24; // ecx

  v5 = *(_DWORD *)(a1 + 176);
  v6 = a3 - 16;
  if ( (v5 & 1) != 0 && (a3 & 0xFFF) == 0 )
    v6 = a3 - 32;
  v9 = 0LL;
  if ( !a2 )
  {
    v13 = v6;
    v14 = RtlpHpHeapGlobals ^ *(_QWORD *)v6;
    v15 = HIDWORD(v6) ^ HIDWORD(v14);
    v16 = v6 ^ v14;
    if ( (v15 & 0xFF0000) != 0 )
    {
      v17 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v6 + 8) ^ v6);
LABEL_15:
      a2 = (v13 - (unsigned int)(v17 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_5;
    }
    v18 = HIDWORD(v16);
    if ( (_WORD)v18 )
    {
      v13 = v6 - 16LL * (unsigned __int16)v18;
      v19 = RtlpHpHeapGlobals ^ *(_QWORD *)v13;
      v20 = HIDWORD(v13) ^ HIDWORD(v19);
      v21 = v13 ^ v19;
      if ( (v20 & 0xFF0000) != 0 )
      {
        v17 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v13 + 8) ^ v13);
        goto LABEL_15;
      }
      v22 = HIDWORD(v21);
      if ( (_WORD)v22 )
      {
        v13 -= 16LL * (unsigned __int16)v22;
        v17 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v13 + 8) ^ v13);
        goto LABEL_15;
      }
    }
    v17 = 0;
    goto LABEL_15;
  }
LABEL_5:
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    v23 = 0;
    LODWORD(a3) = a2;
    v24 = 18;
LABEL_24:
    RtlpLogHeapFailure(v24, *(_DWORD *)(a1 + 128) ^ a1, a3, v23, 0LL, 0LL);
    return 0LL;
  }
  if ( ((v6 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v6) & 0xFF000000000000LL) == 0 )
  {
    v23 = v6;
    v24 = 8;
    goto LABEL_24;
  }
  v10 = 16 * ((((unsigned int)v6 ^ (unsigned int)*(_QWORD *)v6) >> 16) ^ WORD1(RtlpHpHeapGlobals)) - 16;
  *a5 = v10;
  if ( (v5 & 4) != 0 && v10 < 0x1000 )
  {
    v11 = (union _SLIST_HEADER *)(a1 + 64);
    if ( *(_WORD *)(a1 + 64) < 0x20u )
    {
      RtlpInterlockedPushEntrySList(v11, (PSLIST_ENTRY)(v6 + 16));
      return 1LL;
    }
    v9 = RtlpInterlockedFlushSList(v11);
  }
  *(_QWORD *)(v6 + 16) = v9;
  RtlpHpVsContextFreeList(a1, a4, (_QWORD *)(v6 + 16));
  return 1LL;
}
