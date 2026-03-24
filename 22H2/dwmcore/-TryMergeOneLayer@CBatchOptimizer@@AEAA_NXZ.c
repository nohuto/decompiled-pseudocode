/*
 * XREFs of ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800C0170
 * Callers:
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800121F4 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180079090 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18008FFF8 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 * Callees:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x180011F8C (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?SkipContinuations@CBatchOptimizer@@AEBAHH@Z @ 0x1800153F8 (-SkipContinuations@CBatchOptimizer@@AEBAHH@Z.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18009031C (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?CanTunnelToLayer@CBatchOptimizer@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x1800C039C (-CanTunnelToLayer@CBatchOptimizer@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ??1?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C0490 (--1-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$com_ptr_t@VCDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@4@@Z @ 0x1800C04B0 (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800C058C (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBatchOptimizer::TryMergeOneLayer(CBatchOptimizer *this)
{
  int *v1; // r8
  int i; // esi
  int v4; // r13d
  __int64 v5; // rbp
  __int64 v6; // r8
  int *j; // rdx
  __int64 v8; // r15
  unsigned int v9; // edi
  char *v10; // r14
  __int64 v11; // r9
  __int64 v12; // rcx
  CBatchOptimizer *v13; // rcx
  int v15; // [rsp+80h] [rbp+8h] BYREF
  __int64 v16; // [rsp+88h] [rbp+10h]
  __int64 v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h]

  v1 = (int *)((char *)this + 48);
  for ( i = 0; *((_DWORD *)this + 130 * *v1 + 26); ++i )
    ++v1;
  v4 = *((_DWORD *)this + 8);
  v5 = i;
  v6 = v4 - 1;
  v18 = v6;
  while ( v5 != v6 )
  {
    v8 = 520LL * *((int *)this + v5 + 12);
    if ( *(_DWORD *)((char *)this + v8 + 100) )
    {
      if ( !*(_QWORD *)((char *)this + v8 + 112) )
      {
        v9 = i + 1;
        if ( i + 1 != v4 )
        {
          do
          {
            v10 = (char *)this + 520 * *((int *)this + (int)v9 + 12);
            if ( *((_DWORD *)v10 + 26) )
            {
              v9 = CBatchOptimizer::SkipContinuations(this, v9);
            }
            else if ( *((_DWORD *)v10 + 25) == 1
                   && !*((_QWORD *)v10 + 14)
                   && *(_QWORD *)((char *)this + v8 + 80) == *((_QWORD *)v10 + 10) )
            {
              v15 = i;
              if ( (unsigned __int8)CBatchOptimizer::CanTunnelToLayer(this, v10 + 280, v9, &v15) )
              {
                v15 = *((_DWORD *)v10 + 24);
                v17 = 0LL;
                v11 = (unsigned int)(v15 - 1);
                v12 = *(_QWORD *)&v10[8 * v11 + 120];
                *((_QWORD *)v10 + 12) = (unsigned int)v11;
                v16 = (v12 - 16) & -(__int64)(v12 != 0);
                CBatchOptimizer::AppendEntryToLayer(this, (__int64)&v17);
                if ( v16 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
                wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(&v17);
                if ( v15 == 1 )
                {
                  CBatchOptimizer::RecycleLayer(this, v9);
                  CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(v13, v9 - 1);
                  return 1;
                }
                if ( CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, v9) )
                  return 1;
              }
            }
            ++v9;
          }
          while ( v9 != v4 );
          v6 = v18;
        }
      }
    }
    ++i;
    for ( j = (int *)((char *)this + 4 * ++v5 + 48); *((_DWORD *)this + 130 * *j + 26); ++j )
    {
      ++i;
      ++v5;
    }
  }
  *((_BYTE *)this + 4240) = 0;
  return 0;
}
