/*
 * XREFs of ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800DBC00
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180019550 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAXAEBVCMILMatrix@@@Z @ 0x1800196E4 (-PopDeviceTransform@CDrawingContext@@IEAAXAEBVCMILMatrix@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008D178 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CExternalLayer::RestoreState(CExternalLayer *this, struct CDrawingContext *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // eax
  __int64 v20; // rcx
  _BYTE v21[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Start,
      a3,
      1LL,
      v21);
  v5 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(*(_QWORD *)this + 32LL))(this, a2);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xD3u, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 5);
    if ( v8 )
      *((_QWORD *)a2 + 1009) = v8;
    if ( *((_BYTE *)this + 34) )
    {
      v9 = *((_DWORD *)a2 + 796);
      if ( v9 )
        *((_DWORD *)a2 + 796) = v9 - 1;
      --*(_QWORD *)(*((_QWORD *)a2 + 113) - 184LL);
      *((_BYTE *)a2 + 8169) = 1;
      *((_BYTE *)this + 34) = 0;
    }
    if ( *((_BYTE *)this + 33) && (v10 = CDrawingContext::PopRenderTargetInternal(a2, 0), v7 = v10, v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xE4u, 0LL);
    }
    else
    {
      if ( *((_BYTE *)this + 32) )
      {
        CDrawingContext::PopDeviceTransform(a2, (CExternalLayer *)((char *)this + 48));
        *((_BYTE *)this + 32) = 0;
      }
      v12 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(*(_QWORD *)this + 40LL))(this, a2);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xEDu, 0LL);
      }
      else
      {
        v14 = *(_QWORD *)this;
        if ( *((_BYTE *)a2 + 193) )
        {
          v19 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(v14 + 56))(this, a2);
          v7 = v19;
          if ( v19 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xF6u, 0LL);
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(v14 + 48))(this, a2);
          v7 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xFAu, 0LL);
        }
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop,
      v17,
      1LL,
      v21);
  return v7;
}
