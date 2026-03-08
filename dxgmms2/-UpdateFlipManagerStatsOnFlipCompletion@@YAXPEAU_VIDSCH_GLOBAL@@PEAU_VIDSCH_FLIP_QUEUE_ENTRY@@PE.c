/*
 * XREFs of ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C0034EA0
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C000D060 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0017488 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x1C003478C (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z @ 0x1C0034818 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z.c)
 *     ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z @ 0x1C0034940 (-GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z.c)
 */

struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *__fastcall UpdateFlipManagerStatsOnFlipCompletion(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *result; // rax
  unsigned int v10; // ebx
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned int v13; // r14d
  unsigned __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+10h] BYREF

  result = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(a2 + 1328));
  v10 = 0;
  v11 = result;
  if ( result )
  {
    v12 = 0LL;
    v14 = 0LL;
    v15 = 0;
    if ( !a5 )
    {
      result = (struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *)VidSchiGetCurrentVSyncPeriodQpc(a1, a4, 0);
      v13 = (unsigned int)result;
      if ( *(_DWORD *)(a3 + 3032) == -1 || !*((_BYTE *)a1 + 6634) || *(_QWORD *)(a2 + 1304) )
      {
        v12 = *(_QWORD *)(a2 + 1112);
      }
      else
      {
        if ( (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedFrameTimeQpc(
                    *(VIDSCH_VSYNC_SMOOTHER **)(a3 + 44248),
                    *(_QWORD *)(a2 + 1128),
                    *(_QWORD *)(a2 + 1112),
                    &v14,
                    (unsigned int)result) >= 0 )
          v12 = v14;
        else
          v12 = *(_QWORD *)(a2 + 1112);
        result = (struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(
                                                                      *(VIDSCH_VSYNC_SMOOTHER **)(a3 + 44248),
                                                                      v13,
                                                                      &v15);
        if ( (int)result >= 0 )
        {
          v10 = v15;
          goto LABEL_13;
        }
      }
      v10 = v13;
    }
LABEL_13:
    *((_DWORD *)v11 + 7) = 1;
    *((_QWORD *)v11 + 4) = v12;
    *((_DWORD *)v11 + 10) = v10;
  }
  return result;
}
