/*
 * XREFs of HalpSetTimer @ 0x1402CBEE0
 * Callers:
 *     HalpTimerClockArm @ 0x1402CBD60 (HalpTimerClockArm.c)
 *     HalpTimerInitializeClock @ 0x1403AC5D0 (HalpTimerInitializeClock.c)
 *     HalpTimerWatchdogResetCountdown @ 0x1403CE870 (HalpTimerWatchdogResetCountdown.c)
 *     HalpSetTimerAnyMode @ 0x1405068F0 (HalpSetTimerAnyMode.c)
 *     HalpTimerRestartProfileInterrupt @ 0x1405084E4 (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerSetTimerBackedProfileInterval @ 0x1405085C0 (HalpTimerSetTimerBackedProfileInterval.c)
 *     HalpTimerStartProfileInterrupt @ 0x140508654 (HalpTimerStartProfileInterrupt.c)
 *     HalpTimerTestHypervisorTimer @ 0x140508908 (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerWatchdogStart @ 0x1405096C0 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1405097B0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpWatchdogDelayExpiration @ 0x1405099B0 (HalpWatchdogDelayExpiration.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     HalpTimerScaleCounter @ 0x1403BE604 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpSetTimer(__int64 a1, int a2, ULONGLONG a3, char a4, unsigned __int64 *a5)
{
  unsigned __int64 v5; // rdi
  NTSTATUS v8; // ecx
  int v9; // r11d
  ULONGLONG v10; // rcx
  unsigned __int128 v11; // rax
  unsigned int v12; // ecx
  ULONGLONG v13; // rsi
  __int64 v14; // r10
  ULONGLONG v15; // rax
  __int64 InternalData; // rax
  unsigned int v17; // r11d
  ULONGLONG pullResult; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG v20[2]; // [rsp+28h] [rbp-10h] BYREF

  v20[0] = 0LL;
  v5 = 0LL;
  pullResult = 0LL;
  switch ( a2 )
  {
    case 1:
      if ( (*(_DWORD *)(a1 + 224) & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 256) = 0;
        HalpTimerLastProblem = 17;
        v8 = -1073741637;
        *(_DWORD *)(a1 + 252) = 17;
        *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
        *(_DWORD *)(a1 + 272) = 692;
        goto LABEL_14;
      }
      break;
    case 2:
      if ( (*(_DWORD *)(a1 + 224) & 0x50) == 0 )
      {
        *(_DWORD *)(a1 + 256) = 0;
        HalpTimerLastProblem = 17;
        v8 = -1073741637;
        *(_DWORD *)(a1 + 252) = 17;
        *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
        *(_DWORD *)(a1 + 272) = 683;
        goto LABEL_14;
      }
      break;
    case 3:
      if ( (*(_DWORD *)(a1 + 224) & 0x20) == 0 )
      {
        *(_DWORD *)(a1 + 256) = 0;
        HalpTimerLastProblem = 17;
        v8 = -1073741637;
        *(_DWORD *)(a1 + 252) = 17;
        *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
        *(_DWORD *)(a1 + 272) = 671;
        goto LABEL_14;
      }
      break;
    default:
      goto LABEL_21;
  }
  v8 = RtlULongLongMult(*(_QWORD *)(a1 + 192), a3, &pullResult);
  if ( v8 < 0 )
    goto LABEL_14;
  if ( v9 == 3 )
  {
    v10 = pullResult + 9999999;
    if ( pullResult + 9999999 < pullResult )
    {
      v8 = -1073741675;
      goto LABEL_14;
    }
  }
  else
  {
    v10 = pullResult;
  }
  v11 = v10 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  v12 = *(_DWORD *)(a1 + 220);
  v13 = *((_QWORD *)&v11 + 1) >> 23;
  if ( v12 < 0x40 && v13 >= 1LL << v12 )
  {
LABEL_21:
    v8 = -1073741811;
    goto LABEL_14;
  }
  if ( RtlULongLongMult(v13, 0x2540BE400uLL, v20) < 0 )
    v15 = HalpTimerScaleCounter(v13, *(_QWORD *)(a1 + 192), v14);
  else
    v15 = v20[0] / *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 16) = v13;
  *(_DWORD *)(a1 + 52) = 1;
  v5 = v15 / 0x3E8;
  if ( a4 )
  {
    InternalData = HalpTimerGetInternalData(a1);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, ULONGLONG))(a1 + 128))(InternalData, v17, v13);
    if ( v8 < 0 )
    {
      *(_DWORD *)(a1 + 256) = v8;
      HalpTimerLastProblem = 18;
      *(_DWORD *)(a1 + 252) = 18;
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
      *(_DWORD *)(a1 + 272) = 782;
    }
  }
  else
  {
    v8 = 0;
  }
LABEL_14:
  *a5 = v5;
  return (unsigned int)v8;
}
