/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800BA540
 * Callers:
 *     ??$insert_unchecked@AEBQEAVICompositionSurfaceInfoListener@@@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVICompositionSurfaceInfoListener@@@1@V?$basic_iterator@QEAVICompositionSurfaceInfoListener@@@1@AEBQEAVICompositionSurfaceInfoListener@@@Z @ 0x1800BA72C (--$insert_unchecked@AEBQEAVICompositionSurfaceInfoListener@@@-$vector_facade@PEAVICompositionSur.c)
 *     ??$insert_unchecked@AEBQEAVCVisualTree@@@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCVisualTree@@@1@V?$basic_iterator@QEAVCVisualTree@@@1@AEBQEAVCVisualTree@@@Z @ 0x1800C7628 (--$insert_unchecked@AEBQEAVCVisualTree@@@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVi.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVIDeviceResource@@@std@@V?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@V?$move_iterator@PEAPEAVIDeviceResource@@@0@0V12@@Z @ 0x180012054 (--$uninitialized_copy@V-$move_iterator@PEAPEAVIDeviceResource@@@std@@V-$checked_array_iterator@P.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  const void *v8; // rax
  __int64 v9; // r8
  const void *v10; // rdx
  const void *v11; // rbx
  void *v12; // rcx
  bool v13; // zf
  const void *v14; // rcx
  __int64 v15[4]; // [rsp+20h] [rbp-48h] BYREF
  char v16[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  result = (v3 - v4) >> 3;
  if ( result < a2 )
  {
    v6 = (v4 - (_BYTE *)*a1) >> 3;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x18017A17ELL);
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 3),
           (v3 - (_BYTE *)*a1) >> 3,
           v6 + a2);
    v8 = operator new(saturated_mul(v7, 8uLL));
    v9 = (__int64)a1[1];
    v10 = *a1;
    v15[0] = (__int64)v8;
    v15[2] = 0LL;
    v11 = v8;
    v15[1] = v6;
    std::uninitialized_copy<std::move_iterator<IDeviceResource * *>,stdext::checked_array_iterator<IDeviceResource * *>>(
      (__int64)v16,
      v10,
      v9,
      v15);
    v12 = (void *)*a1;
    v13 = *a1 == a1 + 3;
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
    v14 = *a1;
    a1[1] = (char *)*a1 + 8 * v6;
    result = (unsigned __int64)v14 + 8 * v7;
    a1[2] = (const void *)result;
  }
  return result;
}
