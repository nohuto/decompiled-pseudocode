void __fastcall EtwTraceGetAsyncKeyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x400) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x400) != 0
    && (qword_1C02C4058 & 0x400) == qword_1C02C4058
    && (*(_QWORD *)(SGDGetUserSessionState(a1, 1024LL, a3, a4) + 14152) || (int)EtwInitializeAsyncKeyMonitor() >= 0) )
  {
    v9 = SGDGetUserSessionState(v6, v5, v7, v8);
    CAsyncKeyEventMonitor::OnKeyStateRequested(
      *(CAsyncKeyEventMonitor **)(v9 + 14152),
      *(_DWORD *)(*(_QWORD *)(a1 + 424) + 56LL));
  }
}
