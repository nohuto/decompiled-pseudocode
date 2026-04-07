/*
 * XREFs of ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800AD5B8
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800AC1C8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800ACCDC (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180004E40 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180014F58 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180016F14 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002496C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x180033504 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawGeometryInstruction@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F7E0 (-InternalRelease@-$ComPtr@VCDrawGeometryInstruction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScreenRotation::UpdateBackgroundInstructionsAndSize(
        CScreenRotation *this,
        const struct tagSIZE *a2,
        char a3)
{
  LONG cx; // eax
  struct CBaseGeometryProxy *v5; // rbx
  __int64 v8; // rax
  LONG v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rax
  struct CBaseLegacyMilBrushProxy *v14; // rcx
  __int128 v15; // xmm0
  struct CSolidRectangleInstruction *v16; // rdx
  struct CSolidRectangleInstruction *v18; // [rsp+20h] [rbp-40h] BYREF
  struct CDrawGeometryInstruction *v19; // [rsp+28h] [rbp-38h] BYREF
  struct tagRECT v20; // [rsp+30h] [rbp-30h] BYREF
  CBaseObject *v21[2]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  cx = a2->cx;
  v19 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v20.left = cx;
  v20.top = a2->cy;
  v8 = *(_QWORD *)this;
  v21[0] = 0LL;
  (*(void (__fastcall **)(CScreenRotation *, struct tagRECT *))(v8 + 96))(this, &v20);
  CRenderDataVisual::ClearInstructions(this);
  if ( a3 )
  {
    v9 = *((_DWORD *)this + 30);
    v20.left = 0;
    v20.top = 0;
    v20.right = v9;
    v20.bottom = *((_DWORD *)this + 31);
    v10 = ResourceHelper::CreateRectangleGeometry(&v20, v21);
    v5 = v21[0];
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 38LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"clientcore\\windows\\dwm\\udwm\\screenrotation.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_16;
    }
    Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v19);
    v13 = *((_QWORD *)this + 39);
    v14 = *(struct CBaseLegacyMilBrushProxy **)(v13 + 600);
    if ( !v14 )
      v14 = *(struct CBaseLegacyMilBrushProxy **)(v13 + 584);
    v10 = CDrawGeometryInstruction::Create(v14, v5, &v19);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 39LL;
      goto LABEL_14;
    }
    v10 = CRenderDataVisual::AddInstruction(this, v19);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 40LL;
      goto LABEL_14;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v18);
    v10 = CSolidRectangleInstruction::Create(&v18);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 45LL;
      goto LABEL_14;
    }
    v15 = *(_OWORD *)((char *)this + 364);
    v16 = v18;
    v21[0] = 0LL;
    *((_OWORD *)v18 + 1) = v15;
    *(float *)&v15 = (float)a2->cy;
    *(float *)&v21[1] = (float)a2->cx;
    HIDWORD(v21[1]) = v15;
    *((_OWORD *)v16 + 2) = *(_OWORD *)v21;
    v10 = CRenderDataVisual::AddInstruction(this, v16);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 54LL;
      goto LABEL_14;
    }
  }
  v11 = 0;
LABEL_16:
  if ( v5 )
    CBaseObject::Release(v5);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v19);
  return v11;
}
