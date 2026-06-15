/*
 * XREFs of sub_180133808 @ 0x180133808
 * Callers:
 *     sub_1800364B0 @ 0x1800364B0 (sub_1800364B0.c)
 *     sub_180073640 @ 0x180073640 (sub_180073640.c)
 *     sub_180073AF0 @ 0x180073AF0 (sub_180073AF0.c)
 *     sub_180073FA0 @ 0x180073FA0 (sub_180073FA0.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_180133808(__int64 a1, unsigned __int8 *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  return sub_180109634((__int64)&dword_18019C4F0, a2, 0LL, 0LL, 2u, &v3);
}
