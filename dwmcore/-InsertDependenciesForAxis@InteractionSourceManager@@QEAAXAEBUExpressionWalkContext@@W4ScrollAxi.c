/*
 * XREFs of ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x180271288
 * Callers:
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x18022F92C (-InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009990C (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1802139BC (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV-$CWe.c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180271214 (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 */

void __fastcall InteractionSourceManager::InsertDependenciesForAxis(
        _QWORD *a1,
        const struct ExpressionWalkContext *a2,
        unsigned int a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v6; // r12
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 SourceModifierConditionalAnimation; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct CResource *v14; // rcx
  int v15; // eax
  struct CWeakResourceReference *v16; // rbx
  unsigned int v17; // r9d
  int v18; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CWeakResourceReference *v20; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[13];
  v6 = v3 + a1[14];
  while ( v3 != v6 )
  {
    v8 = v3 & 1;
    v9 = *(_QWORD *)(a1[11] + 8 * ((a1[12] - 1LL) & (v3 >> 1)));
    SourceModifierConditionalAnimation = CManipulation::GetSourceModifierConditionalAnimation(
                                           *(_QWORD **)(v9 + 8 * v8),
                                           a3);
    v11 = SourceModifierConditionalAnimation;
    if ( SourceModifierConditionalAnimation )
      (*(void (__fastcall **)(__int64, const struct ExpressionWalkContext *))(*(_QWORD *)SourceModifierConditionalAnimation
                                                                            + 200LL))(
        SourceModifierConditionalAnimation,
        a2);
    v12 = *(_QWORD *)(v9 + 8 * v8);
    if ( a3 )
    {
      if ( a3 != 1 )
        goto LABEL_11;
      v13 = *(_QWORD *)(v12 + 496);
    }
    else
    {
      v13 = *(_QWORD *)(v12 + 488);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64, const struct ExpressionWalkContext *, __int64))(*(_QWORD *)v13 + 200LL))(
        v13,
        a2,
        v11);
LABEL_11:
    v14 = *(struct CResource **)(v9 + 8 * v8);
    v20 = 0LL;
    v15 = CWeakReference<CResource>::Create(v14, &v20);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        251LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\animations\\interactionsourcemanager.cpp",
        (const char *)(unsigned int)v15,
        v18);
    v16 = v20;
    if ( a3 < 2 )
    {
      v17 = 1;
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_17;
      v17 = 3;
    }
    CExpressionManager::InsertExpressionsInOrderForTarget(*(_QWORD *)(*a1 + 424LL), a2, (__int64)v20, v17);
LABEL_17:
    CExpressionManager::InsertExpressionsInOrderForTarget(*(_QWORD *)(*a1 + 424LL), a2, (__int64)v16, 9u);
    wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)&v20);
    ++v3;
  }
}
