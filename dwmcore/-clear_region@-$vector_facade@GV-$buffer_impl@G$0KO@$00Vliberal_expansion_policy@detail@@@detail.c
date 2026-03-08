/*
 * XREFs of ?clear_region@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801F7FBC
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800947C0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18009598C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800B3950 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801F6F20 (--$move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$checked_a.c)
 */

void __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v6 = a2;
  v7 = (a1[1] - *a1) >> 1;
  v8 = a2 + a3;
  v9 = a2 + a3 == v7;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  if ( !v9 )
  {
    if ( v6 && (!v3 || v6 < 0 || v7 < v6) )
      _invalid_parameter_noinfo_noreturn();
    v10[1] = v7;
    v10[2] = v6;
    v10[0] = v3;
    std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
      (__int64)v11,
      (const void *)(v3 + 2 * v8),
      v3 + 2 * v7,
      v10);
  }
  a1[1] += -2 * a3;
}
