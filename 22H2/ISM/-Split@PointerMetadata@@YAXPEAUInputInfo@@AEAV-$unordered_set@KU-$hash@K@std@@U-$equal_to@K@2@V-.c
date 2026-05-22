/*
 * XREFs of ?Split@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x1801A4E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180023554 (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180046380 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 */

__int64 __fastcall PointerMetadata::Split(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  int v7; // ebp
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _OWORD *v10; // rdx
  _OWORD *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // r9
  _OWORD *v14; // r8
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  int v24; // ecx
  __int64 result; // rax
  int v26; // ecx
  _QWORD v27[7]; // [rsp+20h] [rbp-38h] BYREF
  int v28; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a3 + 212) = 0;
  v3 = 0LL;
  v7 = 360;
  if ( !*(_DWORD *)(a1 + 212) )
    goto LABEL_11;
  do
  {
    v28 = *(_DWORD *)(144 * v3 + a1 + 220);
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      a2,
      v27,
      (const unsigned __int8 *)&v28);
    v8 = (_QWORD *)v27[0];
    v9 = 0LL;
    while ( v8 != (_QWORD *)v27[1] )
    {
      v8 = (_QWORD *)*v8;
      ++v9;
    }
    if ( v9 )
    {
      v10 = (_OWORD *)(144LL * *(unsigned int *)(a3 + 212) + a3 + 216);
      v11 = (_OWORD *)(144 * v3 + a1 + 216);
      v12 = v3;
      *v10 = *v11;
      v10[1] = v11[1];
      v10[2] = v11[2];
      v10[3] = v11[3];
      v10[4] = v11[4];
      v10[5] = v11[5];
      v10[6] = v11[6];
      v10[7] = v11[7];
      v10[8] = v11[8];
      ++*(_DWORD *)(a3 + 212);
      if ( (unsigned int)v3 < --*(_DWORD *)(a1 + 212) )
      {
        do
        {
          v13 = v12 + 1;
          v14 = (_OWORD *)(144LL * v12 + a1 + 216);
          v15 = (_OWORD *)(144 * v13 + a1 + 216);
          ++v12;
          v16 = v15[1];
          *v14 = *v15;
          v17 = v15[2];
          v14[1] = v16;
          v18 = v15[3];
          v14[2] = v17;
          v19 = v15[4];
          v14[3] = v18;
          v20 = v15[5];
          v14[4] = v19;
          v21 = v15[6];
          v14[5] = v20;
          v22 = v15[7];
          v14[6] = v21;
          v23 = v15[8];
          v14[7] = v22;
          v14[8] = v23;
        }
        while ( (unsigned int)v13 < *(_DWORD *)(a1 + 212) );
      }
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < *(_DWORD *)(a1 + 212) );
  v24 = *(_DWORD *)(a3 + 212);
  if ( v24 )
    result = PointerInputInfo::GetSizeForPointerCount(v24);
  else
LABEL_11:
    result = 360LL;
  *(_DWORD *)(a3 + 24) = result;
  v26 = *(_DWORD *)(a1 + 212);
  if ( v26 )
  {
    result = PointerInputInfo::GetSizeForPointerCount(v26);
    v7 = result;
  }
  *(_DWORD *)(a1 + 24) = v7;
  return result;
}
