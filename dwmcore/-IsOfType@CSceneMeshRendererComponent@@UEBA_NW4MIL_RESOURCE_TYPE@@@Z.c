/*
 * XREFs of ?IsOfType@CSceneMeshRendererComponent@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18024BFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CSceneRendererComponentGeneratedT@VCSceneRendererComponent@@VCSceneComponent@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18024BFA8 (-IsOfType@-$CSceneRendererComponentGeneratedT@VCSceneRendererComponent@@VCSceneComponent@@@@UEBA.c)
 */

char __fastcall CSceneMeshRendererComponent::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 158 )
    return 1;
  v2 = CSceneRendererComponentGeneratedT<CSceneRendererComponent,CSceneComponent>::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
