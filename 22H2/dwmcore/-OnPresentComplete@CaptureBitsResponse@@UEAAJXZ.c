/*
 * XREFs of ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x180193620
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180043334 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800439E4 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18019353C (-CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::OnPresentComplete(DWORD *this)
{
  int SectionBitmap; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int Bits; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx

  SectionBitmap = CaptureBitsResponse::CreateSectionBitmap(this);
  v4 = SectionBitmap;
  if ( SectionBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, SectionBitmap, 0x4Au, 0LL);
  }
  else
  {
    v5 = CaptureBitsResponse::MapSectionBitmap((CaptureBitsResponse *)this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v5, 0x4Cu, 0LL);
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits((CaptureBitsResponse *)this, v6, v8);
      v4 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Bits, 0x50u, 0LL);
    }
  }
  v11 = (*(__int64 (__fastcall **)(DWORD *, _QWORD))(*(_QWORD *)this + 48LL))(this, v4);
  v13 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x53u, 0LL);
  return v13;
}
