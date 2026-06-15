/*
 * XREFs of sub_180121A98 @ 0x180121A98
 * Callers:
 *     sub_18001D800 @ 0x18001D800 (sub_18001D800.c)
 *     sub_180121D90 @ 0x180121D90 (sub_180121D90.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801216CC @ 0x1801216CC (sub_1801216CC.c)
 *     sub_1801217EC @ 0x1801217EC (sub_1801217EC.c)
 *     sub_180121C98 @ 0x180121C98 (sub_180121C98.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180121A98(int a1, __int64 a2)
{
  HRESULT v4; // eax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  int v9; // edx
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13[2]; // [rsp+40h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]
  char v15; // [rsp+80h] [rbp+30h] BYREF
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF

  ppv = 0LL;
  v4 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11 = 0LL;
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(ppv, 0LL, 15LL, &v11);
    v5 = v6;
    if ( v6 < 0 )
    {
      sub_18004BD84((int)retaddr, 421, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp", v6);
LABEL_19:
      sub_18000F708(&v11);
      goto LABEL_20;
    }
    if ( a1 == 3 )
    {
      sub_1801216CC(v11);
LABEL_18:
      v5 = 0;
      goto LABEL_19;
    }
    v16 = 0LL;
    v5 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)pv + 24LL))(pv, a2, 1LL);
    if ( v5 < 0 )
    {
LABEL_16:
      sub_18000F708(&v16);
      goto LABEL_19;
    }
    v7 = *(_QWORD *)(v16 + 16);
    v13[0] = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = sub_180121C98(v11, &v15);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 440;
LABEL_15:
      sub_18004BD84((int)retaddr, v9, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp", v8);
      sub_18000F708(v13);
      goto LABEL_16;
    }
    if ( v15 )
    {
      v8 = sub_1801217EC(v7, (__int64)L"HP", 0);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = 444;
        goto LABEL_15;
      }
    }
    else
    {
      v8 = sub_1801217EC(v7, (__int64)L"No-HP", 1u);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = 449;
        goto LABEL_15;
      }
    }
    sub_18000F708(v13);
    sub_18000F708(&v16);
    goto LABEL_18;
  }
  sub_18004BD84((int)retaddr, 418, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp", v4);
LABEL_20:
  sub_18000F708((__int64 *)&ppv);
  return (unsigned int)v5;
}
