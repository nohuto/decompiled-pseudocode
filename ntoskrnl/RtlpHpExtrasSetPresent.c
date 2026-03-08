/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x1405B4174
 * Callers:
 *     RtlpHpExtrasAppend @ 0x1405B4050 (RtlpHpExtrasAppend.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x1402B689C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegSetExtraPresent @ 0x1405B4720 (RtlpHpSegSetExtraPresent.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1405B4B94 (RtlpHpLargeAllocSetExtraPresent.c)
 */

__int64 __fastcall RtlpHpExtrasSetPresent(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  __int64 v7; // rax

  v3 = 0;
  if ( (_WORD)a2 )
    return RtlpHpSegSetExtraPresent(a1 + 192LL * v3 + 320, a2);
  v7 = RtlCSparseBitmapBitmaskRead((__int64)&unk_140C70D90, 2 * ((unsigned __int64)(a2 - qword_140C70D88) >> 20));
  if ( v7 && (v3 = v7 - 1, (_DWORD)v7 != 3) )
    return RtlpHpSegSetExtraPresent(a1 + 192LL * v3 + 320, a2);
  else
    return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
}
