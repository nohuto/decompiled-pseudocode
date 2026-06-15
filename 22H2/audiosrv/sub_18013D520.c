/*
 * XREFs of sub_18013D520 @ 0x18013D520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013D350 @ 0x18013D350 (sub_18013D350.c)
 *     sub_18013D630 @ 0x18013D630 (sub_18013D630.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18013D520(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  LPVOID pv; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+38h] [rbp-8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  pv = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(a1 + 40) + 64LL))(
         *(_QWORD *)(a1 + 40),
         a2,
         a3,
         &v12);
  if ( v8 < 0 || (v8 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, &pv), v8 < 0) )
  {
    v6 = v8;
  }
  else
  {
    v9 = sub_18013D630(a1, pv, 0LL, &v13);
    if ( v9 >= 0 )
      sub_18013D350(&v13, a4);
    else
      v6 = v9;
    v7 = v13;
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
