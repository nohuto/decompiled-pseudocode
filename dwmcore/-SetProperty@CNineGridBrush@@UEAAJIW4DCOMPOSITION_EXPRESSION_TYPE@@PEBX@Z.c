/*
 * XREFs of ?SetProperty@CNineGridBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18023C580
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x1800E6D4C (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::SetProperty(CResource *a1, int a2, int a3)
{
  float *InsetFieldPointer; // rax
  float *v5; // r9
  int v6; // r10d
  unsigned int v7; // ebx

  if ( a3 == 18 && (InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(a1, a2)) != 0LL )
  {
    if ( *InsetFieldPointer != *v5 )
    {
      *InsetFieldPointer = *v5;
      CResource::InvalidateAnimationSources(a1, v6);
      (*(void (__fastcall **)(CResource *, __int64, CResource *))(*(_QWORD *)a1 + 72LL))(a1, 6LL, a1);
    }
    return 0;
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x107u, 0LL);
  }
  return v7;
}
