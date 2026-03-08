/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x1801EDC30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x1800C7B10 (--0CMonitorTransform@@QEAA@XZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C9D98 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1801F627C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 */

__int64 __fastcall CRemoteRenderTarget::HandleDDAArrivalOrDeparture(CRemoteRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  CResource **v5; // rsi
  CResource *v6; // rdx
  CResource *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v11[4]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v12[256]; // [rsp+40h] [rbp-118h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    v5 = (CResource **)((char *)this + 40);
    v6 = (CResource *)*((_QWORD *)this + 5);
    if ( (v4 != 0) != (v6 != 0LL) )
    {
      if ( v6 )
      {
        *v5 = 0LL;
        CResource::InternalRelease(v6);
      }
      else
      {
        CMonitorTransform::CMonitorTransform((CMonitorTransform *)v12);
        v11[0] = 0;
        v11[1] = 0;
        CMonitorTransform::Initialize((__int64)v12, v11, (CRemoteRenderTarget *)((char *)this + 64), 1.0, 1, 0LL);
        v7 = *v5;
        *v5 = 0LL;
        if ( v7 )
          CResource::InternalRelease(v7);
        v8 = CDDARenderTarget::Create(
               *((struct IDXGIOutputDWM **)this + 3),
               *((struct CDesktopTree **)this + 6),
               (CRemoteRenderTarget *)((char *)this + 148),
               (const struct CMonitorTransform *)v12,
               (struct CDDARenderTarget **)this + 5);
        v2 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x12Cu, 0LL);
      }
    }
  }
  return v2;
}
