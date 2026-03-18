/*
 * XREFs of RtlpHpMetadataCommit @ 0x14036F520
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x14036F04C (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x1403700FC (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14022FB20 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegPageRangeCommit @ 0x1403507F0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpEnvGetHeapManager @ 0x140362B58 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegDescriptorValidate @ 0x140365700 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140371398 (RtlpHpMetadataHeapCtxGet.c)
 */

__int64 __fastcall RtlpHpMetadataCommit(unsigned __int64 a1, int a2, unsigned __int64 a3, __int128 *a4, int a5)
{
  __int128 **v8; // rax
  __int128 **v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // r10
  unsigned __int64 v13; // rbp
  int v14; // r9d
  _QWORD *HeapManager; // rax
  __int64 v17; // rax
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v18 = *a4;
  v8 = (__int128 **)RtlpHpMetadataHeapCtxGet(&v18);
  v9 = v8;
  if ( (_WORD)a1 )
  {
    v10 = 0;
  }
  else
  {
    v18 = **v8;
    HeapManager = RtlpHpEnvGetHeapManager(&v18);
    v17 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 2), 2 * ((a1 - HeapManager[1]) >> 20));
    if ( v17 )
      v10 = v17 - 1;
    else
      v10 = 2;
  }
  v11 = RtlpHpSegDescriptorValidate((__int64)&(*v9)[12 * v10 + 20], a1);
  v13 = a3 >> 12;
  v14 = -(int)v13;
  if ( a5 )
    v14 = v13;
  return RtlpHpSegPageRangeCommit(v12 + 320, v11, (unsigned int)(a2 - a1) >> 12, v14, 0, 0LL);
}
