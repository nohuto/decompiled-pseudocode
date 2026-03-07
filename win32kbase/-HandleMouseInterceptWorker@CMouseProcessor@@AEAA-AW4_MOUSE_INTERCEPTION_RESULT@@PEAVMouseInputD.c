__int64 __fastcall CMouseProcessor::HandleMouseInterceptWorker(
        __int64 a1,
        const struct CMouseProcessor::MouseInputDataEx *a2)
{
  __int64 v2; // rsi
  bool v6; // zf
  char v7; // al
  unsigned int v8; // edi
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h]
  _OWORD v11[3]; // [rsp+38h] [rbp-38h] BYREF
  int v12; // [rsp+80h] [rbp+10h] BYREF

  v12 = 0;
  v2 = a1 + 3704;
  if ( !CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
          (CMouseProcessor::MouseInterceptState *)(a1 + 3704),
          (enum _MOUSE_PREINTERCEPT_BEHAVIOR *)&v12) )
    return 0LL;
  v6 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 8);
  v7 = v12;
  if ( !v6 )
    v7 = v12 & 0xFE;
  memset(v11, 0, sizeof(v11));
  CMouseProcessor::PrepareDataForIntercept((CMouseProcessor *)a1, a2, v7 & 1, (struct _MouseInterceptorData *)v11);
  InputTraceLogging::Mouse::CallInterceptor();
  v10 = 0LL;
  v9 = 0LL;
  v8 = CMouseProcessor::MouseInterceptState::CallInterceptor(v2, (__int64)v11, (__int64)&v9);
  InputTraceLogging::Mouse::HandleInterception();
  if ( v8 == 2 )
  {
    HIDWORD(v10) = BYTE4(v10) & 0x76;
    CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(a2, (const struct _MouseProcessorData *)&v9);
  }
  return v8;
}
