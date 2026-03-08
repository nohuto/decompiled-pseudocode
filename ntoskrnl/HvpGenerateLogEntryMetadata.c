/*
 * XREFs of HvpGenerateLogEntryMetadata @ 0x1402B24D4
 * Callers:
 *     HvpGenerateLogEntry @ 0x14072DD08 (HvpGenerateLogEntry.c)
 * Callees:
 *     HvpCopyDataToOffsetArray @ 0x14030C52C (HvpCopyDataToOffsetArray.c)
 *     HvpGenerateLogMetadata @ 0x1407EA6F0 (HvpGenerateLogMetadata.c)
 */

__int64 __fastcall HvpGenerateLogEntryMetadata(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v9; // r9d

  HvpGenerateLogMetadata((PRTL_BITMAP)(a1 + 88));
  return HvpCopyDataToOffsetArray(a6, 8 * a7, a2, v9, a4, a5);
}
