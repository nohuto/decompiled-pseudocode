/*
 * XREFs of ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x1800853C8
 * Callers:
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180082F30 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180082FA8 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800957B0 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLivePreviewTimeline::RestartTimeline(__int64 a1, int a2, double a3)
{
  unsigned int v3; // r8d
  double v4; // xmm0_8
  double v5; // xmm0_8
  __int64 result; // rax

  *(_DWORD *)(a1 + 80) = a2;
  v3 = 0;
  if ( *(_BYTE *)(a1 + 72)
    || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(double *)(a1 + 48) - 0.0) & _xmm) <= 0.0000011920929 )
  {
    if ( a2 == 3 )
    {
      *(_QWORD *)(a1 + 88) = 0x3FF0000000000000LL;
      goto LABEL_12;
    }
    if ( a2 == 4 )
    {
      *(_QWORD *)(a1 + 88) = 0LL;
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  if ( a2 != 3 )
  {
    if ( a2 == 4 )
    {
      v5 = (1.0 - *(double *)(a1 + 48)) * *(double *)(a1 + 88);
      *(double *)(a1 + 88) = v5;
      a3 = (1.0 - v5) * a3;
      goto LABEL_12;
    }
LABEL_11:
    v3 = -2147467259;
    goto LABEL_12;
  }
  v4 = (1.0 - *(double *)(a1 + 88)) * *(double *)(a1 + 48) + *(double *)(a1 + 88);
  *(double *)(a1 + 88) = v4;
  a3 = v4 * a3;
LABEL_12:
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 32);
  *(double *)(a1 + 24) = a3;
  *(_WORD *)(a1 + 72) = 256;
  result = v3;
  CDesktopManager::s_fTimelineDirty = 1;
  return result;
}
