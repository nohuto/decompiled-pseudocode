/*
 * XREFs of RemoveCountFromEndOfArray_AxisWithType_ @ 0x180129862
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801A4ED8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall RemoveCountFromEndOfArray_AxisWithType_(int a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rcx

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = *(unsigned int *)(a2 + 24);
      if ( (_DWORD)v4 )
        *(_DWORD *)(a2 + 24) = v4 - 1;
      else
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024809, 0x19Cu, 0LL);
      --v3;
    }
    while ( v3 );
  }
}
