/*
 * XREFs of _lambda_74927f198c7a4d51e19dba7d682bfcb9_::operator() @ 0x18014EEB4
 * Callers:
 *     ?IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ @ 0x1800886F4 (-IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_74927f198c7a4d51e19dba7d682bfcb9_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *(_QWORD *)(v2 + 24) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v2 + 80) + 56LL))(*(_QWORD *)(v2 + 80), &v7);
    v5 = v4;
    if ( v4 >= 0 )
    {
      *(_BYTE *)a1[1] = v7 == 0;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
