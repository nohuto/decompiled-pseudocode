/*
 * XREFs of ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x1800206D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x180020740 (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800207D8 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180020904 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCaptureBitsResponse::OnPresentComplete(VisualCaptureBitsResponse *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  int Bits; // eax
  unsigned int v8; // ecx

  v2 = CaptureBitsResponse::CalcSectionBitmapSize(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x2Cu, 0LL);
  }
  else
  {
    v5 = CaptureBitsResponse::MapSectionBitmap(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2Eu, 0LL);
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits(this);
      v4 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Bits, 0x31u, 0LL);
    }
  }
  (*(void (__fastcall **)(VisualCaptureBitsResponse *, _QWORD))(*(_QWORD *)this + 56LL))(this, v4);
  return v4;
}
