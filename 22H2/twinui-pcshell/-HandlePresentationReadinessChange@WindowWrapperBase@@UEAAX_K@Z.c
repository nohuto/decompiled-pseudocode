/*
 * XREFs of ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x180026040
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x180026140 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x180026158 (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x180026324 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180026358 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x18006F668 (--$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@S.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x18034B630 (--$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@S.c)
 */

void __fastcall WindowWrapperBase::HandlePresentationReadinessChange(WindowWrapperBase *this, __int64 a2)
{
  _QWORD *v4; // rbx
  _DWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  WindowReadyState *v10; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 200LL))(*((_QWORD *)this + 34), &SRWLock);
  v4 = (_QWORD *)((char *)this + 352);
  v5 = v4 + 1;
  if ( *v4 && !*v5 )
    goto LABEL_13;
  if ( a2 != 31 )
  {
    if ( a2 == 36 )
    {
      v8 = 4LL;
    }
    else
    {
      if ( a2 != 38 )
        goto LABEL_8;
      v8 = 2LL;
    }
    goto LABEL_7;
  }
  v6 = v4 + 2;
  v7 = v4[2];
  if ( !v7 )
  {
    ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>(v4);
    goto LABEL_8;
  }
  *v6 = v7 - 1;
  ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
    v4,
    v4 + 2);
  if ( !*v6 )
  {
    v8 = 8LL;
LABEL_7:
    WindowReadyState::WaitFlags::Clear(v4 + 1, v4, v8);
  }
LABEL_8:
  if ( WindowReadyState::IsReadyForPresentation((WindowReadyState *)v4) )
    WindowReadyState::_WaitForUnfreezeIfNecessary(v10);
  if ( *v4 && !*v5 )
  {
    LOBYTE(v9) = 1;
    std::_Func_class<void,bool>::operator()(v4 + 5, v9);
  }
LABEL_13:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
