/*
 * XREFs of sub_1800F665C @ 0x1800F665C
 * Callers:
 *     sub_180038664 @ 0x180038664 (sub_180038664.c)
 *     sub_180052FF4 @ 0x180052FF4 (sub_180052FF4.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800F6794 @ 0x1800F6794 (sub_1800F6794.c)
 *     sub_1800F6840 @ 0x1800F6840 (sub_1800F6840.c)
 */

__int64 __fastcall sub_1800F665C(_DWORD *a1, char a2)
{
  _DWORD *v2; // rsi
  __int64 result; // rax
  struct _FILETIME SystemTimeAsFileTime; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF

  v2 = a1 + 58;
  memset(a1 + 58, 0, 0x258uLL);
  memset(a1 + 208, 0, 0x190uLL);
  memset(a1 + 308, 0, 0xC8uLL);
  a1[344] = 100;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  a1[56] = SystemTimeAsFileTime.dwLowDateTime;
  result = SystemTimeAsFileTime.dwHighDateTime;
  a1[57] = SystemTimeAsFileTime.dwHighDateTime;
  if ( a2 )
  {
    v7 = 1;
    sub_1800F6840(a1, L"Version", 4LL, &v7, 4);
    sub_1800F6840(a1, L"LastLogTime", 11LL, a1 + 56, 8);
    sub_1800F6794(a1, v2);
    sub_1800F6794(a1, a1 + 208);
    return sub_1800F6794(a1, a1 + 308);
  }
  return result;
}
