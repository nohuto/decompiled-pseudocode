/*
 * XREFs of PfSnAltProfileTreeCompareByProcess @ 0x14097C66C
 * Callers:
 *     PfProcessExitNotification @ 0x1407E6B80 (PfProcessExitNotification.c)
 *     PfSnSetAltPrefetchParam @ 0x14097C9F8 (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

int __fastcall PfSnAltProfileTreeCompareByProcess(__int64 a1, __int64 a2)
{
  __int64 Buf1; // [rsp+30h] [rbp+8h] BYREF

  Buf1 = a1;
  return memcmp(&Buf1, (const void *)(a2 + 48), 8uLL);
}
