/*
 * XREFs of ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x1C01F9950
 * Callers:
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C01FB484 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C00363B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C00429D4 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ComputeMouseSystemStateForInterceptor(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // esi

  v4 = 0;
  v5 = *(_WORD *)(a2 + 4) & 0xF;
  if ( v5 && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1024LL, a3) )
  {
    if ( (v5 & 3) != 0 )
    {
      v9 = 1;
    }
    else
    {
      v5 >>= 2;
      v9 = 2;
      if ( !v5 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    }
    if ( anonymous_namespace_::IsMouseButtonSwapped(v9, (v5 & 2) != 0) )
      v4 = 1;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3696), 1, 1) )
    v4 |= 2u;
  return v4;
}
