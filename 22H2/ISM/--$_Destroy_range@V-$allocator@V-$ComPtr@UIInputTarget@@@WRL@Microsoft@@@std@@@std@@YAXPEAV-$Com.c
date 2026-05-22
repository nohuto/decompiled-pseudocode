/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@0@@Z @ 0x18000D590
 * Callers:
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x180017E90 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IInputTarget__std::allocator_Microsoft::WRL::ComPtr_IInputTarget_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IInputTarget____::_1_::catch$58 @ 0x18004E050 (_std--vector_Microsoft--WRL--ComPtr_IInputTarget__std--allocator_Microsoft--WRL--ComPtr_IInputTa.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@0@@Z @ 0x180137790 (--$_Uninitialized_move@PEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAV123@V-$allocator@V-$ComPt.c)
 *     ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180137A88 (--1-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget@@@WRL@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
