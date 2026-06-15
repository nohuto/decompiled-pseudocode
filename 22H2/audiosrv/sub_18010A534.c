/*
 * XREFs of sub_18010A534 @ 0x18010A534
 * Callers:
 *     sub_180108B84 @ 0x180108B84 (sub_180108B84.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB330 @ 0x1800BB330 (sub_1800BB330.c)
 *     sub_1800D50A8 @ 0x1800D50A8 (sub_1800D50A8.c)
 *     sub_180105BA8 @ 0x180105BA8 (sub_180105BA8.c)
 *     sub_18010A2BC @ 0x18010A2BC (sub_18010A2BC.c)
 *     sub_18010A398 @ 0x18010A398 (sub_18010A398.c)
 */

__int64 __fastcall sub_18010A534(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  int v6; // edx
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // al
  __int64 *v13; // rax
  __int64 *v14; // rax
  int v15; // [rsp+50h] [rbp-48h] BYREF
  int v16; // [rsp+54h] [rbp-44h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h] BYREF
  __int64 v19; // [rsp+68h] [rbp-30h] BYREF
  std::_Ref_count_base *v20; // [rsp+70h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  int v22; // [rsp+A0h] [rbp+8h] BYREF
  int v23; // [rsp+A8h] [rbp+10h] BYREF
  int v24; // [rsp+B0h] [rbp+18h] BYREF
  int v25; // [rsp+B8h] [rbp+20h] BYREF

  *(_QWORD *)a1 = a3;
  if ( !a2 )
  {
    sub_1800BB330(
      (int)retaddr,
      35,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      -2005139197);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(__int64, int *, int *, int *))(*(_QWORD *)a2 + 200LL))(a2, &v23, &v22, &v24);
  if ( v5 < 0 )
  {
    v6 = 36;
LABEL_5:
    sub_18004BD84(
      (int)retaddr,
      v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      v5);
    return (unsigned int)v5;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 208LL))(a2, &v17);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = 37;
    goto LABEL_5;
  }
  if ( (unsigned int)CallbackContext > 4 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
    v19 = v17;
    v25 = v24;
    v15 = v22;
    v16 = v23;
    sub_18010A2BC(
      v9,
      byte_1801692DE,
      v10,
      v11,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v25,
      (__int64)&v19,
      (void **)&v18);
  }
  try
  {
    v12 = v24 != 0;
    *(_BYTE *)(a1 + 8) = v24 != 0;
    if ( v12 )
    {
      if ( !qword_18019EAF8 )
      {
        v13 = sub_18010A398(&v19, &v23, &v22, &v17);
        sub_1800D50A8(&qword_18019EAF8, v13);
        if ( v20 )
          sub_180052600(v20);
      }
      sub_180105BA8((_QWORD *)(a1 + 16), &qword_18019EAF8);
    }
    else
    {
      v14 = sub_18010A398(&v19, &v23, &v22, &v17);
      sub_1800D50A8((_QWORD *)(a1 + 16), v14);
      if ( v20 )
        sub_180052600(v20);
    }
    result = 0LL;
  }
  catch ( std::bad_alloc )
  {
    sub_18004BD84(
      (int)retaddr,
      58,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      -2147024882);
    return 2147942414LL;
  }
  return result;
}
