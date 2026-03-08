/*
 * XREFs of bKillPFFOBJ @ 0x1C00B72FC
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00B7040 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01181FC (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 * Callees:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C00B7328 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 */

__int64 __fastcall bKillPFFOBJ(PFFOBJ *a1, struct PFFCLEANUP *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 68LL) && !*(_DWORD *)(*(_QWORD *)a1 + 64LL) )
  {
    PFFOBJ::vPFFC_Delete(a1, a2);
    return 1LL;
  }
  return result;
}
