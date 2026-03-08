/*
 * XREFs of ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18010A5AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x1800C7B10 (--0CMonitorTransform@@QEAA@XZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C9D98 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800CA0D4 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo_ea_1800CA0D4.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801F687C (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 */

__int64 __fastcall CRemoteRenderTarget::ProcessUpdateTransform(
        CRemoteRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM *a3)
{
  float v3; // xmm1_4
  struct MilRectF *v4; // rbp
  float v6; // xmm3_4
  float v8; // xmm0_4
  _DWORD *v9; // rdi
  float v10; // xmm2_4
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  CResource *v15; // rcx
  int v16; // eax
  float v17; // xmm1_4
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // [rsp+30h] [rbp-128h] BYREF
  int v22; // [rsp+34h] [rbp-124h]
  float v23; // [rsp+38h] [rbp-120h]
  float v24; // [rsp+3Ch] [rbp-11Ch]
  _BYTE v25[256]; // [rsp+40h] [rbp-118h] BYREF

  v3 = *((float *)a3 + 4);
  v4 = (CRemoteRenderTarget *)((char *)this + 208);
  *((float *)this + 52) = v3;
  v6 = *((float *)a3 + 5);
  *((float *)this + 53) = v6;
  v8 = *((float *)a3 + 6);
  *((float *)this + 54) = v8;
  v9 = (_DWORD *)((char *)this + 108);
  v10 = *((float *)a3 + 7);
  *((float *)this + 55) = v10;
  v11 = (int)(float)(v8 - v3);
  if ( __PAIR64__(*v9, *((_DWORD *)this + 26)) != __PAIR64__((int)(float)(v10 - v6), v11) )
  {
    *((_DWORD *)this + 26) = v11;
    *v9 = (int)(float)(v10 - v6);
    v12 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = 0LL;
    if ( v12 )
    {
      v19 = v12 + 8 + *(int *)(*(_QWORD *)(v12 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  v13 = *((_QWORD *)a3 + 1);
  if ( *((_QWORD *)this + 25) == v13 )
  {
    if ( *((_QWORD *)this + 23) )
    {
      CMonitorTransform::CMonitorTransform((CMonitorTransform *)v25);
      v21 = 0;
      v22 = 0;
      CMonitorTransform::Initialize((__int64)v25, &v21, v4, 1.0, 1, 0LL);
      CDDARenderTarget::UpdateTransform(*((CDDARenderTarget **)this + 23), (const struct CMonitorTransform *)v25);
    }
  }
  else
  {
    *((_QWORD *)this + 25) = v13;
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)this + 21);
    v14 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = 0LL;
    if ( v14 )
    {
      v20 = v14 + 8 + *(int *)(*(_QWORD *)(v14 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v15 = (CResource *)*((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v15 )
      CResource::InternalRelease(v15);
  }
  v16 = *((_DWORD *)this + 26);
  v21 = 0;
  v22 = 0;
  v17 = (float)(int)*v9;
  v23 = (float)v16;
  v24 = v17;
  CMILMatrix::InferAffineMatrix((CRemoteRenderTarget *)((char *)this + 224));
  result = 0LL;
  *((_BYTE *)this + 141) = 1;
  return result;
}
