/*
 * XREFs of ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x1C01BF1C4
 * Callers:
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C01C0F00 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C00420AC (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C009CE78 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ComputeMouseSystemStateForInterceptor(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  unsigned __int16 v4; // bx
  int v5; // esi
  __int64 result; // rax

  v3 = 0;
  v4 = *(_WORD *)(a2 + 4) & 0xF;
  if ( v4 && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1024) )
  {
    if ( (v4 & 3) != 0 )
    {
      v5 = 1;
    }
    else
    {
      v4 >>= 2;
      v5 = 2;
      if ( !v4 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5739);
    }
    if ( anonymous_namespace_::IsMouseButtonSwapped(v5, (v4 & 2) != 0) )
      v3 = 1;
  }
  result = v3 | 2;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3688), 1, 1) )
    return v3;
  return result;
}
