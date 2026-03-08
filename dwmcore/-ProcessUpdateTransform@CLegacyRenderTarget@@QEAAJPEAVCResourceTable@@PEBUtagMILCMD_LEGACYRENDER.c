/*
 * XREFs of ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800C8A5C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x1800C8D30 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C9C4C (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C9D98 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801F687C (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessUpdateTransform(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM *a3)
{
  int v3; // edx
  CDDARenderTarget *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int128 v11; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[192]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 4617) != v3 )
  {
    *((_DWORD *)this + 4617) = v3;
    v10 = *((_QWORD *)this + 23);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 240LL))(v10);
  }
  CLegacyRenderTarget::EnsureDXGIOutput(this);
  v11 = *((_OWORD *)a3 + 1);
  CMonitorTransform::Initialize((char *)this + 18168, (char *)this + 104, &v11);
  *((_BYTE *)this + 141) = 1;
  CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 144));
  v6 = (CDDARenderTarget *)*((_QWORD *)this + 24);
  if ( v6 )
    CDDARenderTarget::UpdateTransform(v6, (CLegacyRenderTarget *)((char *)this + 18168));
  v7 = *((_QWORD *)this + 22);
  if ( v7 && (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 32LL))(v7, v12) >= 0 )
    *((_BYTE *)this + 18697) = (v12[108] & 8) != 0;
  v8 = *((_QWORD *)this + 21);
  if ( v8 )
    *(_BYTE *)(v8 + 4712) = 1;
  result = 0LL;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL) + 579LL) = 1;
  return result;
}
