/*
 * XREFs of RtlpHpVsContextFree @ 0x1402C1E90
 * Callers:
 *     RtlpHpSegFree @ 0x1402C2890 (RtlpHpSegFree.c)
 *     RtlpFreeHeapInternal @ 0x1402FEBC4 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpHpVsContextFreeList @ 0x1402BF0B0 (RtlpHpVsContextFreeList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140407030 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFailure @ 0x1405934AC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFree(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, unsigned int *a5)
{
  int v5; // r10d
  __int64 v6; // rbx
  PSLIST_ENTRY v9; // rdi
  unsigned int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rdx
  _SLIST_HEADER *v15; // rcx
  int v16; // ecx

  v5 = *(_DWORD *)(a1 + 176);
  v6 = a3 - 16;
  if ( (v5 & 1) != 0 && (a3 & 0xFFF) == 0 )
    v6 = a3 - 32;
  v9 = 0LL;
  if ( !a2 )
  {
    v12 = DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(v6) ^ HIDWORD(*(_QWORD *)v6);
    if ( (v12 & 0xFF0000) != 0 )
    {
      v13 = (unsigned __int8)(RtlpHpHeapGlobals ^ v6 ^ *(_BYTE *)(v6 + 8));
    }
    else
    {
      if ( (_WORD)v12 )
      {
        v14 = v6 - 16LL * (unsigned __int16)((v6 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)v6) >> 32);
        v16 = DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v14) ^ HIDWORD(v14);
        if ( (v16 & 0xFF0000) != 0 )
        {
          v13 = (unsigned __int8)(RtlpHpHeapGlobals ^ v14 ^ *(_BYTE *)(v14 + 8));
        }
        else if ( (_WORD)v16 )
        {
          v14 -= 16LL * (unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)v14 ^ v14) >> 32);
          v13 = (unsigned __int8)(RtlpHpHeapGlobals ^ v14 ^ *(_BYTE *)(v14 + 8));
        }
        else
        {
          v13 = 0;
        }
        goto LABEL_13;
      }
      v13 = 0;
    }
    v14 = v6;
LABEL_13:
    a2 = (v14 - (unsigned int)(v13 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) == 0 )
  {
    if ( ((v6 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)v6) & 0xFF000000000000LL) == 0 )
    {
      RtlpLogHeapFailure(8, a1 ^ *(_DWORD *)(a1 + 128), a3, v6, 0LL, 0LL);
      return 0LL;
    }
    v11 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v6) ^ *(unsigned __int16 *)(v6 + 2)) - 16;
    *a5 = v11;
    if ( (v5 & 4) != 0 && v11 < 0x1000 )
    {
      v15 = (_SLIST_HEADER *)(a1 + 64);
      if ( *(_WORD *)(a1 + 64) < 0x20u )
      {
        RtlpInterlockedPushEntrySList(v15, (PSLIST_ENTRY)(v6 + 16));
        return 1LL;
      }
      v9 = RtlpInterlockedFlushSList(v15);
    }
    *(_QWORD *)(v6 + 16) = v9;
    RtlpHpVsContextFreeList(a1, a4, (_QWORD *)(v6 + 16));
    return 1LL;
  }
  RtlpLogHeapFailure(18, a1 ^ *(_DWORD *)(a1 + 128), a2, 0, 0LL, 0LL);
  return 0LL;
}
