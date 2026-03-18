/*
 * XREFs of PfSnAltProfileTreeCompareByProcess @ 0x14097F71C
 * Callers:
 *     PfProcessExitNotification @ 0x1407612C4 (PfProcessExitNotification.c)
 *     PfSnSetAltPrefetchParam @ 0x14097FAA8 (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     memcmp @ 0x1403D9CF0 (memcmp.c)
 */

int __fastcall PfSnAltProfileTreeCompareByProcess(__int64 a1, __int64 a2)
{
  __int64 Buf1; // [rsp+30h] [rbp+8h] BYREF

  Buf1 = a1;
  return memcmp(&Buf1, (const void *)(a2 + 48), 8uLL);
}
