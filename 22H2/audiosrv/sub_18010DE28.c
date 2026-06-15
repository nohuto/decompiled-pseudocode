/*
 * XREFs of sub_18010DE28 @ 0x18010DE28
 * Callers:
 *     sub_18010CD40 @ 0x18010CD40 (sub_18010CD40.c)
 *     sub_18010E308 @ 0x18010E308 (sub_18010E308.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005C098 @ 0x18005C098 (sub_18005C098.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801098D0 @ 0x1801098D0 (sub_1801098D0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18010DE28(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  LPVOID v15; // [rsp+38h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+60h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+68h] [rbp+28h] BYREF
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF

  v17 = a1;
  if ( !a2 )
  {
    v5 = -2147418113;
    sub_18004BD84(
      (int)retaddr,
      418,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      -2147418113);
    return v5;
  }
  pv = 0LL;
  sub_18002A504(&pv, 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 40LL))(a2, &pv);
  v5 = v6;
  if ( v6 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      421,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      v6);
    goto LABEL_19;
  }
  v14 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, 2LL, &v14);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v19 = 0LL;
    v8 = sub_18005C098((__int64)pv, v14, &v19);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 40LL))(v19, a3);
      v5 = v8;
      if ( v8 >= 0 )
      {
        if ( (unsigned int)CallbackContext > 5 )
        {
          v15 = pv;
          LODWORD(v17) = a3;
          sub_1801098D0(v10, byte_180169711, v11, v12, (__int64)&v17, &v15);
        }
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
        v5 = v8;
        if ( v8 >= 0 )
        {
          v5 = 0;
          goto LABEL_17;
        }
        v9 = 432;
      }
      else
      {
        v9 = 429;
      }
    }
    else
    {
      v9 = 427;
    }
    sub_18004BD84(
      (int)retaddr,
      v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      v8);
LABEL_17:
    sub_18000F708(&v19);
    goto LABEL_18;
  }
  sub_18004BD84(
    (int)retaddr,
    424,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    v7);
LABEL_18:
  sub_18000F708(&v14);
LABEL_19:
  if ( pv )
    CoTaskMemFree(pv);
  return v5;
}
