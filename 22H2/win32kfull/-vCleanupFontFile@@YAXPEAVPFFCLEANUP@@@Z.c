/*
 * XREFs of ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C007C488
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C007BD70 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0087CDC (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01149B0 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02D6950 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vCleanupFontFile(struct PFFCLEANUP *a1)
{
  if ( *((_QWORD *)a1 + 1) )
  {
    if ( !*((_QWORD *)a1 + 2) )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 3032LL))(*((_QWORD *)a1 + 1));
  }
}
