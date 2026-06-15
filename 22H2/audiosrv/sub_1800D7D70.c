/*
 * XREFs of sub_1800D7D70 @ 0x1800D7D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18005FD7C @ 0x18005FD7C (sub_18005FD7C.c)
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D4B10 @ 0x1800D4B10 (sub_1800D4B10.c)
 *     sub_1800D50A8 @ 0x1800D50A8 (sub_1800D50A8.c)
 */

__int64 __fastcall sub_1800D7D70(__int64 a1, char *a2)
{
  __int64 *v2; // rax
  std::_Ref_count_base *v3; // rax
  std::_Ref_count_base *v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // edi
  std::_Ref_count_base *v9[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-48h]
  _QWORD v12[8]; // [rsp+40h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h]
  LPVOID pv; // [rsp+A0h] [rbp+20h] BYREF

  sub_18005FD7C(&pv, a2, 0xFFFFFFFFFFFFFFFFuLL);
  *(_OWORD *)v9 = 0LL;
  if ( pv )
  {
    v2 = sub_1800D4B10(&v10, &pv);
    sub_1800D50A8(v9, v2);
    if ( v11 )
      sub_180052600(v11);
    if ( pv )
      CoTaskMemFree(pv);
  }
  v3 = v9[0];
  if ( v9[0] && *(_QWORD *)v9[0] )
  {
    v4 = v9[1];
    if ( v9[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v9[1] + 2);
      v4 = v9[1];
      v3 = v9[0];
    }
    v12[1] = v3;
    v12[0] = off_18014A1D8;
    v12[7] = v12;
    v12[2] = v4;
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E678 + 128LL))(qword_18019E678);
    v6 = sub_1800670EC(v5, (__int64)v12);
    v7 = v6;
    if ( v6 >= 0 )
      v7 = 0;
    else
      sub_18004BD84((int)retaddr, 2665, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v6);
  }
  else
  {
    v7 = -2147024882;
    sub_18004BD84((int)retaddr, 2659, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147024882);
    v4 = v9[1];
  }
  if ( v4 )
    sub_180052600(v4);
  return v7;
}
