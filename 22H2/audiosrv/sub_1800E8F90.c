/*
 * XREFs of sub_1800E8F90 @ 0x1800E8F90
 * Callers:
 *     sub_180032A30 @ 0x180032A30 (sub_180032A30.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1800E7A9C @ 0x1800E7A9C (sub_1800E7A9C.c)
 */

char __fastcall sub_1800E8F90(__int64 a1, int a2)
{
  __int64 (__fastcall **v5)(); // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  __int64 (__fastcall ***v7)(); // [rsp+58h] [rbp-10h]
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = 0LL;
  sub_1800461B8(&v8);
  v6 = a2;
  v5 = off_180154C10;
  v7 = &v5;
  LOBYTE(a2) = (int)sub_1800E7A9C(a1, (__int64)&v5, &v8) >= 0;
  sub_1800461B8(&v8);
  return a2;
}
