/*
 * XREFs of sub_1801217EC @ 0x1801217EC
 * Callers:
 *     sub_1801216CC @ 0x1801216CC (sub_1801216CC.c)
 *     sub_180121A98 @ 0x180121A98 (sub_180121A98.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180122288 @ 0x180122288 (sub_180122288.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1801217EC(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int16 v3; // r14
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // edi
  int v9; // eax
  __int64 v10; // r8
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+28h]
  LPVOID pv; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v3 = a3;
  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_18004BD84((int)retaddr, 275, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp", v6);
    goto LABEL_13;
  }
  *(_OWORD *)pvar = 0LL;
  v13 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(v16, &unk_18015C4B0, pvar);
  if ( v8 < 0
    || LOWORD(pvar[0]) == 11 && LOWORD(pvar[1]) == v3 - 1
    || (PropVariantClear(pvar),
        LOWORD(pvar[0]) = 11,
        LOWORD(pvar[1]) = v3 - 1,
        v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 48LL))(
               v16,
               &unk_18015C4B0,
               pvar),
        v8 < 0) )
  {
LABEL_12:
    v7 = v8;
    goto LABEL_13;
  }
  pv = 0LL;
  sub_18002A504(&pv, 0LL);
  v9 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 40LL))(a1, &pv);
  v7 = v9;
  if ( v9 >= 0 )
  {
    LOBYTE(v10) = v3;
    sub_180122288(pv, a2, v10);
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_12;
  }
  sub_18004BD84((int)retaddr, 298, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp", v9);
  if ( pv )
    CoTaskMemFree(pv);
LABEL_13:
  sub_18000F708(&v16);
  return v7;
}
