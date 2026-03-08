/*
 * XREFs of ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02D8794
 * Callers:
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011D160 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C02D7CD0 (-CleanUpPFF@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C00B7328 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00B75A4 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 */

void __fastcall PFFOBJ::vPFFC_DeleteAndCleanup(void **this)
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  v2 = 0LL;
  PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)&v1);
  vCleanupFontFile((struct PFFCLEANUP *)&v1);
}
