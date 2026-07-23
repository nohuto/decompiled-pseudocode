/*
 * XREFs of PopWakeInfoReference @ 0x1402522B8
 * Callers:
 *     PopHandleWakeSources @ 0x140999410 (PopHandleWakeSources.c)
 * Callees:
 *     <none>
 */

void __fastcall PopWakeInfoReference(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
