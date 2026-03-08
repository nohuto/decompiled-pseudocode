/*
 * XREFs of ?VidSchiProcessIsrVSyncMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0036460
 * Callers:
 *     VidSchiProcessIsrVSync @ 0x1C000B2F0 (VidSchiProcessIsrVSync.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiProcessIsrVSyncMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a3,
        struct _VIDSCH_VSYNC_COOKIE *a4)
{
  __int64 EngineOrdinal; // rdi
  __int64 v6; // rcx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo; // rax
  __int64 v13; // r10
  __int64 v14; // r9
  int v15; // eax

  EngineOrdinal = a3->DmaCompleted.EngineOrdinal;
  v6 = *((unsigned int *)a1 + 38);
  if ( (unsigned int)EngineOrdinal > (unsigned int)v6 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 14LL, a1, EngineOrdinal, v6);
    __debugbreak();
  }
  *((_QWORD *)a2 + 5522) = a3->MiracastEncodeChunkCompleted.pPrivateDriverData;
  *((_BYTE *)a4 + 124) ^= (*((_BYTE *)a4 + 124) ^ (a3->Flags.Value >> 1)) & 1;
  memset((char *)a4 + 132, 0, 0x50uLL);
  v9 = 0;
  *((_DWORD *)a4 + 32) = EngineOrdinal;
  if ( (_DWORD)EngineOrdinal )
  {
    v10 = 0LL;
    v11 = (_DWORD *)((char *)a4 + 172);
    do
    {
      pMultiPlaneOverlayVsyncInfo = a3->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
      v13 = *((unsigned int *)a1 + 38);
      v14 = *(unsigned int *)((char *)&pMultiPlaneOverlayVsyncInfo->LayerIndex + v10);
      if ( (unsigned int)v14 >= (unsigned int)v13 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 14LL, a1, v14, v13);
        __debugbreak();
        JUMPOUT(0x1C0036575LL);
      }
      *(v11 - 10) = v14;
      ++v9;
      v15 = *(BOOL *)((char *)&pMultiPlaneOverlayVsyncInfo->Enabled + v10);
      v10 += 8LL;
      *v11++ = v15;
    }
    while ( v9 < (unsigned int)EngineOrdinal );
  }
}
