/*
 * XREFs of ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x180017A80
 * Callers:
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x180017E90 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800020D0 (--$_Emplace_reallocate@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIInputTarge.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180017B90 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::GetTargetListFromHitTestResult(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 *TargetFromInputSite; // rax
  __int64 *v14; // rdx
  __int64 v16[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h] BYREF

  v17 = 0LL;
  v9 = a4[4];
  if ( v9 )
    NtQueryCompositionInputSinkLuid(v9, &v17);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v10 = a4[1];
  v11 = a4[2];
  if ( v10 != v11 )
  {
    v12 = a5;
    do
    {
      TargetFromInputSite = (__int64 *)DWMInputRouter::GetTargetFromInputSite(a1, v16, v10, a3, a4, &v17, v12);
      v14 = *(__int64 **)(a2 + 8);
      if ( *(__int64 **)(a2 + 16) == v14 )
      {
        std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IInputTarget>>(
          (__int64 **)a2,
          v14,
          TargetFromInputSite);
      }
      else
      {
        *v14 = 0LL;
        if ( v14 != TargetFromInputSite )
        {
          *v14 = *TargetFromInputSite;
          *TargetFromInputSite = 0LL;
        }
        *(_QWORD *)(a2 + 8) += 8LL;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
      v10 += 8LL;
    }
    while ( v10 != v11 );
  }
  return a2;
}
