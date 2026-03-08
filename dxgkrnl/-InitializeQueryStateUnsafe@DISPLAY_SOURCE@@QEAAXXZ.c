/*
 * XREFs of ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C02B8F54
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E3050 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C019C1C0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

void __fastcall DISPLAY_SOURCE::InitializeQueryStateUnsafe(DISPLAY_SOURCE *this)
{
  unsigned int v2; // eax
  __int64 i; // rdi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9656LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9656LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *((_DWORD *)this + 940);
  for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
    if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
    {
      *((_BYTE *)this + i + 2904) = 1;
      memset((char *)this + 80 * i + 2920, 0, 0x50uLL);
    }
    else
    {
      *((_BYTE *)this + i + 2904) = 0;
    }
    v2 = *((_DWORD *)this + 940);
  }
  *((_DWORD *)this + 941) = v2;
  *((_BYTE *)this + 3720) = 1;
  *(_OWORD *)((char *)this + 3724) = 0LL;
  *(_OWORD *)((char *)this + 3740) = 0LL;
  *((_DWORD *)this + 939) = 0;
}
