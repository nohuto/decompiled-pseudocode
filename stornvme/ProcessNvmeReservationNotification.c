/*
 * XREFs of ProcessNvmeReservationNotification @ 0x1C0024E94
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x1C001E210 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     GetLunExtension @ 0x1C001B754 (GetLunExtension.c)
 */

char __fastcall ProcessNvmeReservationNotification(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v3; // r11
  __int64 LunExtension; // r8
  __int64 v5; // r10
  __int64 v6; // r11

  SrbExtension = GetSrbExtension(a2);
  LunExtension = GetLunExtension(v3, HIDWORD(*(_QWORD *)(SrbExtension + 4096)));
  if ( *(_BYTE *)(v6 + 22) && *(_BYTE *)(v5 + 8) )
    StorPortExtendedFunction(86LL, v6, LunExtension, 1LL);
  return 0;
}
