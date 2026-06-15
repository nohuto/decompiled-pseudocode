/*
 * XREFs of sub_18005A4BC @ 0x18005A4BC
 * Callers:
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_0 @ 0x180059000 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_0.c)
 * Callees:
 *     sub_18005A578 @ 0x18005A578 (sub_18005A578.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005A4BC(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  int v5; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+48h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)pvar = 0LL;
  v8 = 0LL;
  v9 = xmmword_18016D168;
  v10 = 200 * a2 + 2;
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v3 + 40LL))(v3, &v9, pvar);
  if ( v5 >= 0 )
  {
    if ( LOWORD(pvar[0]) == 65 )
      v5 = sub_18005A578(LODWORD(pvar[1]), v8, a3);
    else
      v5 = -2147023728;
  }
  PropVariantClear(pvar);
  return (unsigned int)v5;
}
