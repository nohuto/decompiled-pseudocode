/*
 * XREFs of sub_18005E238 @ 0x18005E238
 * Callers:
 *     sub_18001D800 @ 0x18001D800 (sub_18001D800.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18005E08C (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_1801219B0 @ 0x1801219B0 (sub_1801219B0.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005E238(__int64 a1, __int64 *a2, _OWORD *a3)
{
  __int64 v4; // rax
  int v5; // ebx
  char v6; // bl
  int v8; // edx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0LL;
  v4 = *a2;
  *(_OWORD *)pvar = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, void *, PROPVARIANT *))(v4 + 40))(a2, &unk_18015C640, pvar);
  if ( v5 < 0 )
  {
    v8 = 91;
  }
  else
  {
    if ( LOWORD(pvar[0]) == 72 )
    {
      v6 = 1;
      *a3 = *(_OWORD *)pvar[1];
    }
    else
    {
      v6 = 0;
    }
    PropVariantClear(pvar);
    if ( v6 )
      return 0LL;
    v5 = -2147024894;
    v8 = 99;
  }
  sub_18004BD84((int)retaddr, v8, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp", v5);
  return (unsigned int)v5;
}
