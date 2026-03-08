/*
 * XREFs of KxPlatformSwapStacksAndCall @ 0x14041F830
 * Callers:
 *     KiPlatformSwapStacksAndCall @ 0x14041F810 (KiPlatformSwapStacksAndCall.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall KxPlatformSwapStacksAndCall(__int64 a1, void (*a2)(void))
{
  a2();
  JUMPOUT(0x14041F81FLL);
}
