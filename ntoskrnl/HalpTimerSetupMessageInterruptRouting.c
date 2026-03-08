/*
 * XREFs of HalpTimerSetupMessageInterruptRouting @ 0x140507398
 * Callers:
 *     HalpTimerConfigureInterrupt @ 0x140379C34 (HalpTimerConfigureInterrupt.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerSetupMessageInterruptRouting(__int64 a1)
{
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  InternalData = HalpTimerGetInternalData(a1);
  LOBYTE(v3) = 1;
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a1 + 152))(
             InternalData,
             v3,
             *(_QWORD *)(a1 + 232),
             *(unsigned int *)(a1 + 240));
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 256) = result;
    HalpTimerLastProblem = 24;
    *(_DWORD *)(a1 + 252) = 24;
    *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
    *(_DWORD *)(a1 + 272) = 2366;
  }
  return result;
}
