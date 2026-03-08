/*
 * XREFs of ?IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x1801E4650
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18008B894 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 */

bool __fastcall CLegacyRenderTarget::IsComputeScribbleSupported(CLegacyRenderTarget *this)
{
  __int64 v2; // r8

  if ( !*((_QWORD *)this + 5) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v2 = 10LL;
LABEL_7:
      McTemplateU0q_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        v2);
      return 0;
    }
    return 0;
  }
  if ( (unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this + 56) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v2 = 1LL;
      goto LABEL_7;
    }
    return 0;
  }
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 296LL))(*((_QWORD *)this + 5));
}
