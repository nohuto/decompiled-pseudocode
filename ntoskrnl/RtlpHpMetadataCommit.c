/*
 * XREFs of RtlpHpMetadataCommit @ 0x1403C1314
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x1402F8FAC (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x140375668 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x1402499A0 (RtlpHpSegPageRangeCommit.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1402B689C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1402B72FC (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpSegDescriptorValidate @ 0x14030A740 (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpMetadataCommit(unsigned __int64 a1, int a2, unsigned __int64 a3, __int128 *a4, int a5)
{
  char *v8; // r14
  int v9; // eax
  unsigned __int64 v10; // rax
  __int64 v11; // r11
  unsigned __int64 v12; // rsi
  int v13; // r9d
  __int64 v15; // rax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = *a4;
  v8 = RtlpHpMetadataHeapCtxGet(&v16);
  if ( (_WORD)a1 )
  {
    v9 = 0;
  }
  else
  {
    v15 = RtlCSparseBitmapBitmaskRead((__int64)&unk_140C70D90, 2 * ((a1 - qword_140C70D88) >> 20));
    if ( v15 )
      v9 = v15 - 1;
    else
      v9 = 2;
  }
  v10 = RtlpHpSegDescriptorValidate(*(_QWORD *)v8 + 192LL * v9 + 320, a1);
  v12 = a3 >> 12;
  v13 = -(int)v12;
  if ( a5 )
    v13 = v12;
  return RtlpHpSegPageRangeCommit(v11 + 320, v10, (unsigned int)(a2 - a1) >> 12, v13, 0, 0LL);
}
