/*
 * XREFs of ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x18008E6C0
 * Callers:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18000D610 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18008E300 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 * Callees:
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000D560 (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18000D610 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x1800179E0 (-GetCommonSuperset@CRenderingEffect@@SA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@.c)
 *     ??1?$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029D68 (--1-$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z @ 0x18008F558 (-MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x1800E70B4 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 */

void __fastcall CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(CBatchOptimizer *this, int a2)
{
  __int64 v3; // rcx
  char *v4; // rdi
  __int64 *v5; // rsi
  char *v6; // rbx
  __int64 *v7; // r14
  CBatchOptimizer *v8; // r9
  int v9; // r10d
  __int64 *CommonSuperset; // rax
  __int64 v11; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 != *((_DWORD *)this + 8) - 1 )
  {
    v3 = 520LL * *((int *)this + a2 + 12);
    if ( *(_DWORD *)((char *)this + v3 + 100) )
    {
      v4 = (char *)this + v3;
      v5 = (__int64 *)((char *)this + v3 + 112);
      if ( *v5 )
      {
        v6 = (char *)this + 520 * *((int *)this + a2 + 13);
        v7 = (__int64 *)(v6 + 112);
        if ( *((_QWORD *)v6 + 14) )
        {
          if ( CBatchOptimizer::MatchStateToHomogeneousLayer(
                 (const struct SharedStateLayer *)(v4 + 80),
                 (const struct SharedStateLayer::StateBlock *)(v6 + 80)) )
          {
            CBatchOptimizer::PurgeStateSettingEntriesFromLayer(v8, v9 + 1);
            if ( !*((_DWORD *)v6 + 26) )
            {
              CommonSuperset = CRenderingEffect::GetCommonSuperset(&v12, *v5, *v7);
              v11 = *CommonSuperset;
              *CommonSuperset = 0LL;
              v13 = v11;
              wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>(&v12);
              if ( v11 )
              {
                wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v5, v11);
                wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v7, v11);
                *((_DWORD *)v4 + 26) = 1;
              }
              wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>(&v13);
            }
          }
        }
      }
    }
    else
    {
      CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, a2);
    }
  }
}
