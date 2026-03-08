/*
 * XREFs of KiPlatformSwapStacksAndCall @ 0x14041F810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiPlatformSwapStacksAndCall(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 savedregs; // [rsp+0h] [rbp+0h] BYREF

  *(_QWORD *)(a3 + 64) = &savedregs;
  return KxPlatformSwapStacksAndCall();
}
