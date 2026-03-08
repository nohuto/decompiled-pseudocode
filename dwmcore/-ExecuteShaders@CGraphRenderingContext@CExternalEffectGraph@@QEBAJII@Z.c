/*
 * XREFs of ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18002FAD0
 * Callers:
 *     _lambda_16c4919e5c7bc2115c075ef4a54f2434_::operator() @ 0x180030CAC (_lambda_16c4919e5c7bc2115c075ef4a54f2434_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_0275559317280799f33d3844855e86e6__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800F7BC0 (std--_Func_impl_no_alloc__lambda_0275559317280799f33d3844855e86e6__long_CExternalEffectGraph--CG.c)
 * Callees:
 *     ??0EffectStage@@QEAA@XZ @ 0x18002FCE4 (--0EffectStage@@QEAA@XZ.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18002FD34 (-UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180030748 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180079180 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x18007B5AC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18007B614 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E788 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180092EE8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x180093FA0 (--1EffectInput@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800EE108 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801CFCB0 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801D4394 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1EffectStage@@QEAA@XZ @ 0x18025FF68 (--1EffectStage@@QEAA@XZ.c)
 */

__int64 __fastcall CExternalEffectGraph::CGraphRenderingContext::ExecuteShaders(
        CExternalEffectGraph::CGraphRenderingContext *this,
        int a2,
        unsigned int a3)
{
  int v6; // eax
  int v7; // ebx
  CGeometryOnlyDrawListBrush *v8; // rcx
  unsigned int v9; // xmm1_4
  int v10; // esi
  unsigned int v11; // xmm0_4
  _BYTE *v12; // rax
  struct CDrawListCache *v13; // rbx
  int updated; // eax
  int v15; // r14d
  int v16; // eax
  __int64 v17; // r14
  EffectInput *v18; // r15
  _QWORD *v19; // rdi
  struct CObjectCache *ObjectCache; // rax
  int v22; // [rsp+20h] [rbp-E0h]
  int v23; // [rsp+20h] [rbp-E0h]
  void *lpMem; // [rsp+30h] [rbp-D0h] BYREF
  CDrawListCache *v25; // [rsp+38h] [rbp-C8h] BYREF
  struct CGeometryOnlyDrawListBrush *v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v27; // [rsp+50h] [rbp-B0h]
  _DWORD v28[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[416]; // [rsp+68h] [rbp-98h] BYREF
  char v30; // [rsp+208h] [rbp+108h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  v25 = 0LL;
  v6 = CDrawListCache::InternalCreate(1, &v25);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v6,
      v22);
LABEL_24:
    wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(&v25);
    return (unsigned int)v7;
  }
  lpMem = 0LL;
  v26[1] = 0LL;
  v26[0] = (struct CGeometryOnlyDrawListBrush *)&lpMem;
  v27 = 1;
  v7 = CGeometryOnlyDrawListBrush::Create(&v26[1]);
  if ( v27 )
  {
    v8 = *(CGeometryOnlyDrawListBrush **)v26[0];
    *(_QWORD *)v26[0] = v26[1];
    if ( v8 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v8, 1u);
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v7,
      v22);
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(&lpMem);
    goto LABEL_24;
  }
  v9 = *((_DWORD *)this + 10);
  v10 = 0;
  v11 = *((_DWORD *)this + 11);
  v12 = lpMem;
  v26[0] = 0LL;
  v13 = v25;
  *((_DWORD *)lpMem + 12) = 0;
  v26[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(v11, v9);
  v12[52] = 1;
  *((_OWORD *)v12 + 2) = *(_OWORD *)v26;
  if ( a3 )
  {
    while ( 1 )
    {
      EffectStage::EffectStage((EffectStage *)v28);
      v28[1] = 1;
      v28[0] = v10 + a2;
      EffectInput::operator=(v29, *((_QWORD *)this + 6) + 104LL * *((unsigned int *)this + 8));
      updated = CBrushRenderingGraph::UpdateDrawListCache(
                  *((CBrushRenderingGraph **)this + 2),
                  *(struct CDrawingContext **)this,
                  (const struct CDrawListBrush *)lpMem,
                  (struct EffectStage *)v28,
                  0,
                  v13);
      v15 = updated;
      if ( updated < 0 )
        break;
      v16 = CDrawListCache::Render(v13, *(_QWORD *)this, &CMILMatrix::Identity);
      v15 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBE,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
          (const char *)(unsigned int)v16,
          11);
        `vector destructor iterator'(v29, 0x68uLL, 4uLL, (void (*)(void *))EffectInput::~EffectInput);
        goto LABEL_23;
      }
      CDrawListCache::Invalidate(v13);
      v17 = 4LL;
      v18 = (EffectInput *)&v30;
      do
      {
        v18 = (EffectInput *)((char *)v18 - 104);
        EffectInput::~EffectInput(v18);
        --v17;
      }
      while ( v17 );
      if ( ++v10 >= a3 )
        goto LABEL_12;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)updated,
      v23);
    EffectStage::~EffectStage((EffectStage *)v28);
LABEL_23:
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(&lpMem);
    v7 = v15;
    goto LABEL_24;
  }
LABEL_12:
  v19 = lpMem;
  if ( lpMem )
  {
    ObjectCache = CThreadContext::GetObjectCache(v8);
    if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
    {
      operator delete(v19);
    }
    else
    {
      *v19 = *((_QWORD *)ObjectCache + 1);
      ++*((_DWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = v19;
    }
  }
  if ( v13 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v13);
  return 0LL;
}
