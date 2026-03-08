/*
 * XREFs of ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1800CDAF4
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18004EF0C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001D044 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003A7C0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800525D0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1800CE0BC (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1800CE364 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDisplayId@CCachedTarget@CCachedVisualImage@@QEBA?AVDisplayId@@XZ @ 0x1802143E8 (-GetDisplayId@CCachedTarget@CCachedVisualImage@@QEBA-AVDisplayId@@XZ.c)
 *     ?IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1802144D4 (-IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 */

__int64 __fastcall CCachedVisualImage::Snapshot(CCachedVisualImage *this)
{
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  struct IMonitorTarget *v3; // rcx
  __int64 v4; // rax
  struct IRenderTargetBitmap *v5; // rdi
  char *v6; // rcx
  struct D2D_SIZE_U *v7; // rax
  struct D2D_SIZE_U v8; // rdx
  CCachedVisualImage::CCachedTarget **v9; // rbx
  CCachedVisualImage::CCachedTarget *v10; // r14
  __int64 v11; // rax
  _DWORD *DisplayId; // rax
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h]
  char v16[24]; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+88h] [rbp+38h] BYREF
  struct IRenderTargetBitmap *v18; // [rsp+90h] [rbp+40h] BYREF
  CCachedVisualImage::CCachedTarget **v19; // [rsp+98h] [rbp+48h] BYREF

  CDisplayManager::GetPrimaryAdapterLuid(this);
  LODWORD(v15) = 0;
  *((_QWORD *)&v14 + 1) = DisplayId::None;
  BYTE4(v15) = 0;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 27));
  if ( PrimaryMonitorTarget )
  {
    v3 = (struct IMonitorTarget *)((char *)PrimaryMonitorTarget
                                 + *(int *)(*((_QWORD *)PrimaryMonitorTarget + 1) + 12LL)
                                 + 8);
    v4 = (**(__int64 (__fastcall ***)(struct IMonitorTarget *, char *))v3)(v3, v16);
    v14 = *(_OWORD *)v4;
    v15 = *(_QWORD *)(v4 + 16);
  }
  v18 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v18);
  if ( (int)CCachedVisualImage::EnsureRenderTargetBitmap(
              (struct D2D_SIZE_U *)this,
              (const struct RenderTargetInfo *)&v14,
              &v18) < 0 )
  {
    *((_BYTE *)this + 1776) = 1;
  }
  else
  {
    v5 = v18;
    v6 = (char *)v18 + *(int *)(*((_QWORD *)v18 + 1) + 16LL) + 8;
    v7 = (struct D2D_SIZE_U *)(**(__int64 (__fastcall ***)(char *, char *))v6)(v6, &v17);
    v8 = *v7;
    *((struct D2D_SIZE_U *)this + 221) = *v7;
    CCachedVisualImage::RemoveInvalidTargets(this, v8);
    v9 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 24);
    while ( v9 != *((CCachedVisualImage::CCachedTarget ***)this + 25) )
    {
      v10 = *v9;
      if ( *((struct IRenderTargetBitmap **)*v9 + 1) != v5
        && (*((_BYTE *)v10 + 57)
         || ((DisplayId = (_DWORD *)CCachedVisualImage::CCachedTarget::GetDisplayId(*v9, &v17),
              *DisplayId == DisplayId::None)
          || *DisplayId == DisplayId::All)
         && !CCachedVisualImage::CCachedTarget::IsHardwareProtected(v10)) )
      {
        v9 = *std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase((__int64)this + 192, &v19, v9);
      }
      else
      {
        ++v9;
      }
    }
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 64LL))(this);
    v11 = *(_QWORD *)this;
    *((_BYTE *)this + 1777) = 1;
    (*(void (__fastcall **)(CCachedVisualImage *))(v11 + 224))(this);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18);
  return 0LL;
}
