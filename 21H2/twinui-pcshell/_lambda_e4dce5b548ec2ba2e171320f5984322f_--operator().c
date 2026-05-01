/*
 * XREFs of _lambda_e4dce5b548ec2ba2e171320f5984322f_::operator() @ 0x180025228
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e4dce5b548ec2ba2e171320f5984322f___::Run @ 0x180025200 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_e4dce5b548ec2ba2e171320f5984322f___--.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x1800253C0 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x18006D358 (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1800869FC (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e4dce5b548ec2ba2e171320f5984322f_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rdi
  int v3; // esi
  int v4; // r12d
  _DWORD *v5; // r14
  char v6; // r13
  char v7; // si
  __int64 v8; // rcx
  unsigned __int64 v10; // [rsp+70h] [rbp+8h] BYREF

  v1 = *a1;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 288) + 216LL))(*(_QWORD *)(*a1 + 288));
  if ( *(_BYTE *)(v1 + 512) )
  {
    if ( *(_DWORD *)(v1 + 304) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 112LL))(v1) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 104LL))(v1);
        if ( SetWindowPos(
               (HWND)*(int *)(v1 + 304),
               0LL,
               (int)*(float *)(v1 + 496),
               (int)*(float *)(v1 + 500),
               (int)*(float *)(v1 + 504),
               (int)*(float *)(v1 + 508),
               0x14415u) )
        {
          v2 = (_QWORD *)(v1 + 368);
          v3 = (int)*(float *)(v1 + 508);
          v4 = (int)*(float *)(v1 + 504);
          v5 = (_DWORD *)(v1 + 376);
          v6 = *(_DWORD *)(v1 + 376) == 0;
          if ( __PAIR64__(v3, v4) != *(_QWORD *)(v1 + 396) )
          {
            if ( *(_BYTE *)(v1 + 392) )
              WindowReadyState::WaitFlags::Set(v1 + 376, v2, 2LL);
            BeginLayoutUpdate(*v2);
            v10 = __PAIR64__(v3, v4);
            *(_QWORD *)(v1 + 396) = __PAIR64__(v3, v4);
          }
          v7 = 1;
          ++*(_QWORD *)(v1 + 384);
          ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
            v1 + 368,
            v1 + 384,
            v1 + 396,
            v1 + 400);
          LODWORD(v10) = *v5;
          *v5 = v10 | 8;
          ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
            v1 + 368,
            &v10,
            v1 + 376);
          if ( !*v2 || *v5 )
            v7 = 0;
          if ( v6 != v7 )
          {
            LOBYTE(v10) = v7;
            v8 = *(_QWORD *)(v1 + 464);
            if ( !v8 )
            {
              std::_Xbad_function_call();
              __debugbreak();
              __debugbreak();
              JUMPOUT(0x180182458LL);
            }
            (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v8 + 16LL))(v8, &v10);
          }
        }
      }
    }
  }
  return 0LL;
}
