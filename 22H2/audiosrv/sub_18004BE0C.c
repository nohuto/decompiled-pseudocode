/*
 * XREFs of sub_18004BE0C @ 0x18004BE0C
 * Callers:
 *     sub_18004BDBC @ 0x18004BDBC (sub_18004BDBC.c)
 *     sub_1800B5370 @ 0x1800B5370 (sub_1800B5370.c)
 *     sub_1800B5414 @ 0x1800B5414 (sub_1800B5414.c)
 *     sub_1800BA358 @ 0x1800BA358 (sub_1800BA358.c)
 *     sub_1800BC5EC @ 0x1800BC5EC (sub_1800BC5EC.c)
 *     sub_1800CA5FC @ 0x1800CA5FC (sub_1800CA5FC.c)
 *     sub_1800F65D8 @ 0x1800F65D8 (sub_1800F65D8.c)
 * Callees:
 *     sub_18004BEE8 @ 0x18004BEE8 (sub_18004BEE8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     __castguard_check_failure_user_handled_wrapper @ 0x1800B5744 (__castguard_check_failure_user_handled_wrapper.c)
 *     sub_1800B5E1C @ 0x1800B5E1C (sub_1800B5E1C.c)
 */

__int64 __fastcall sub_18004BE0C(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        char a10)
{
  bool v10; // di
  __int64 result; // rax
  int v12; // [rsp+48h] [rbp-14F0h]
  int v13; // [rsp+58h] [rbp-14E0h]
  int v14; // [rsp+68h] [rbp-14D0h]
  __int64 v15[18]; // [rsp+80h] [rbp-14B8h] BYREF
  __int64 v16[128]; // [rsp+110h] [rbp-1428h] BYREF
  WCHAR OutputString[2048]; // [rsp+510h] [rbp-1028h] BYREF

  v10 = !a7 && (a10 & 4) == 0 && qword_18019F9E8;
  result = sub_18004BEE8(a1, a2, a3, a4, a5, a6, a7, a8, a9, v12, OutputString, v13, (__int64)v16, v14, (__int64)v15);
  if ( (a10 & 2) == 0 )
  {
    if ( a7 != 3 )
    {
      if ( a7 )
        return result;
      if ( v10 )
        ((void (__fastcall *)(__int64 *, WCHAR *))qword_18019F9E8)(v15, OutputString);
      if ( (a10 & 4) != 0 )
        _castguard_check_failure_user_handled_wrapper();
      if ( qword_18019E3D0 )
        qword_18019E3D0(v15);
    }
    sub_1800B5E1C(v15);
  }
  return result;
}
