/*
 * XREFs of HalpDmaConfigureInterrupt @ 0x140525184
 * Callers:
 *     HalpDmaInitializeControllers @ 0x140398798 (HalpDmaInitializeControllers.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpInterruptConnect @ 0x1405021F0 (HalpInterruptConnect.c)
 */

int __fastcall HalpDmaConfigureInterrupt(unsigned __int64 a1, __int128 *a2)
{
  int result; // eax
  PKINTERRUPT v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0LL;
  result = HalpInterruptConnect(
             a2,
             *(_DWORD *)(a1 + 180),
             0xCFu,
             0xCu,
             *(_DWORD *)(a1 + 184),
             *(KINTERRUPT_MODE *)(a1 + 188),
             (unsigned __int64)HalpDmaControllerInterruptRoutine,
             a1,
             (KSPIN_LOCK *)(a1 + 168),
             0xCu,
             3,
             &v3);
  if ( result < 0 )
    KeBugCheckEx(0x5Cu, 0x400uLL, result, 0LL, 0LL);
  return result;
}
