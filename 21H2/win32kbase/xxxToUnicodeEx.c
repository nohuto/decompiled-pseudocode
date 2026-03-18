/*
 * XREFs of xxxToUnicodeEx @ 0x1C003FA20
 * Callers:
 *     NtUserToUnicodeEx @ 0x1C003F590 (NtUserToUnicodeEx.c)
 * Callees:
 *     xxxInternalToUnicode @ 0x1C003FB30 (xxxInternalToUnicode.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall xxxToUnicodeEx(unsigned int a1, unsigned int a2, char *a3, __int64 a4, int a5, int a6, __int64 a7)
{
  int v11; // edx
  _BYTE *v12; // r8
  char v13; // r10
  int v14; // eax
  int v15; // eax
  char v16; // r10
  int v17; // eax
  _DWORD v19[4]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v20[64]; // [rsp+50h] [rbp-78h] BYREF

  memset(v20, 0, sizeof(v20));
  v11 = 0;
  v19[0] = 0;
  do
  {
    v12 = &v20[(unsigned __int64)(unsigned __int8)v11 >> 2];
    v13 = 2 * (v11 & 3);
    v14 = (unsigned __int8)*v12;
    if ( *a3 < 0 )
      v15 = v14 | (1 << v13);
    else
      v15 = v14 & ~(1 << v13);
    v16 = 2 * (v11 & 3) + 1;
    if ( (*a3 & 1) != 0 )
      v17 = (unsigned __int8)v15 | (1 << v16);
    else
      v17 = (unsigned __int8)v15 & ~(1 << v16);
    ++v11;
    *v12 = v17;
    ++a3;
  }
  while ( v11 < 256 );
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, __int64, int, int, _DWORD *, __int64))xxxInternalToUnicode)(
           a1,
           a2,
           v20,
           a4,
           a5,
           a6,
           v19,
           a7);
}
