/*
 * XREFs of ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x1800234F4
 * Callers:
 *     _lambda_868b6464a412d41748ea1a8c758341d2_::operator() @ 0x180021848 (_lambda_868b6464a412d41748ea1a8c758341d2_--operator().c)
 *     _lambda_7908cfebc1d28059a047661d0fa1da88_::operator() @ 0x180021978 (_lambda_7908cfebc1d28059a047661d0fa1da88_--operator().c)
 *     _lambda_62a6912156eebe0a4bb23607e970b09b_::operator() @ 0x180022258 (_lambda_62a6912156eebe0a4bb23607e970b09b_--operator().c)
 *     ?ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x180023120 (-ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ.c)
 *     _lambda_218d2bf51dd35665d9ca3455cad3f3f5_::operator() @ 0x1800231D8 (_lambda_218d2bf51dd35665d9ca3455cad3f3f5_--operator().c)
 *     _lambda_a672f9bfb72efbd6ddbbb83b87e44bdf_::operator() @ 0x180023288 (_lambda_a672f9bfb72efbd6ddbbb83b87e44bdf_--operator().c)
 * Callees:
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18002392C (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x18033E388 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

void __fastcall WindowWrapperBase::CommitImportanceVector(WindowWrapperBase *this)
{
  const union _RM_ACTIVITY_IMPORTANCE *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  _DWORD *v6; // rcx
  ViewManagerInteropTraceLogging *v7; // rcx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 216LL))(*((_QWORD *)this + 36));
  if ( !*((_BYTE *)this + 580) )
  {
    v2 = (WindowWrapperBase *)((char *)this + 260);
    if ( *((_DWORD *)this + 66) != *((_DWORD *)this + 65) )
    {
      v3 = *((_QWORD *)this + 13);
      if ( v3 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC0A,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v4,
            v8);
        *((_DWORD *)this + 66) = *(_DWORD *)v2;
        v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          Context = &qword_180650DA8;
          qword_180650DA8 = &IamTraceLogging::`vftable';
          atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
          ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180650DA8);
          InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180650DA8);
        }
        v6 = (_DWORD *)*((_QWORD *)Context + 1);
        if ( v6 && *v6 )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(
                 &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
                 0,
                 &fPending,
                 &Context) )
          {
            if ( fPending )
            {
              Context = &qword_180650DA8;
              qword_180650DA8 = &IamTraceLogging::`vftable';
              atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
              ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180650DA8);
              InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180650DA8);
            }
          }
          ViewManagerInteropTraceLogging::CommitImportanceVector_(v7, v5, v2);
        }
      }
    }
  }
}
