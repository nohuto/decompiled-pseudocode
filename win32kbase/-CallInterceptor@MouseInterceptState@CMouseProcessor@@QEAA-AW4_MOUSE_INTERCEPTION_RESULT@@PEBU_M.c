/*
 * XREFs of ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C022B2E4
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C022E0C8 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C00F4AEA (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C022EB38 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 *     ?PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA?AW4InterceptMarshalCheck@12@XZ @ 0x1C022EC68 (-PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA-AW4InterceptMarshalCheck@12@XZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C02318B8 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::CallInterceptor(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // edi
  _OWORD v13[5]; // [rsp+40h] [rbp-58h] BYREF

  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  RIMLockExclusive(a1);
  memset(v13, 0, 0x48uLL);
  v6 = v13[1];
  *(_OWORD *)(a1 + 40) = v13[0];
  v7 = v13[2];
  *(_OWORD *)(a1 + 56) = v6;
  v8 = v13[3];
  *(_OWORD *)(a1 + 72) = v7;
  *(_QWORD *)&v7 = *(_QWORD *)&v13[4];
  *(_OWORD *)(a1 + 88) = v8;
  *(_QWORD *)(a1 + 104) = v7;
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable((CMouseProcessor::MouseInterceptState *)a1) )
  {
    v9 = CMouseProcessor::MouseInterceptState::PerformMarashlingCheck(a1);
    if ( v9 == 1 )
    {
      v10 = CMouseProcessor::MouseInterceptState::UserModeCallout(a1, a2, a3);
LABEL_9:
      v11 = v10;
      goto LABEL_10;
    }
    if ( v9 != 2 )
    {
      if ( v9 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7952);
      v10 = CMouseProcessor::MouseInterceptState::Marshal(a1, a2, a3);
      goto LABEL_9;
    }
  }
  v11 = 0;
LABEL_10:
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
