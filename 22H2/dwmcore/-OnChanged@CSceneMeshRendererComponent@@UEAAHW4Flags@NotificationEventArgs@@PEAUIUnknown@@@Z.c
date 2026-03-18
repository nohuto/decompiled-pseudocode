/*
 * XREFs of ?OnChanged@CSceneMeshRendererComponent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18024F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x18024F530 (-ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 *     ?ApplyMeshToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x18024F5E8 (-ApplyMeshToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::OnChanged(CSceneMeshRendererComponent *a1, __int64 a2, __int64 a3)
{
  if ( !*((_QWORD *)a1 + 9) )
    return 0LL;
  if ( a3 )
  {
    if ( a3 == *((_QWORD *)a1 + 11) )
    {
      CSceneMeshRendererComponent::ApplyMeshToSpectreResources(a1);
    }
    else if ( a3 == *((_QWORD *)a1 + 10) )
    {
      CSceneMeshRendererComponent::ApplyMaterialToSpectreResources(a1);
    }
  }
  return 1LL;
}
