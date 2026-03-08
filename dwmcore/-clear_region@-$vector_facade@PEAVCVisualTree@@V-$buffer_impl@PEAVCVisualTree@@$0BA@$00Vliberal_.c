/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C74A0
 * Callers:
 *     ?RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z @ 0x1800C7434 (-RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVIDeviceResource@@@std@@V?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@V?$move_iterator@PEAPEAVIDeviceResource@@@0@0V12@@Z @ 0x180012054 (--$uninitialized_copy@V-$move_iterator@PEAPEAVIDeviceResource@@@std@@V-$checked_array_iterator@P.c)
 */

__int64 __fastcall detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r11
  __int64 result; // rax
  __int64 v11[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v6 = a2;
  v7 = (a1[1] - *a1) >> 3;
  v8 = a2 + a3;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_11;
  }
  v9 = v3 + 8 * v7;
  if ( a2 + a3 != v7 )
  {
    if ( !a2 )
    {
LABEL_7:
      v11[1] = v7;
      v11[2] = v6;
      v11[0] = v3;
      result = std::uninitialized_copy<std::move_iterator<IDeviceResource * *>,stdext::checked_array_iterator<IDeviceResource * *>>(
                 (__int64)v12,
                 (const void *)(v3 + 8 * v8),
                 v9,
                 v11);
      goto LABEL_8;
    }
    if ( !v3 )
LABEL_9:
      _invalid_parameter_noinfo_noreturn();
    if ( a2 >= 0 )
    {
      if ( v7 >= a2 )
        goto LABEL_7;
      goto LABEL_9;
    }
LABEL_11:
    if ( !v6 )
      goto LABEL_7;
    goto LABEL_9;
  }
LABEL_8:
  a1[1] += -8 * a3;
  return result;
}
