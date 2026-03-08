/*
 * XREFs of ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00B75A4
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00B7040 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01181FC (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0123C28 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02D8794 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vCleanupFontFile(struct PFFCLEANUP *a1)
{
  if ( *((_QWORD *)a1 + 1) )
  {
    if ( !*((_QWORD *)a1 + 2) )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 3032LL))(*((_QWORD *)a1 + 1));
  }
}
