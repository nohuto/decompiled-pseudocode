void __fastcall CPTPProcessor::OnKeyPress(unsigned __int8 a1)
{
  __int64 v1; // rbx
  __int64 QuadPart; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v1 = a1;
  ApiSetTraceLoggingPTPAAPKeyPress(a1);
  QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
  v7 = SGDGetUserSessionState(v4, v3, v5, v6);
  _InterlockedExchange64(
    (volatile __int64 *)(SGDGetUserSessionState(
                           _InterlockedExchange64((volatile __int64 *)(v7 + 8 * (v1 ^ 1) + 3560), QuadPart),
                           v8,
                           v9,
                           v10)
                       + 8 * (v1 ^ 1)
                       + 16472),
    QuadPart);
}
