/*
 * XREFs of ??$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18033B08C
 * Callers:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x18033E29C (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 * Callees:
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18002392C (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x18033E388 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18033F3DC (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CommitImportanceVector<unsigned int const &,_RM_ACTIVITY_IMPORTANCE const &>(
        int *a1,
        const union _RM_ACTIVITY_IMPORTANCE *a2)
{
  ViewManagerInteropTraceLogging *v4; // rcx
  WINBOOL fPending; // [rsp+40h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+20h] BYREF

  if ( ViewManagerInteropTraceLogging::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
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
    ViewManagerInteropTraceLogging::CommitImportanceVector_(v4, *a1, a2);
  }
}
