/*
 * XREFs of RtlpHpMetadataAlloc @ 0x1402B71FC
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1402B6D70 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140375668 (RtlpHpHeapAllocate.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405B3B00 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x1402491F0 (RtlpHpSegAlloc.c)
 *     RtlpHpAllocateHeap @ 0x14024A2B0 (RtlpHpAllocateHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1402B72FC (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpMetadataHeapStart @ 0x1402B7328 (RtlpHpMetadataHeapStart.c)
 */

__int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int64 v4; // xmm0_8
  __int64 v8; // rax
  char v9; // r8
  __int64 v10; // rbx
  __int64 *v11; // r14
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = *a4;
  v4 = v14;
  v8 = RtlpHpMetadataHeapCtxGet(&v14);
  *(_QWORD *)&v14 = v4;
  v9 = BYTE1(v4);
  v10 = 0LL;
  v11 = (__int64 *)v8;
  BYTE3(v14) = 0;
  *((_QWORD *)&v14 + 1) = 0LL;
  if ( BYTE1(v4) >= 3u )
    v9 = 3;
  BYTE1(v14) = v9;
  if ( (int)RtlpHpMetadataHeapStart(v8, &v14) >= 0 )
  {
    if ( a3 )
      return RtlpHpSegAlloc(
               *v11 + 320 + (*(unsigned int *)(*v11 + 336) < a1 ? 0xC0 : 0),
               a1,
               a1,
               a2,
               a2 < a1 ? 83886080 : 0x1000000);
    else
      return RtlpHpAllocateHeap(*v11, a1, 0x1000000, 0);
  }
  return v10;
}
