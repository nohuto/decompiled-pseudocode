/*
 * XREFs of _isctype_l @ 0x1800EE8BC
 * Callers:
 *     sub_1800EEA10 @ 0x1800EEA10 (sub_1800EEA10.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800DCC88 @ 0x1800DCC88 (sub_1800DCC88.c)
 *     sub_1800EEA30 @ 0x1800EEA30 (sub_1800EEA30.c)
 */

// local variable allocation has failed, the output may be wrong!
// Hidden C++ exception states: #wind=1
int __cdecl isctype_l(int C, int Type, _locale_t Locale)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 *i; // rcx
  _QWORD *v9; // r10
  int result; // eax
  int v11; // [rsp+30h] [rbp-50h] BYREF
  int v12; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]

  v3 = *(_QWORD *)&Type;
  v4 = *(_QWORD *)&C;
  v5 = Mtx_lock((_Mtx_t)(*(_QWORD *)&C + 32LL));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  v7 = (_DWORD *)sub_180008448(v6, sub_1800B6240)[1];
  if ( *v7 > 4u )
  {
    v13 = v3;
    v15 = &v13;
    v16 = 8;
    v17 = 0;
    sub_1800521E8((__int64)v7, byte_180168C5D, 0LL, 0LL, 3, (__int64)v14);
  }
  for ( i = *(__int64 **)(v4 + 8); i != *(__int64 **)(v4 + 16) && *i != v3; ++i )
    ;
  if ( i != *(__int64 **)(v4 + 16) )
  {
    sub_1800DCC88(*i, &v12, &v11, &v13);
    if ( v11 )
    {
      if ( !(_DWORD)v13 )
        goto LABEL_16;
    }
    else if ( !v12 )
    {
      goto LABEL_16;
    }
    if ( *v9 )
      sub_1800EEA30();
  }
LABEL_16:
  result = Mtx_unlock((_Mtx_t)(v4 + 32));
  if ( result )
    std::_Throw_C_error(result);
  return result;
}
