/*
 * XREFs of sub_18010A408 @ 0x18010A408
 * Callers:
 *     sub_18010AFAC @ 0x18010AFAC (sub_18010AFAC.c)
 *     sub_18010B9A0 @ 0x18010B9A0 (sub_18010B9A0.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800BB330 @ 0x1800BB330 (sub_1800BB330.c)
 *     sub_18010A200 @ 0x18010A200 (sub_18010A200.c)
 */

__int64 __fastcall sub_18010A408(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // ecx
  int v11; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+54h] [rbp-Ch] BYREF
  __int64 v13; // [rsp+58h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]
  int v15; // [rsp+80h] [rbp+20h] BYREF
  int v16; // [rsp+90h] [rbp+30h] BYREF
  int v17; // [rsp+98h] [rbp+38h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
  {
    sub_1800BB330(
      (int)retaddr,
      95,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      -2005139200);
    __debugbreak();
  }
  v7 = *(unsigned int *)(v6 + 24);
  v8 = (unsigned int)(*(_DWORD *)(v6 + 20) - v7);
  if ( (unsigned int)CallbackContext > 4 )
  {
    v17 = *(_DWORD *)(v6 + 20);
    v15 = v8 + a2;
    v13 = a1;
    v16 = v8;
    v11 = v7;
    v12 = a2;
    sub_18010A200(
      v8,
      byte_180169330,
      v7,
      a4,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v13);
    v6 = *(_QWORD *)(a1 + 16);
  }
  v9 = *(_DWORD *)(v6 + 24);
  if ( a2 <= v9 )
  {
    *(_DWORD *)(v6 + 24) = v9 - a2;
    return 0LL;
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      108,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      -2005139199);
    return 2289828097LL;
  }
}
