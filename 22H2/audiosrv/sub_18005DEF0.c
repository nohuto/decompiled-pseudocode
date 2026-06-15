/*
 * XREFs of sub_18005DEF0 @ 0x18005DEF0
 * Callers:
 *     sub_18001D800 @ 0x18001D800 (sub_18001D800.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18005E08C (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_1801219B0 @ 0x1801219B0 (sub_1801219B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18005DEF0(__int64 a1)
{
  HRESULT v2; // edi
  ULONG v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+30h] [rbp-30h]
  PROPVARIANT propvarIn[4]; // [rsp+40h] [rbp-20h] BYREF
  ULONG pulRet; // [rsp+80h] [rbp+20h] BYREF
  __int64 v9; // [rsp+88h] [rbp+28h]

  v9 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  pulRet = 0;
  LOWORD(propvarIn[0]) = 0;
  v5 = xmmword_18015C470;
  v6 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(a1, &v5, propvarIn);
  if ( v2 >= 0 )
  {
    if ( !LOWORD(propvarIn[0]) )
      v2 = -2147023728;
    if ( v2 >= 0 )
    {
      if ( LOWORD(propvarIn[0]) )
        v2 = PropVariantToUInt32(propvarIn, &pulRet);
      else
        v2 = -2147023728;
    }
  }
  PropVariantClear(propvarIn);
  v3 = pulRet;
  if ( v2 == -2147023728 )
    v3 = 10;
  pulRet = v3;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v3;
}
