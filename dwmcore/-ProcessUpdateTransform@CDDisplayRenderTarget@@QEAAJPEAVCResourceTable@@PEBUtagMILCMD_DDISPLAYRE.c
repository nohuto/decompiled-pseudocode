/*
 * XREFs of ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801E55A8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C9D98 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801C71C0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?SetDisplayId@CDDisplaySwapChain@@QEAAXVDisplayId@@@Z @ 0x1801E6310 (-SetDisplayId@CDDisplaySwapChain@@QEAAXVDisplayId@@@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::ProcessUpdateTransform(
        CDDisplayRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM *a3)
{
  int v3; // edx
  __int128 v6; // xmm0
  float v7; // xmm3_4
  __int64 v8; // rax
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-48h]
  int v11[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 4613) != v3 )
  {
    *((_DWORD *)this + 4613) = v3;
    if ( *((_QWORD *)this + 23) )
      CDDisplaySwapChain::SetDisplayId();
  }
  v6 = *((_OWORD *)a3 + 1);
  v11[0] = *((_DWORD *)a3 + 9);
  v7 = *((float *)a3 + 8);
  v11[1] = *((_DWORD *)a3 + 10);
  v11[2] = *((_DWORD *)a3 + 11);
  v11[3] = *((_DWORD *)a3 + 12);
  v10 = *((_DWORD *)a3 + 13);
  v12 = v6;
  CMonitorTransform::Initialize((__int64)this + 18160, (int *)this + 26, (struct MilRectF *)&v12, v7, v10, v11);
  *((_BYTE *)this + 141) = 1;
  CDDisplayRenderTarget::UpdateMPOCaps((CDirectFlipInfo **)this + 18);
  v8 = *((_QWORD *)this + 22);
  if ( v8 )
    *(_BYTE *)(v8 + 4712) = 1;
  result = 0LL;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL) + 579LL) = 1;
  return result;
}
