/*
 * XREFs of ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x1800846B0
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180082FA8 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180015798 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017754 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800251AC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawGeometryInstruction@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F890 (-InternalRelease@-$ComPtr@VCDrawGeometryInstruction@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CLivePreview::_UpdateInstructions(CRenderDataVisual **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // esi
  __int64 v6; // r14
  CRenderDataVisual *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct CDrawGeometryInstruction *v10; // [rsp+48h] [rbp+28h] BYREF
  struct CDrawGeometryInstruction *v11; // [rsp+50h] [rbp+30h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v2 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 1174LL;
    goto LABEL_21;
  }
  v2 = CRenderDataVisual::ClearInstructions(this[64]);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 1175LL;
    goto LABEL_21;
  }
  v5 = 0;
  if ( !*((_DWORD *)this + 98) )
  {
LABEL_15:
    v3 = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v6 = 136LL * v5;
    v7 = this[46];
    if ( *((_BYTE *)v7 + v6 + 128) )
    {
      Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v11);
      v2 = CDrawGeometryInstruction::Create(
             *(struct CBaseLegacyMilBrushProxy **)((char *)this[46] + v6 + 32),
             *(struct CBaseGeometryProxy **)((char *)this[46] + v6 + 16),
             &v11);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 1181LL;
        goto LABEL_21;
      }
      v2 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v11);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 1182LL;
        goto LABEL_21;
      }
      Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v11);
      v7 = this[46];
    }
    if ( !*((_BYTE *)v7 + v6 + 129) )
      goto LABEL_14;
    Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v10);
    v2 = CDrawGeometryInstruction::Create(
           *(struct CBaseLegacyMilBrushProxy **)((char *)this[46] + v6 + 72),
           *(struct CBaseGeometryProxy **)((char *)this[46] + v6 + 56),
           &v10);
    v3 = v2;
    if ( v2 < 0 )
      break;
    v2 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v10);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 1189LL;
      goto LABEL_21;
    }
    Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v10);
LABEL_14:
    if ( ++v5 >= *((_DWORD *)this + 98) )
      goto LABEL_15;
  }
  v4 = 1188LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"clientcore\\windows\\dwm\\udwm\\livepreview.cpp",
    (const char *)(unsigned int)v2);
LABEL_16:
  Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v11);
  return v3;
}
