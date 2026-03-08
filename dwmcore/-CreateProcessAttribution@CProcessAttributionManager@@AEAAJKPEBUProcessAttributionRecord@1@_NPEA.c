/*
 * XREFs of ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x1800ABBE8
 * Callers:
 *     ?GetNullProcessAttribution@CProcessAttributionManager@@QEAAPEAVCProcessAttribution@@XZ @ 0x18008CDAC (-GetNullProcessAttribution@CProcessAttributionManager@@QEAAPEAVCProcessAttribution@@XZ.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x1800AAD08 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x1800F35B0 (--$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEA.c)
 *     ?IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z @ 0x1800F3DD8 (-IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CProcessAttributionManager::CreateProcessAttribution(
        CProcessAttributionManager *this,
        int a2,
        const struct CProcessAttributionManager::ProcessAttributionRecord *a3,
        char a4,
        struct CProcessAttribution **a5)
{
  unsigned int v9; // ebp
  char *v10; // rax
  __int64 *v11; // rsi
  __int64 *v12; // r13
  _OWORD *v13; // rax
  unsigned int v14; // ecx
  _OWORD *v15; // rbx
  __int128 v16; // xmm0
  __int64 v17; // r9
  char *v18; // rcx
  char *v20; // rdi
  unsigned __int64 v21; // rbx
  const struct CProcessAttributionManager::ProcessAttributionRecord **v22; // r12
  _OWORD *v23; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = 0;
  v10 = (char *)DefaultHeap::AllocClear(0x88uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v10 + 32) = a2;
  *((_DWORD *)v10 + 2) = 0;
  *(_QWORD *)v10 = &CProcessAttribution::`vftable';
  *((_QWORD *)v10 + 2) = *(_QWORD *)a3;
  *(_OWORD *)(v10 + 24) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)v10 + 10) = *((_DWORD *)a3 + 6);
  *a5 = (struct CProcessAttribution *)v10;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v10 + 8));
  if ( a4 )
  {
    v11 = (__int64 *)*((_QWORD *)this + 3);
    v12 = (__int64 *)*((_QWORD *)this + 4);
    while ( v11 != v12 )
    {
      v20 = *(char **)(*v11 + 16);
      v21 = (__int64)(*(_QWORD *)(*v11 + 24) - (_QWORD)v20) >> 3;
      while ( (__int64)v21 > 0 )
      {
        v22 = (const struct CProcessAttributionManager::ProcessAttributionRecord **)&v20[8 * (v21 >> 1)];
        if ( CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(*v22, *(_QWORD *)a3) )
        {
          v20 = (char *)(v22 + 1);
          v21 += -1LL - (v21 >> 1);
        }
        else
        {
          v21 >>= 1;
        }
      }
      if ( v20 == *(char **)(*v11 + 24) || **(_QWORD **)v20 != *(_QWORD *)a3 )
      {
        v13 = DefaultHeap::Alloc(0x70uLL);
        v15 = v13;
        if ( !v13 )
        {
          v9 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x1DFu, 0LL);
          return v9;
        }
        memset_0(v13, 0, 0x70uLL);
        v16 = *(_OWORD *)a3;
        v23 = v15;
        *v15 = v16;
        v15[1] = *((_OWORD *)a3 + 1);
        v15[2] = *((_OWORD *)a3 + 2);
        v15[3] = *((_OWORD *)a3 + 3);
        v15[4] = *((_OWORD *)a3 + 4);
        v15[5] = *((_OWORD *)a3 + 5);
        v15[6] = *((_OWORD *)a3 + 6);
        v17 = *v11;
        v18 = *(char **)(*v11 + 24);
        if ( v18 == *(char **)(*v11 + 32) )
        {
          std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Emplace_reallocate<CProcessAttributionManager::ProcessAttributionRecord * const &>(
            v17 + 16,
            v20,
            &v23);
        }
        else if ( v20 == v18 )
        {
          *(_QWORD *)v18 = v15;
          *(_QWORD *)(v17 + 24) += 8LL;
        }
        else
        {
          *(_QWORD *)v18 = *((_QWORD *)v18 - 1);
          *(_QWORD *)(v17 + 24) += 8LL;
          memmove_0(v20 + 8, v20, v18 - v20 - 8);
          *(_QWORD *)v20 = v15;
        }
      }
      ++v11;
    }
  }
  return v9;
}
