/*
 * XREFs of sub_18012E520 @ 0x18012E520
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BC6FC @ 0x1800BC6FC (sub_1800BC6FC.c)
 *     sub_18012FC64 @ 0x18012FC64 (sub_18012FC64.c)
 */

__int64 __fastcall sub_18012E520(__int64 a1, __int128 *a2, int a3, int a4, __int64 a5, __int64 *a6)
{
  unsigned int v9; // r12d
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+80h] [rbp-29h] BYREF
  __int64 v15; // [rsp+88h] [rbp-21h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, _DWORD *, __int64 *); // [rsp+90h] [rbp-19h]
  __int128 v17; // [rsp+98h] [rbp-11h]
  __int128 v18; // [rsp+A8h] [rbp-1h] BYREF
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+4Fh]

  v17 = *a2;
  v18 = v17;
  EtwEventActivityIdControl(4LL, &v18);
  *a6 = 0LL;
  if ( a4 )
  {
    v16 = 0LL;
    v10 = sub_18012FC64(a5, 0, a3, a4);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v14 = 0LL;
      v11 = (**v16)(v16, &dword_18015B248, &v14);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v15 = 0LL;
        if ( v14 && ((**(void (__fastcall ***)(__int64, __int64 *, __int64 *))v14)(v14, &qword_1801737E0, &v15), v15) )
        {
          if ( *(_QWORD *)(a1 + 88) != v14 )
            sub_1800579A4((_QWORD *)(a1 + 88), v14);
          v12 = (a1 + 8) & -(__int64)(a1 != 0);
          *a6 = v12;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          v9 = 0;
        }
        else
        {
          v9 = -2147467262;
          sub_18004BD84(
            (int)retaddr,
            52,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
            -2147467262);
        }
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      else
      {
        sub_18004BD84((int)retaddr, 49, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp", v11);
      }
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else
    {
      sub_1800BC6FC(
        (int)retaddr,
        46,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
        v10,
        "APO CLSID {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *(_DWORD *)a5,
        *(unsigned __int16 *)(a5 + 4),
        *(unsigned __int16 *)(a5 + 6),
        *(unsigned __int8 *)(a5 + 8),
        *(unsigned __int8 *)(a5 + 9),
        *(unsigned __int8 *)(a5 + 10),
        *(unsigned __int8 *)(a5 + 11),
        *(unsigned __int8 *)(a5 + 12),
        *(unsigned __int8 *)(a5 + 13),
        *(unsigned __int8 *)(a5 + 14),
        *(unsigned __int8 *)(a5 + 15));
    }
  }
  else
  {
    v9 = -2147024809;
    sub_18004BD84(
      (int)retaddr,
      39,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
      -2147024809);
  }
  EtwEventActivityIdControl(4LL, &v18);
  return v9;
}
