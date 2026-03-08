/*
 * XREFs of RegisterIconTitleClass @ 0x1C00DBAB8
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C002F120 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C0030020 (NtUserRegisterClassExWOW.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     InternalRegisterClassEx @ 0x1C0030830 (InternalRegisterClassEx.c)
 */

__int64 RegisterIconTitleClass()
{
  __int64 *v0; // rax
  __int64 result; // rax
  _DWORD v2[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v3; // [rsp+28h] [rbp-58h]
  int v4; // [rsp+30h] [rbp-50h]
  int v5; // [rsp+34h] [rbp-4Ch]
  __int64 v6; // [rsp+38h] [rbp-48h]
  __int64 v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+78h] [rbp-8h]
  int v15; // [rsp+7Ch] [rbp-4h]

  v4 = 0;
  v7 = 0LL;
  v12 = 0LL;
  v10 = 0LL;
  v2[1] = 0;
  v3 = 0LL;
  v5 = 0;
  v14 = 0;
  v2[0] = 0;
  v15 = 1;
  v6 = hModuleWin;
  v0 = (__int64 *)gasyscur[1];
  if ( v0 )
    v8 = *v0;
  else
    v8 = 0LL;
  v9 = 0LL;
  v11 = 32772LL;
  v13 = 32772LL;
  result = InternalRegisterClassEx((__int64)v2, 0x29Bu, 65, 0LL);
  if ( result )
  {
    result = 1LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) |= 0x10000000u;
  }
  return result;
}
