/*
 * XREFs of ?Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x1800ABE90
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CAsyncFlushResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@I@Z @ 0x1800ABF0C (--0CAsyncFlushResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@I@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x1800AC020 (-ReleaseResponseRef@CResponseItem@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800EB4FC (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 */

__int64 __fastcall CGlobalComposition::Channel_AsyncFlush(
        CGlobalComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_ASYNCFLUSH *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  struct CGlobalSurfaceManager *v7; // rbp
  CAsyncFlushResponse *v8; // rax
  unsigned int v9; // ecx
  CResponseItem *v10; // rax

  v4 = 0;
  v5 = *((_DWORD *)a4 + 1);
  v7 = (struct CGlobalSurfaceManager *)*((_QWORD *)g_pComposition + 28);
  v8 = (CAsyncFlushResponse *)operator new(0x38uLL);
  if ( v8 && (v10 = CAsyncFlushResponse::CAsyncFlushResponse(v8, v7, a2, v5)) != 0LL )
  {
    CResponseItem::ReleaseResponseRef(v10);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x149u, 0LL);
    CAsyncFlushResponse::SendResponseWorker(a2, v5, -2147024882);
  }
  return v4;
}
