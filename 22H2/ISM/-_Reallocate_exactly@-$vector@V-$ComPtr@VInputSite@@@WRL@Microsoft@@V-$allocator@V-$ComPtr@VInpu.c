/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1800023C0
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x180016EB0 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18001AB64 (--$_Destroy_range@V-$allocator@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Int.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Reallocate_exactly(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // r8
  char *result; // rax
  size_t v11; // rcx
  void *v12; // rax

  v4 = (__int64)(a1[1] - *a1) >> 3;
  v5 = a2;
  v6 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v6 = -1LL;
  }
  else if ( v6 < 0x1000 )
  {
    if ( v6 )
      v2 = operator new(8 * a2);
    else
      v2 = 0LL;
LABEL_5:
    v7 = (_QWORD *)a1[1];
    v8 = (_QWORD *)*a1;
    v9 = v2;
    if ( (_QWORD *)*a1 == v7 )
      goto LABEL_6;
    goto LABEL_16;
  }
  v11 = v6 + 39;
  if ( v6 + 39 < v6 )
    v11 = -1LL;
  v12 = operator new(v11);
  if ( v12 )
  {
    v2 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v2 - 1) = v12;
    goto LABEL_5;
  }
  _o__invalid_parameter_noinfo_noreturn();
  do
  {
LABEL_16:
    *v9 = 0LL;
    if ( v9 != v8 )
    {
      *v9 = *v8;
      *v8 = 0LL;
    }
    ++v9;
    ++v8;
  }
  while ( v8 != v7 );
LABEL_6:
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
      *a1,
      a1[1],
      v9);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v2;
  a1[1] = &v2[v4];
  result = (char *)&v2[v5];
  a1[2] = &v2[v5];
  return result;
}
