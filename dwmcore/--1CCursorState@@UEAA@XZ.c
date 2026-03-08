/*
 * XREFs of ??1CCursorState@@UEAA@XZ @ 0x180275B1C
 * Callers:
 *     ??_ECCursorState@@UEAAPEAXI@Z @ 0x180275DC0 (--_ECCursorState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801A3B98 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801A3D88 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std.c)
 *     ??$_Destroy_range@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursorState@@QEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x180274A14 (--$_Destroy_range@V-$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursor.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x180274A58 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV-.c)
 */

void __fastcall CCursorState::~CCursorState(CCursorState *this)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 *v4; // rax
  _QWORD **v5; // rcx
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // rcx
  std::_Ref_count_base *v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &CCursorState::`vftable';
  v13 = &g_CursorManager;
  EnterCriticalSection(&g_CursorManager);
  v2 = xmmword_1803E3268;
  v3 = *(_QWORD *)xmmword_1803E3268;
  v12 = *(_QWORD *)xmmword_1803E3268;
  while ( v3 != v2 )
  {
    if ( *(CCursorState **)(v3 + 40) == this )
    {
      v4 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
             &xmmword_1803E3268,
             v3);
      std::_Deallocate<16,0>(v4, 0x30uLL);
      break;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v12);
    v3 = v12;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  v5 = (_QWORD **)*((_QWORD *)this + 31);
  *v5[1] = 0LL;
  v6 = *v5;
  if ( *v5 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)(v6 + 3));
      std::_Deallocate<16,0>(v6, 0x50uLL);
      v6 = v7;
    }
    while ( v7 );
  }
  std::_Deallocate<16,0>(*((void **)this + 31), 0x50uLL);
  v8 = *((_QWORD *)this + 27);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(v8, *((_QWORD *)this + 28));
    std::_Deallocate<16,0>(
      *((void **)this + 27),
      (*((_QWORD *)this + 29) - *((_QWORD *)this + 27)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  v9 = (std::_Ref_count_base *)*((_QWORD *)this + 24);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 112);
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<CCursorState::MonitorData>>(v10, *((_QWORD *)this + 11));
    std::_Deallocate<16,0>(
      *((void **)this + 10),
      16 * ((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) >> 4));
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  v11 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
