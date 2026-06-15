/*
 * XREFs of sub_180132E0C @ 0x180132E0C
 * Callers:
 *     sub_180132B98 @ 0x180132B98 (sub_180132B98.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800DD6D0 @ 0x1800DD6D0 (sub_1800DD6D0.c)
 *     sub_180132A3C @ 0x180132A3C (sub_180132A3C.c)
 *     sub_180132FD0 @ 0x180132FD0 (sub_180132FD0.c)
 *     sub_180133058 @ 0x180133058 (sub_180133058.c)
 */

_BOOL8 __fastcall sub_180132E0C(__int64 a1, _WORD *a2, _WORD *a3, __int64 a4, __int64 a5, _DWORD *a6, __int64 a7)
{
  BOOL v8; // ebx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // eax
  int pvData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData[3]; // [rsp+44h] [rbp-BCh] BYREF
  WCHAR SubKey[304]; // [rsp+50h] [rbp-B0h] BYREF

  pvData = 0;
  v8 = 0;
  if ( sub_180132A3C(SubKey, (size_t)a2, (__int64)a3, a2, a3) )
  {
    if ( a7 ? sub_180133058(a7, (unsigned int)SubKey, v10, 260, a4) : (unsigned int)sub_180132FD0(SubKey, v9, 260LL, a4) )
    {
      pcbData[0] = 4;
      v12 = a7;
      if ( !a7 )
        v12 = -2147483647LL;
      if ( !RegGetValueW((HKEY)v12, SubKey, aDefaultFlags, 0x10u, 0LL, &pvData, pcbData) )
        pvData &= 0x380002u;
      if ( !(unsigned int)sub_1800DD6D0(SubKey, 0x25CuLL, (__int64)asc_18019DAA0)
        && !(unsigned int)sub_1800DD6D0(SubKey, 0x25CuLL, (__int64)aActive) )
      {
        if ( a7 )
          v15 = sub_180133058(a7, (unsigned int)SubKey, v14, 302, (__int64)SubKey);
        else
          v15 = sub_180132FD0(SubKey, v13, 302LL, SubKey);
        if ( v15 )
          v8 = lstrcmpW(SubKey, ::a1) == 0;
        else
          v8 = 1;
      }
    }
  }
  if ( pvData )
    *a6 |= pvData;
  return v8;
}
