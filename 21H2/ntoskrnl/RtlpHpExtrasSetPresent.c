/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x1405F2F80
 * Callers:
 *     RtlpHpExtrasAppend @ 0x1405F2E5C (RtlpHpExtrasAppend.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14022FB20 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpEnvGetHeapManager @ 0x140362B58 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegSetExtraPresent @ 0x1405F327C (RtlpHpSegSetExtraPresent.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1405F3544 (RtlpHpLargeAllocSetExtraPresent.c)
 */

__int64 __fastcall RtlpHpExtrasSetPresent(__int128 *a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  _QWORD *HeapManager; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( (_WORD)a2 )
    return RtlpHpSegSetExtraPresent(&a1[12 * v3 + 20], a2);
  v11 = *a1;
  HeapManager = RtlpHpEnvGetHeapManager(&v11);
  v9 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 2), 2 * ((unsigned __int64)(v8 - HeapManager[1]) >> 20));
  if ( v9 && (v3 = v9 - 1, (_DWORD)v9 != 3) )
    return RtlpHpSegSetExtraPresent(&a1[12 * v3 + 20], a2);
  else
    return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
}
