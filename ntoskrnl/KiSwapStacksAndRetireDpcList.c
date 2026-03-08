/*
 * XREFs of KiSwapStacksAndRetireDpcList @ 0x14041F850
 * Callers:
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSwapStacksAndRetireDpcList(__int64 a1, __int64 a2)
{
  __int64 savedregs; // [rsp+0h] [rbp+0h] BYREF

  *(_QWORD *)(a2 + 64) = &savedregs;
  return KxSwapStacksAndRetireDpcList();
}
