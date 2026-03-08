/*
 * XREFs of ?GetContactLeaf@CManipulationContext@@UEBAPEAUIInteractionResource@@I@Z @ 0x180129660
 * Callers:
 *     <none>
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180129100 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

struct IInteractionResource *__fastcall CManipulationContext::GetContactLeaf(CManipulationContext *this, int a2)
{
  int Key; // eax
  __int64 v3; // r10
  __int64 v4; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 56,
          &v6);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 64) + 8LL * Key);
  return (struct IInteractionResource *)((v4 + 64) & -(__int64)(v4 != 0));
}
