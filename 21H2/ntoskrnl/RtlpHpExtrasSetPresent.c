/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x140594C0C
 * Callers:
 *     RtlpHpExtrasAppend @ 0x140594AE8 (RtlpHpExtrasAppend.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14021F7C0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpEnvGetHeapManager @ 0x140314164 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegSetExtraPresent @ 0x140595278 (RtlpHpSegSetExtraPresent.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x140595540 (RtlpHpLargeAllocSetExtraPresent.c)
 */

__int64 __fastcall RtlpHpExtrasSetPresent(__int128 *a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  _QWORD *HeapManager; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( !(_WORD)a2 )
  {
    v11 = *a1;
    HeapManager = RtlpHpEnvGetHeapManager(&v11);
    v9 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 2), 2 * ((unsigned __int64)(v8 - HeapManager[1]) >> 20));
    if ( !v9 )
      return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
    v3 = v9 - 1;
  }
  if ( v3 == 2 )
    return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
  return RtlpHpSegSetExtraPresent(&a1[12 * v3 + 16], a2);
}
