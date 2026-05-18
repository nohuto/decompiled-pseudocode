/*
 * XREFs of sub_180010454 @ 0x180010454
 * Callers:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_18002C8D0 @ 0x18002C8D0 (sub_18002C8D0.c)
 *     sub_18002CC84 @ 0x18002CC84 (sub_18002CC84.c)
 *     sub_18002FB34 @ 0x18002FB34 (sub_18002FB34.c)
 *     sub_18002FE38 @ 0x18002FE38 (sub_18002FE38.c)
 *     sub_180033220 @ 0x180033220 (sub_180033220.c)
 *     sub_180033650 @ 0x180033650 (sub_180033650.c)
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 *     _setlocale_set_cat @ 0x18003A1F0 (_setlocale_set_cat.c)
 *     sub_18003A5A8 @ 0x18003A5A8 (sub_18003A5A8.c)
 *     sub_18003F610 @ 0x18003F610 (sub_18003F610.c)
 * Callees:
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180010454(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 )
  {
    v2 = *a1;
    v4 = 0;
    v6 = 0;
    (*(void (__fastcall **)(__int64 *, void *, int *, _QWORD))(v2 + 32))(a1, &unk_1801D6870, &v6, 0LL);
    if ( !v6 )
    {
      if ( a2 )
        v4 = strnlen(a2, 0xFFuLL);
      (*(void (__fastcall **)(__int64 *, void *, _QWORD, const char *))(*a1 + 40))(a1, &unk_1801D6870, v4, a2);
    }
  }
}
