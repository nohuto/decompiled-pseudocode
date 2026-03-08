/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800D2660
 * Callers:
 *     ?reserve_region@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUConstantBufferRow@CCustomKernelEffect@@_K0@Z @ 0x1800D25A0 (-reserve_region@-$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V-$buffer_impl@UConstant.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@std@@V?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@V?$move_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@0@0V12@@Z @ 0x1800D2750 (--$uninitialized_move@V-$move_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@std@@V-$check.c)
 */

void __fastcall detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  LPVOID v7; // rax
  void *v8; // r8
  void *v9; // rdx
  LPVOID v10; // rbx
  void *v11; // rcx
  bool v12; // zf
  __int64 v13; // rsi
  _QWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF
  char v15[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  if ( (v3 - v4) >> 4 < a2 )
  {
    v5 = (v4 - (_BYTE *)*a1) >> 4;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180181A74LL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 4),
           (v3 - (_BYTE *)*a1) >> 4,
           v5 + a2);
    v7 = operator new(saturated_mul(v6, 0x10uLL));
    v8 = a1[1];
    v9 = *a1;
    v14[0] = v7;
    v14[2] = 0LL;
    v10 = v7;
    v14[1] = v5;
    ((void (__fastcall *)(char *, void *, void *, _QWORD *))std::uninitialized_move<std::move_iterator<CCustomKernelEffect::ConstantBufferRow *>,stdext::checked_array_iterator<CCustomKernelEffect::ConstantBufferRow *>>)(
      v15,
      v9,
      v8,
      v14);
    v11 = *a1;
    v12 = *a1 == a1 + 3;
    *a1 = v10;
    if ( v12 )
      v11 = 0LL;
    operator delete(v11);
    v13 = (__int64)*a1 + 16 * v5;
    a1[2] = (char *)*a1 + 16 * v6;
    a1[1] = (void *)v13;
  }
}
