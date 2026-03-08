/*
 * XREFs of ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1801E3810
 * Callers:
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ @ 0x1800C6844 (-ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1801E4810 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18012A1B0 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CSyncLockGroup_std::default_delete_CSyncLockGroup___________lambda_ba8dc3c680031872e33eb834ce4e6176___ @ 0x1801E3518 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CSyncLo.c)
 *     ?erase@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801E3AB4 (-erase@-$vector@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@std@@V-.c)
 */

void __fastcall CSyncLockGroup::RemoveRenderTarget(CSyncLockGroup *this, struct IMonitorTarget *a2)
{
  __int64 *v2; // rbx
  struct IMonitorTarget **v4; // rax
  struct IMonitorTarget **v5; // rcx
  struct IMonitorTarget **v6; // rdx
  CParallelModeGroup ***v7; // rax
  __int64 v8; // rcx
  CParallelModeGroup **v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  v4 = (struct IMonitorTarget **)*((_QWORD *)this + 2);
  v5 = (struct IMonitorTarget **)*((_QWORD *)this + 3);
  while ( v4 != v5 && *v4 != a2 )
    ++v4;
  v6 = v4;
  if ( v4 != v5 )
  {
    while ( ++v4 != v5 )
    {
      if ( *v4 != a2 )
        *v6++ = *v4;
    }
  }
  detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
    v2,
    ((__int64)v6 - *v2) >> 3,
    1LL);
  if ( ((v2[1] - *v2) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    v7 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CSyncLockGroup_std::default_delete_CSyncLockGroup___________lambda_ba8dc3c680031872e33eb834ce4e6176___(
           &v9,
           (CParallelModeGroup **)CSyncLockGroup::g_syncLockGroups,
           (CParallelModeGroup **)qword_1803E30A8);
    std::vector<std::unique_ptr<CSyncLockGroup>>::erase(v8, &v10, *v7);
  }
}
