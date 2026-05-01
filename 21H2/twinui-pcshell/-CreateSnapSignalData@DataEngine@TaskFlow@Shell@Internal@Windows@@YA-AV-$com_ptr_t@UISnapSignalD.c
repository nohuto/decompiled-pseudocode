/*
 * XREFs of ?CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x1802AB99C
 * Callers:
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1802AA258 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A60 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0SnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x1802AB8A4 (--0SnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@W4SnapEventType@12345@UDateTi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::CreateSnapSignalData(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  void *v8; // rax
  const char *v9; // r9
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = 0LL;
  if ( v8 )
    v10 = Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData::SnapSignalData((__int64)v8, a2, a3, a4);
  if ( !v10 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      56LL,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\snapsignaldata.cpp",
      v9);
    __debugbreak();
  }
  *a1 = v10;
  return a1;
}
