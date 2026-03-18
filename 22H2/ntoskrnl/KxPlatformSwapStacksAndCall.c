/*
 * XREFs of KxPlatformSwapStacksAndCall @ 0x140427BC0
 * Callers:
 *     KiPlatformSwapStacksAndCall @ 0x140427BA0 (KiPlatformSwapStacksAndCall.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

void __fastcall KxPlatformSwapStacksAndCall(__int64 a1, void (*a2)(void))
{
  a2();
  JUMPOUT(0x140427BAFLL);
}
