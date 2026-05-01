/*
 * XREFs of ?get_PreferredMinSize@ViewWrapperBase@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x180343A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ViewWrapperBase::get_PreferredMinSize(ViewWrapperBase *this, struct Windows::Foundation::Size *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a2 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x467,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
