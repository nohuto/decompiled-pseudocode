/*
 * XREFs of sub_180057384 @ 0x180057384
 * Callers:
 *     sub_180056D5C @ 0x180056D5C (sub_180056D5C.c)
 *     sub_180056F44 @ 0x180056F44 (sub_180056F44.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180057384(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v8 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v7 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 24) + 32LL))(
           *(_QWORD *)(a1 + 24),
           2LL,
           &v8);
    if ( v4 < 0
      || (v4 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
                 v8,
                 &unk_18015AF70,
                 pvar),
          v4 < 0) )
    {
      v3 = v4;
    }
    else if ( LOWORD(pvar[0]) == 72 )
    {
      *a2 = 1;
    }
  }
  else
  {
    v3 = -2147467261;
  }
  PropVariantClear(pvar);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v3;
}
