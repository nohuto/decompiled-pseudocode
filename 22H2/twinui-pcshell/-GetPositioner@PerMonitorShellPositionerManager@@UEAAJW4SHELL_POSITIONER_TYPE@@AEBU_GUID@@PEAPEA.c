/*
 * XREFs of ?GetPositioner@PerMonitorShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x180061FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerMonitorShellPositionerManager::GetPositioner(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall ***v4)(_QWORD, __int64, __int64); // rcx
  unsigned int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 8LL * a2 + 16);
  if ( !v4 )
  {
    v5 = -2147319765;
    v7 = 54LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\permonitorshellpositionermanager.cpp",
      (const char *)v5,
      v8);
    return v5;
  }
  v5 = (**v4)(v4, a3, a4);
  if ( (v5 & 0x80000000) != 0 )
  {
    v7 = 55LL;
    goto LABEL_5;
  }
  return v5;
}
