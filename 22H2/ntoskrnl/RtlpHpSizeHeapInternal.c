/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x140594A6C
 * Callers:
 *     RtlpHpExtrasGet @ 0x1405948A8 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x1405949C4 (RtlpHpSizeHeap.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x140289A94 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegDescriptorValidate @ 0x1402C2960 (RtlpHpSegDescriptorValidate.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1402FABD0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegSizeInternal @ 0x140595008 (RtlpHpSegSizeInternal.c)
 *     RtlpHpLargeAllocSize @ 0x1405953A4 (RtlpHpLargeAllocSize.c)
 */

__int64 __fastcall RtlpHpSizeHeapInternal(__int128 *a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *HeapManager; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v13; // rax
  int v14; // r9d
  int v15; // r10d
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  if ( (_WORD)a2 )
  {
    v11 = 0;
  }
  else
  {
    v16 = *a1;
    HeapManager = RtlpHpEnvGetHeapManager(&v16);
    v10 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 2), 2 * ((unsigned __int64)(v9 - HeapManager[1]) >> 20));
    if ( !v10 )
      return RtlpHpLargeAllocSize(a1, a2, a3, a4);
    v11 = v10 - 1;
  }
  if ( v11 == 2 )
    return RtlpHpLargeAllocSize(a1, a2, a3, a4);
  v13 = RtlpHpSegDescriptorValidate((__int64)&a1[12 * v11 + 16], a2);
  if ( v13 )
    return RtlpHpSegSizeInternal(v15 + (int)a1 + 256, v13, a2, v14, a4);
  else
    return -1LL;
}
