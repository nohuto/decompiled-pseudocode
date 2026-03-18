/*
 * XREFs of EtwpKernelProvEnableCallback @ 0x1408662A0
 * Callers:
 *     <none>
 * Callees:
 *     SeEtwEnableCallback @ 0x1403B6478 (SeEtwEnableCallback.c)
 */

void __fastcall EtwpKernelProvEnableCallback(
        __int64 SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  SeEtwEnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword);
}
