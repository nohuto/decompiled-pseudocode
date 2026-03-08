/*
 * XREFs of RemoveCountFromEndOfArrayAndFree @ 0x1801A551C
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801A4ED8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x1801A4394 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 */

void __fastcall RemoveCountFromEndOfArrayAndFree(int a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  InteractionConfigurationGroup *v5; // rdi

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = *(unsigned int *)(a2 + 24);
      v5 = *(InteractionConfigurationGroup **)(*(_QWORD *)a2 + 8LL * (unsigned int)(v4 - 1));
      if ( (_DWORD)v4 )
        *(_DWORD *)(a2 + 24) = v4 - 1;
      else
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024809, 0x19Cu, 0LL);
      --v3;
      if ( v5 )
        InteractionConfigurationGroup::`scalar deleting destructor'(v5);
    }
    while ( v3 );
  }
}
