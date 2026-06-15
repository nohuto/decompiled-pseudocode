/*
 * XREFs of sub_1800F3B8C @ 0x1800F3B8C
 * Callers:
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 *     sub_18013AD18 @ 0x18013AD18 (sub_18013AD18.c)
 *     sub_18013B2C8 @ 0x18013B2C8 (sub_18013B2C8.c)
 *     sub_18013B62C @ 0x18013B62C (sub_18013B62C.c)
 *     sub_18013BE08 @ 0x18013BE08 (sub_18013BE08.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800B5C98 @ 0x1800B5C98 (sub_1800B5C98.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

_UNKNOWN **sub_1800F3B8C(__int64 a1, ...)
{
  _UNKNOWN **result; // rax
  wchar_t v3[1024]; // [rsp+20h] [rbp-818h] BYREF
  va_list va; // [rsp+848h] [rbp+10h] BYREF

  va_start(va, a1);
  memset(v3, 0, sizeof(v3));
  sub_1800B5C98(v3, 1024LL, a1, (__int64)va);
  result = &off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    return (_UNKNOWN **)sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0xAu, (__int64)&unk_180171BD8, v3);
  }
  return result;
}
