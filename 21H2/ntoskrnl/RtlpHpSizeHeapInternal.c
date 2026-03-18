/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x1405F30C0
 * Callers:
 *     RtlpHpExtrasGet @ 0x1405F2F0C (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x1405F3028 (RtlpHpSizeHeap.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14022FB20 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpEnvGetHeapManager @ 0x140362B58 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegDescriptorValidate @ 0x140365700 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegSizeInternal @ 0x1405F32FC (RtlpHpSegSizeInternal.c)
 *     RtlpHpLargeAllocSize @ 0x1405F36B0 (RtlpHpLargeAllocSize.c)
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
    if ( v11 == 2 )
      return RtlpHpLargeAllocSize(a1, a2, a3, a4);
  }
  v13 = RtlpHpSegDescriptorValidate((__int64)&a1[12 * v11 + 20], a2);
  if ( v13 )
    return RtlpHpSegSizeInternal(v15 + (int)a1 + 320, v13, a2, v14, a4);
  else
    return -1LL;
}
