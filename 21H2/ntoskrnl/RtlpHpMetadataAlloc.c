/*
 * XREFs of RtlpHpMetadataAlloc @ 0x140371274
 * Callers:
 *     RtlpHpHeapAllocate @ 0x1403700FC (RtlpHpHeapAllocate.c)
 *     RtlpHpLargeAlloc @ 0x140370C40 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14034FED0 (RtlpHpSegAlloc.c)
 *     RtlpHpMetadataHeapStart @ 0x140371378 (RtlpHpMetadataHeapStart.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140371398 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpAllocateHeap @ 0x1403713DC (RtlpHpAllocateHeap.c)
 */

__int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // r14
  _QWORD *v10; // r9
  char v11; // r8
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = *a4;
  v7 = RtlpHpMetadataHeapCtxGet(&v14);
  v8 = 0LL;
  v9 = (_QWORD *)v7;
  *(_QWORD *)&v14 = *v10;
  v11 = BYTE1(v14);
  BYTE3(v14) = 0;
  *((_QWORD *)&v14 + 1) = 0LL;
  if ( BYTE1(v14) >= 3u )
    v11 = 3;
  BYTE1(v14) = v11;
  if ( (int)RtlpHpMetadataHeapStart(v7, &v14) >= 0 )
  {
    if ( a3 )
      return RtlpHpSegAlloc(
               *v9 + 320LL + (*(unsigned int *)(*v9 + 336LL) < a1 ? 0xC0 : 0),
               a1,
               a1,
               a2,
               a2 < a1 ? 83886080 : 0x1000000);
    else
      return RtlpHpAllocateHeap(*v9, a1);
  }
  return v8;
}
