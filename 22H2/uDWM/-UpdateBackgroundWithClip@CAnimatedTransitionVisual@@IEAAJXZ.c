/*
 * XREFs of ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180005940
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000EAD0 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x180005AD4 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180014F58 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180016F14 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001FEE0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18002C058 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800334D0 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x180033504 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawGeometryInstruction@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F7E0 (-InternalRelease@-$ComPtr@VCDrawGeometryInstruction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateBackgroundWithClip(CAnimatedTransitionVisual *this)
{
  int v1; // r10d
  const RECT *v2; // r15
  struct CRectangleGeometryProxy **v3; // r14
  int v4; // edx
  CBaseObject *v5; // rbx
  int v6; // eax
  int v7; // r9d
  struct tagRECT v8; // xmm0
  int v10; // ecx
  int v11; // eax
  int v12; // r8d
  int RectangleGeometry; // eax
  unsigned int v14; // edi
  struct CBaseLegacyMilBrushProxy *BrushNoRef; // rax
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-50h]
  struct CDrawGeometryInstruction *v22; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v23; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v1 = *((_DWORD *)this + 209);
  v2 = (const RECT *)((char *)this + 832);
  v3 = (struct CRectangleGeometryProxy **)((char *)this + 704);
  v4 = *((_DWORD *)this + 210) - *((_DWORD *)this + 208);
  v5 = 0LL;
  v6 = *((_DWORD *)this + 211);
  v7 = 0;
  v8 = (struct tagRECT)*((_OWORD *)this + 53);
  v22 = 0LL;
  v10 = *((_DWORD *)this + 208);
  v11 = v6 - v1;
  v23 = 0LL;
  if ( v11 >= 0 )
    v7 = v11;
  v12 = 0;
  rc = v8;
  if ( v4 >= 0 )
    v12 = v4;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v10, v1, v12, v7, v3);
  v14 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v20 = 1103LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v22);
    BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
    RectangleGeometry = CDrawGeometryInstruction::Create(BrushNoRef, *v3, &v22);
    v14 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v20 = 1109LL;
    }
    else
    {
      RectangleGeometry = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v22);
      v14 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        v20 = 1111LL;
      }
      else
      {
        v16 = RoundToNearestInt(*((float *)this + 187));
        v17 = RoundToNearestInt(*((float *)this + 186));
        OffsetRect(&rc, v17, v16);
        IntersectRect(&rcDst, v2, &rc);
        v18 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v23);
        v14 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x45D,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
            (const char *)(unsigned int)v18,
            v21);
          v5 = v23;
          goto LABEL_11;
        }
        v5 = v23;
        RectangleGeometry = CVisualProxy::SetClip(*((CVisualProxy **)this + 3), v23);
        v14 = RectangleGeometry;
        if ( RectangleGeometry >= 0 )
        {
          v14 = 0;
          goto LABEL_11;
        }
        v20 = 1120LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)RectangleGeometry,
    v21);
LABEL_11:
  Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v22);
  if ( v5 )
    CBaseObject::Release(v5);
  return v14;
}
