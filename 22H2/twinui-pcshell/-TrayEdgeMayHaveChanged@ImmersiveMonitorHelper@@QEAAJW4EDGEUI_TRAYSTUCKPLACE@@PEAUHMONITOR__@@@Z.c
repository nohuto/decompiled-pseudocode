/*
 * XREFs of ?TrayEdgeMayHaveChanged@ImmersiveMonitorHelper@@QEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x1803A0438
 * Callers:
 *     ?TrayEdgeMayHaveChanged@XamlLauncher@@UEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x18039F0D0 (-TrayEdgeMayHaveChanged@XamlLauncher@@UEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::TrayEdgeMayHaveChanged(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    v8 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 40LL))(v5, &v8);
    if ( (int)result >= 0 )
    {
      if ( a3 == v8 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 96LL))(*(_QWORD *)(a1 + 80)) )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 144LL))(*(_QWORD *)(a1 + 80));
      }
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}
