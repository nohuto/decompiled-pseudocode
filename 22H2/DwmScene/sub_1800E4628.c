/*
 * XREFs of sub_1800E4628 @ 0x1800E4628
 * Callers:
 *     sub_180070C1C @ 0x180070C1C (sub_180070C1C.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180026B1C @ 0x180026B1C (sub_180026B1C.c)
 *     sub_1800A30C8 @ 0x1800A30C8 (sub_1800A30C8.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800E4628(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rdx
  __int64 v5[7]; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+68h] [rbp-8h]

  v5[2] = 0LL;
  v5[3] = 0LL;
  sub_18001CDF8(v5, (__int64)&qword_18020CBD8);
  sub_1800A30C8((__int64)a1, v5);
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  v5[0] = (__int64)&std::_Func_impl_no_alloc<_lambda_39709042d9feebb009db8fd78baed610_,void,Spectre::Engine::LightConstants *>::`vftable';
  v6 = v5;
  v2 = o__aligned_malloc(592LL, 16LL);
  a1[21] = 0LL;
  sub_180026B1C((__int64)(a1 + 14), (__int64)v5);
  a1[22] = v2;
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(__int64 *, __int64 *))(*v6 + 32))(v6, v3);
  }
  return a1;
}
