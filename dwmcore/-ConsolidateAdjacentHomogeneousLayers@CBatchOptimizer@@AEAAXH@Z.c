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
