/*
 * XREFs of ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C000B1C8
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C000AD70 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     GreGetKerningPairs @ 0x1C01301E4 (GreGetKerningPairs.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C015F378 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C016FEF6 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     vKillRFONTList @ 0x1C027108C (vKillRFONTList.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A5B8C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A6B30 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02A7380 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C000C12C (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C000CDEC (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFOBJ::vDeleteRFONTRef(PFFOBJ *this)
{
  int v2; // ebx
  __int64 v3; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v2 = 0;
  v6 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  --*(_DWORD *)(*(_QWORD *)this + 68LL);
  v3 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 56LL) && !*(_QWORD *)(v3 + 144) && !*(_DWORD *)(v3 + 68) && !*(_DWORD *)(v3 + 64) )
  {
    PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)&v4);
    v2 = 1;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  if ( v2 )
    vCleanupFontFile((struct PFFCLEANUP *)&v4);
}
