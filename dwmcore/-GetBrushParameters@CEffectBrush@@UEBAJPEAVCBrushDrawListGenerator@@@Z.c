__int64 __fastcall CEffectBrush::GetBrushParameters(CEffectBrush *this, struct CBrushDrawListGenerator *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_EFFECTBRUSH_DRAW_ERROR_INVALID_NESTING,
      a3,
      1u,
      &v4);
  return 2147942450LL;
}
