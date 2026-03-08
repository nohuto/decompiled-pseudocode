/*
 * XREFs of PopFlushAndHold @ 0x14058DE18
 * Callers:
 *     PopFlushVolumeWorker @ 0x140AA3140 (PopFlushVolumeWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1404123F0 (ZwDeviceIoControlFile.c)
 */

NTSTATUS __fastcall PopFlushAndHold(void *a1, struct _IO_STATUS_BLOCK *a2)
{
  _QWORD v3[2]; // [rsp+50h] [rbp-28h] BYREF
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  v3[0] = 0LL;
  v3[1] = 0LL;
  v5 = -1;
  v4 = 1;
  return ZwDeviceIoControlFile(a1, 0LL, 0LL, 0LL, a2, 0x53C000u, v3, 0x18u, 0LL, 0);
}
