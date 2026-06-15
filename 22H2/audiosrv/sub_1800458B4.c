/*
 * XREFs of sub_1800458B4 @ 0x1800458B4
 * Callers:
 *     sub_1800476C0 @ 0x1800476C0 (sub_1800476C0.c)
 *     sub_180064288 @ 0x180064288 (sub_180064288.c)
 *     sub_1800B7E08 @ 0x1800B7E08 (sub_1800B7E08.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 */

__int64 *__fastcall sub_1800458B4(__int64 a1, unsigned __int8 a2)
{
  __int64 *result; // rax
  __int64 v5; // rcx
  int v6; // esi
  _DWORD *v7; // rcx
  unsigned __int8 v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  char v10[32]; // [rsp+40h] [rbp-C0h] BYREF
  char *v11; // [rsp+60h] [rbp-A0h]
  int v12; // [rsp+68h] [rbp-98h]
  int v13; // [rsp+6Ch] [rbp-94h]
  int *v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+7Ch] [rbp-84h]
  _DWORD v17[1024]; // [rsp+80h] [rbp-80h] BYREF
  _UNKNOWN *retaddr; // [rsp+1098h] [rbp+F98h] BYREF

  result = (__int64 *)&retaddr;
  if ( *(_BYTE *)(a1 + 88) != a2 )
  {
    v17[1] = -1;
    if ( a2 > 1u )
      v17[0] = (a2 != 0 ? 3 : 1) | (a2 << 14);
    else
      v17[0] = a2 != 0 ? 3 : 1;
    v6 = RtlPublishWnfStateData(0x41840B3EA3BDB075LL, 0LL, v17, 8LL, 0LL);
    if ( v6 >= 0 )
      *(_BYTE *)(a1 + 88) = a2;
    result = sub_180008448(v5, sub_1800B6240);
    v7 = (_DWORD *)result[1];
    if ( *v7 > 4u )
    {
      v16 = 0;
      v13 = 0;
      v14 = &v9;
      v15 = 4;
      v11 = (char *)&v8;
      v9 = v6;
      v8 = a2;
      v12 = 1;
      return (__int64 *)sub_1800521E8((_DWORD)v7, (unsigned int)&unk_180168D09, 0, 0, 4, (__int64)v10);
    }
  }
  return result;
}
