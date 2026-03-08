/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x1801C82F0
 * Callers:
 *     ??$emplace_back@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?A_TXZ @ 0x1801C85A0 (--$emplace_back@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWet.c)
 * Callees:
 *     ??$_Get_size_of_n@$0HI@@std@@YA_K_K@Z @ 0x180007524 (--$_Get_size_of_n@$0HI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ??$_Uninitialized_move@PEAUVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x1801C84DC (--$_Uninitialized_move@PEAUVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWetStr.c)
 *     ?_Change_array@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAXQEAUVailSuperWetStroke@CSuperWetInkManager@@_K1@Z @ 0x1801CA1C4 (-_Change_array@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWetStrok.c)
 */

__int64 __fastcall std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Emplace_reallocate<>(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  SIZE_T size_of; // rax
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx

  v3 = 0x222222222222222LL;
  v5 = (a2 - *a1) / 120;
  v6 = 0xEEEEEEEEEEEEEEEFuLL * ((a1[1] - *a1) >> 3);
  if ( v6 == 0x222222222222222LL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = 0xEEEEEEEEEEEEEEEFuLL * ((a1[2] - *a1) >> 3);
  v9 = v8 >> 1;
  if ( v8 <= 0x222222222222222LL - (v8 >> 1) )
  {
    v3 = v9 + v8;
    if ( v9 + v8 < v7 )
      v3 = v7;
  }
  size_of = std::_Get_size_of_n<120>(v3);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11 + 120 * v5;
  memset_0((void *)v12, 0, 0x78uLL);
  *(_QWORD *)(v12 + 24) = -1LL;
  *(_QWORD *)(v12 + 88) = 0LL;
  v13 = v11;
  *(_QWORD *)(v12 + 96) = 0LL;
  *(_QWORD *)(v12 + 104) = 0LL;
  *(_BYTE *)(v12 + 112) = 0;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<CSuperWetInkManager::VailSuperWetStroke *>(v15, a2, v11);
    v14 = a1[1];
    v13 = v12 + 120;
    v15 = a2;
  }
  std::_Uninitialized_move<CSuperWetInkManager::VailSuperWetStroke *>(v15, v14, v13);
  std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Change_array(a1, v11, v7, v3);
  return v12;
}
