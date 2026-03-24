/*
 * XREFs of ?GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801BFBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$_Assign_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@0Uforward_iterator_tag@1@@Z @ 0x1801B723C (--$_Assign_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDa.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@X@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x1801B74F0 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 */

__int64 __fastcall CEffectBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, char **a3)
{
  char *v3; // rax
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  void *v12; // rbx
  __int128 i; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h]
  __int128 v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+58h] [rbp-8h]
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF

  v3 = *a3;
  v4 = 0;
  v15 = 0LL;
  v5 = 0LL;
  a3[1] = v3;
  for ( i = 0LL; (unsigned int)v5 < *(_DWORD *)(a1 + 136); v5 = (unsigned int)(v5 + 1) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8 * v5);
    if ( v9 )
    {
      v17 = 0LL;
      v16 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v9 + 280LL))(v9, a2, &v16);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x151u, 0LL);
        if ( (_QWORD)v16 )
          std::_Deallocate<16,0>((void *)v16, 40 * ((v17 - (__int64)v16) / 40));
LABEL_11:
        v12 = (void *)i;
        goto LABEL_12;
      }
      std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,void>(
        &i,
        &v18,
        *((char **)&i + 1),
        (const void *)v16,
        *((__int64 *)&v16 + 1));
      if ( (_QWORD)v16 )
        std::_Deallocate<16,0>((void *)v16, 40 * ((v17 - (__int64)v16) / 40));
    }
  }
  if ( a3 == (char **)&i )
    goto LABEL_11;
  v12 = (void *)i;
  std::vector<CContent::LayoutData>::_Assign_range<CContent::LayoutData *>(a3, (const void *)i, *((__int64 *)&i + 1));
LABEL_12:
  if ( v12 )
    std::_Deallocate<16,0>(v12, 40 * ((v15 - (__int64)v12) / 40));
  return v4;
}
