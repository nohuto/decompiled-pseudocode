/*
 * XREFs of ?GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180228130
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@$0A@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x18021D880 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAX_K@Z @ 0x18021E3F0 (-_Clear_and_reserve_geometric@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@.c)
 */

__int64 __fastcall CEffectBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 *a3)
{
  char *v3; // rax
  unsigned int v4; // r15d
  __int64 v5; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  void *v12; // rdi
  size_t v13; // r14
  unsigned __int64 v14; // rdx
  char *v15; // rbx
  void *Src[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h]
  __int128 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h]
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF

  v3 = (char *)*a3;
  v4 = 0;
  v18 = 0LL;
  v5 = 0LL;
  a3[1] = (__int64)v3;
  for ( *(_OWORD *)Src = 0LL; (unsigned int)v5 < *(_DWORD *)(a1 + 144); v5 = (unsigned int)(v5 + 1) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v5);
    if ( v9 )
    {
      v20 = 0LL;
      v19 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v9 + 272LL))(v9, a2, &v19);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x17Du, 0LL);
        if ( (_QWORD)v19 )
          std::_Deallocate<16,0>((void *)v19, 8 * ((v20 - (__int64)v19) >> 3));
LABEL_13:
        v12 = Src[0];
        goto LABEL_14;
      }
      std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
        Src,
        &v21,
        (_BYTE *)Src[1],
        (const void *)v19,
        *((__int64 *)&v19 + 1));
      if ( (_QWORD)v19 )
        std::_Deallocate<16,0>((void *)v19, 8 * ((v20 - (__int64)v19) >> 3));
    }
  }
  if ( a3 == (__int64 *)Src )
    goto LABEL_13;
  v12 = Src[0];
  v13 = (char *)Src[1] - (char *)Src[0];
  v14 = 0xCCCCCCCCCCCCCCCDuLL * (((char *)Src[1] - (char *)Src[0]) >> 3);
  if ( v14 > 0xCCCCCCCCCCCCCCCDuLL * ((a3[2] - *a3) >> 3) )
    std::vector<CContent::LayoutData>::_Clear_and_reserve_geometric(a3, v14);
  v15 = (char *)*a3;
  memmove_0((void *)*a3, v12, v13);
  a3[1] = (__int64)&v15[v13];
LABEL_14:
  if ( v12 )
    std::_Deallocate<16,0>(v12, 8 * ((v18 - (__int64)v12) >> 3));
  return v4;
}
