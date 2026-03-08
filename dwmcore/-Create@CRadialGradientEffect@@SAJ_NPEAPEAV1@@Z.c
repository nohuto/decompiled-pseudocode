/*
 * XREFs of ?Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z @ 0x1802B6028
 * Callers:
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x18024A310 (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRadialGradientEffect::Create(char a1, struct CRadialGradientEffect **a2)
{
  char *v4; // rax
  __int64 v5; // rcx
  struct CRadialGradientEffect *v6; // rbx
  unsigned int v7; // ebx

  v4 = (char *)DefaultHeap::Alloc(0x40uLL);
  v6 = (struct CRadialGradientEffect *)v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 6) = 0;
    *(_QWORD *)v4 = &CRadialGradientEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>'};
    *((_QWORD *)v4 + 2) = &CRadialGradientEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
    v4[60] = a1;
    if ( a1 )
    {
      *(_QWORD *)(v4 + 28) = 0LL;
    }
    else
    {
      *(_OWORD *)(v4 + 28) = 0LL;
      *(_OWORD *)(v4 + 44) = 0LL;
    }
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 8));
    *a2 = v6;
    return 0;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v7;
}
