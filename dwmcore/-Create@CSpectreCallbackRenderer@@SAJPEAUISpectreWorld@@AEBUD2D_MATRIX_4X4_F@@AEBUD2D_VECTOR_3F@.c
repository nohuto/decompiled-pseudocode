/*
 * XREFs of ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1801FA830
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D1564 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@@Z @ 0x1801FA6A8 (--0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MM.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z @ 0x18026E664 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z.c)
 */

__int64 __fastcall CSpectreCallbackRenderer::Create(
        struct CSpectreCallbackRenderer *a1,
        _OWORD *a2,
        __int64 a3,
        float a4,
        int a5,
        __int128 *a6,
        __int64 *a7)
{
  struct CObjectCache *ObjectCache; // r9
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF

  ObjectCache = CThreadContext::GetObjectCache(a1);
  v11 = 0;
  v12 = 0LL;
  v13 = *((_DWORD *)ObjectCache + 1);
  if ( v13 )
  {
    v12 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v12;
    *((_DWORD *)ObjectCache + 1) = v13 - 1;
  }
  if ( (v12 || (v12 = DefaultHeap::Alloc(0x90uLL)) != 0LL)
    && (v18 = *a6,
        v15 = CSpectreCallbackRenderer::CSpectreCallbackRenderer(
                (__int64)v12,
                (__int64)a1,
                a2,
                a3,
                SLODWORD(a4),
                a5,
                (__int64 *)&v18),
        (v16 = v15) != 0) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v15 + 16));
    *a7 = v16;
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x20u, 0LL);
  }
  return v11;
}
