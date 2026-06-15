/*
 * XREFs of sub_18013DA8C @ 0x18013DA8C
 * Callers:
 *     sub_18013DA30 @ 0x18013DA30 (sub_18013DA30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013D630 @ 0x18013D630 (sub_18013D630.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18013DA8C(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0;
  v12[0] = 0LL;
  v8 = sub_18013D630(a1, a4, 0LL, v12);
  v9 = v12[0];
  if ( v8 >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    if ( v10 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, a2, a3, v12[0]);
  }
  else
  {
    v7 = v8;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v7;
}
