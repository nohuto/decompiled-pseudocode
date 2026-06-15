/*
 * XREFs of sub_18010C9CC @ 0x18010C9CC
 * Callers:
 *     sub_180073A60 @ 0x180073A60 (sub_180073A60.c)
 *     sub_180073A90 @ 0x180073A90 (sub_180073A90.c)
 *     sub_180073AC0 @ 0x180073AC0 (sub_180073AC0.c)
 *     sub_18010CAF0 @ 0x18010CAF0 (sub_18010CAF0.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 */

__int64 __fastcall sub_18010C9CC(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  sub_1800461B8(&v3);
  if ( (int)RoGetMatchingRestrictedErrorInfo(a1, &v3) >= 0 )
    SetRestrictedErrorInfo(v3);
  return sub_1800461B8(&v3);
}
