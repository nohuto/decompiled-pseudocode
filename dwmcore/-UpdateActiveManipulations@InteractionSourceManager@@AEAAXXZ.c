/*
 * XREFs of ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180271E8C
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x180230098 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18023265C (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1802326B8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ??$emplace_front@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180270720 (--$emplace_front@AEBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$deque@V-$c.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180271E58 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180272620 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$al_ea_180272620.c)
 */

void __fastcall InteractionSourceManager::UpdateActiveManipulations(InteractionSourceManager *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  CInteractionTracker *v13; // rbx
  struct CManipulation *ActiveManipulation; // rax
  int v15; // ecx
  int v16; // eax
  _QWORD v17[3]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v18[24]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 14) > 1uLL )
  {
    v2 = (__int64 *)((char *)this + 80);
    v3 = 0LL;
    v4 = 0LL;
    v5 = *((_QWORD *)this + 13);
    v6 = *((_QWORD *)this + 12) - 1LL;
    v7 = *((_QWORD *)this + 11);
    v19 = 0LL;
    while ( 1 )
    {
      v8 = ((_DWORD)v5 + (_DWORD)v4) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8 * (v6 & ((unsigned __int64)(v5 + v4) >> 1))) + 8 * v8) + 420LL) == 2 )
        break;
      if ( (unsigned __int64)++v4 >= *((_QWORD *)this + 14) )
        goto LABEL_5;
    }
    v3 = *(_QWORD *)(*(_QWORD *)(v7 + 8 * (((unsigned __int64)(v5 + v4) >> 1) & (*((_QWORD *)this + 12) - 1LL))) + 8 * v8);
    v19 = v3;
    if ( v3 )
    {
LABEL_13:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      goto LABEL_14;
    }
LABEL_5:
    v4 = 0LL;
    v2 = (__int64 *)((char *)this + 80);
    if ( *((_QWORD *)this + 14) )
    {
      v9 = *((_QWORD *)this + 13);
      while ( 1 )
      {
        v10 = ((_DWORD)v9 + (_DWORD)v4) & 1;
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11)
                                                              + 8
                                                              * ((*((_QWORD *)this + 12) - 1LL) & ((unsigned __int64)(v9 + v4) >> 1)))
                                                  + 8 * v10)
                                      + 420LL)
                          - 2) <= 2 )
          break;
        if ( (unsigned __int64)++v4 >= *((_QWORD *)this + 14) )
          goto LABEL_14;
      }
      v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11)
                                 + 8 * (((unsigned __int64)(v9 + v4) >> 1) & (*((_QWORD *)this + 12) - 1LL)))
                     + 8 * v10);
      v19 = v3;
      if ( v3 )
        goto LABEL_13;
    }
LABEL_14:
    if ( v3 )
    {
      v11 = *v2;
      v12 = v4 + v2[3];
      v17[1] = 0LL;
      v17[2] = v12;
      v17[0] = v11;
      std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase(v2, v18, v17);
      std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::emplace_front<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &>(
        (__int64)v2,
        &v19);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
  }
  v13 = *(CInteractionTracker **)(*((_QWORD *)this + 1) + 16LL);
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(this);
  if ( !ActiveManipulation )
  {
    if ( *((_DWORD *)v13 + 44) == 2 )
      goto LABEL_29;
    goto LABEL_28;
  }
  v15 = *((_DWORD *)ActiveManipulation + 105);
  if ( *((_DWORD *)ActiveManipulation + 107) != 6 )
  {
    if ( (unsigned int)(v15 - 2) <= 2 )
    {
      if ( *((_DWORD *)v13 + 44) != 1 )
      {
        CInteractionTracker::TransitionToInContact(v13);
        goto LABEL_29;
      }
      if ( (unsigned int)(v15 - 2) <= 2 )
        goto LABEL_29;
    }
    v16 = *((_DWORD *)v13 + 44);
    if ( v16 == 2 )
      goto LABEL_29;
    if ( !v16 )
      CInteractionTracker::TransitionToInContact(v13);
LABEL_28:
    CInteractionTracker::TransitionToInertia((__int64)v13, 0);
    goto LABEL_29;
  }
  CInteractionTracker::ProcessMousewheelManipulation(v13);
LABEL_29:
  *((_BYTE *)this + 120) = 0;
}
