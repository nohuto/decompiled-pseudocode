/*
 * XREFs of ?CheckOcclusionState@CLegacySwapChain@@UEBAJXZ @ 0x1800C3BD8
 * Callers:
 *     ?CheckOcclusionState@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ @ 0x1800F6CD0 (-CheckOcclusionState@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?CheckOcclusionState@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJXZ @ 0x1800F7190 (-CheckOcclusionState@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJXZ.c)
 *     ?CheckOcclusionState@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ @ 0x1800F7470 (-CheckOcclusionState@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckOcclusionState@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@@Z @ 0x1800C3C20 (-CheckOcclusionState@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180152914 (McTemplateU0xq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacySwapChain::CheckOcclusionState(CLegacySwapChain *this)
{
  struct IDXGISwapChainDWM1 *v1; // rdx
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v1 = (struct IDXGISwapChainDWM1 *)*((_QWORD *)this - 35);
  if ( v1 )
  {
    v2 = CD3DDevice::CheckOcclusionState(*((CD3DDevice **)this - 36), v1);
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802ACF58, 2u, v2, 0x15Du, 0LL);
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802ACF58, 2u, -2003304307, 0x161u, 0LL);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xq_EventWriteTransfer(v3, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE, 0LL, v4);
  return v4;
}
