/*
 * XREFs of KiBugCheckWriteCrashDump @ 0x1405676EC
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KiCaptureDumpPostRecovery @ 0x140578810 (KiCaptureDumpPostRecovery.c)
 * Callees:
 *     IoSaveBugCheckProgress @ 0x14054E5E0 (IoSaveBugCheckProgress.c)
 *     IoWriteCrashDump @ 0x14054EF00 (IoWriteCrashDump.c)
 */

char __fastcall KiBugCheckWriteCrashDump(__int64 a1)
{
  char v1; // bl

  v1 = IoWriteCrashDump(
         KiBugCheckData,
         qword_140C42448,
         qword_140C42450,
         qword_140C42458,
         qword_140C42460,
         *(_OWORD **)a1,
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 16),
         *(_BYTE *)(a1 + 32));
  IoSaveBugCheckProgress(3);
  return v1;
}
