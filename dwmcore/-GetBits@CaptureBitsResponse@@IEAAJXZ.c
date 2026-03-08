/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180020904
 * Callers:
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x1800206D0 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1801DCD50 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180020AA4 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180020BD4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A72B4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  int RenderTargetBitmap; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // eax
  FastRegion::Internal::CRgnData *v14; // rcx
  int v15; // eax
  int v17; // eax
  unsigned int v18; // ecx
  _BYTE v19[8]; // [rsp+30h] [rbp-9h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-1h]
  _DWORD *v21; // [rsp+40h] [rbp+7h]
  __int64 v22; // [rsp+48h] [rbp+Fh]
  int v23; // [rsp+50h] [rbp+17h]
  _DWORD v24[4]; // [rsp+60h] [rbp+27h] BYREF
  __int128 v25; // [rsp+70h] [rbp+37h] BYREF

  v3 = *((_DWORD *)this + 409);
  v24[0] = 0;
  v24[1] = 0;
  v24[2] = v3;
  v24[3] = *((_DWORD *)this + 410);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_RTCAPTURE_GETBITS,
      a3,
      1LL,
      &v25);
  RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(this);
  v7 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, RenderTargetBitmap, 0xA4u, 0LL);
  }
  else
  {
    v8 = CaptureBitsResponse::RenderForCapture(this);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xA7u, 0LL);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 184LL))(*((_QWORD *)this + 6)) )
    {
      FastRegion::Internal::CRgnData::BeginIterator(
        *(FastRegion::Internal::CRgnData **)(*((_QWORD *)this + 6) + 4608LL),
        (struct FastRegion::CRegion::Iterator *)v19);
      while ( (unsigned __int64)v21 < v20 )
      {
        v25 = 0LL;
        DWORD1(v25) = *v21;
        HIDWORD(v25) = v21[2];
        v11 = 2 * v23;
        LODWORD(v25) = *(_DWORD *)(v22 + 4 * v11);
        v12 = *(_DWORD *)(v22 + 4 * v11 + 4);
        LODWORD(v11) = *((_DWORD *)this + 408);
        v13 = *((_DWORD *)this + 407);
        DWORD1(v25) -= v11;
        LODWORD(v25) = v25 - v13;
        HIDWORD(v25) -= v11;
        DWORD2(v25) = v12 - v13;
        if ( (unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(
                                &v25,
                                v24) )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 8) + 48LL))(
                  *((_QWORD *)this + 8),
                  &v25,
                  *((_QWORD *)this + 210),
                  (unsigned int)v25,
                  DWORD1(v25));
          v7 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v14, 0LL, 0, v15, 0xBEu, 0LL);
            break;
          }
        }
        FastRegion::Internal::CRgnData::StepIterator(v14, (struct FastRegion::CRegion::Iterator *)v19);
      }
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 8) + 48LL))(
              *((_QWORD *)this + 8),
              v24,
              *((_QWORD *)this + 210),
              0LL,
              0);
      v7 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xC4u, 0LL);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_RTCAPTURE_Stop,
      v10,
      1LL,
      &v25);
  return v7;
}
