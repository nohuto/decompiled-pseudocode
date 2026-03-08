/*
 * XREFs of ?InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z @ 0x18024BF50
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x18024BDBC (-ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z.c)
 *     ?ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x18024BE98 (-ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::InitializeSpectreComponent(
        CSceneMeshRendererComponent *this,
        struct ISpectreMeshComponent *a2)
{
  CSceneMeshRendererComponent::ApplyMeshToMeshComponent(this, a2);
  CSceneMeshRendererComponent::ApplyMaterialToMeshComponent(this, a2);
  return 0LL;
}
