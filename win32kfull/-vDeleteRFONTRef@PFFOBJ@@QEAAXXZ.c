/*
 * XREFs of ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0123C28
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0123828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C0130380 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     vKillRFONTList @ 0x1C026E230 (vKillRFONTList.c)
 *     ?GreGetKerningPairs@@YAKPEAUHDC__@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C02906A8 (-GreGetKerningPairs@@YAKPEAUHDC__@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B7BC0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02B9C90 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C00B7328 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00B75A4 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
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
  v6 = *((_QWORD *)Gre::Base::Globals(this) + 6);
  GreAcquireSemaphore(v6);
  --*(_DWORD *)(*(_QWORD *)this + 68LL);
  v3 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 56LL) && !*(_QWORD *)(v3 + 144) && !*(_DWORD *)(v3 + 68) && !*(_DWORD *)(v3 + 64) )
  {
    PFFOBJ::vPFFC_Delete((void **)this, (struct PFFCLEANUP *)&v4);
    v2 = 1;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  if ( v2 )
    vCleanupFontFile((struct PFFCLEANUP *)&v4);
}
