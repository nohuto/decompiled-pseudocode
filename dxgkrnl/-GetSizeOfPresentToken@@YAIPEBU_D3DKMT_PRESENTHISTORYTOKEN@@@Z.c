/*
 * XREFs of ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C033997C
 * Callers:
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0371F08 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall GetSizeOfPresentToken(const struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  int v1; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v3; // rbx
  UINT NumRects; // eax
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax

  if ( a1->Model == D3DKMT_PM_REDIRECTED_GDI )
  {
    FlipInterval = a1->Token.Flip.FlipInterval;
    if ( (unsigned int)FlipInterval > 0x10 )
    {
      v3 = 53LL;
      WdLogSingleEntry1(1LL, 53LL);
      goto LABEL_20;
    }
    v1 = 16 * FlipInterval + 67;
  }
  else if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
  {
    NumRects = a1->Token.Flip.DirtyRegions.NumRects;
    if ( NumRects > 0x10 )
    {
      v3 = 63LL;
      WdLogSingleEntry1(1LL, 63LL);
      goto LABEL_20;
    }
    v1 = 16 * NumRects + 831;
  }
  else
  {
    if ( a1->Model != D3DKMT_PM_REDIRECTED_BLT )
    {
      if ( a1->Model == D3DKMT_PM_REDIRECTED_VISTABLT
        || a1->Model == D3DKMT_PM_SCREENCAPTUREFENCE
        || a1->Model == D3DKMT_PM_REDIRECTED_COMPOSITION
        || a1->Model == D3DKMT_PM_SURFACECOMPLETE )
      {
        v1 = 31;
      }
      else if ( a1->Model == D3DKMT_PM_FLIPMANAGER )
      {
        v1 = 47;
      }
      else
      {
        WdLogSingleEntry1(1LL, 96LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Unknown type for present history token is found in queue.",
          96LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v1 = 7;
      }
      return v1 & 0xFFFFFFF8;
    }
    VidPnSourceId = a1->Token.Flip.VidPnSourceId;
    if ( VidPnSourceId > 0x10 )
    {
      v3 = 73LL;
      WdLogSingleEntry1(1LL, 73LL);
LABEL_20:
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", v3, 0LL, 0LL, 0LL, 0LL);
      return 0LL;
    }
    v1 = 16 * VidPnSourceId + 51;
  }
  return v1 & 0xFFFFFFF8;
}
