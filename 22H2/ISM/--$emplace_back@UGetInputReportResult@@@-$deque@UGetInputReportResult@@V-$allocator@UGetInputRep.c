/*
 * XREFs of ??$emplace_back@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAAAEAUGetInputReportResult@@$$QEAU2@@Z @ 0x18009BA88
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009BD60 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180012DD0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Growmap@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX_K@Z @ 0x18009C294 (-_Growmap@-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@AEAAX_K.c)
 */

__int64 __fastcall std::deque<GetInputReportResult>::emplace_back<GetInputReportResult>(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  size_t size_of; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 ***v11; // rax
  __int64 ****v12; // rcx
  __int64 **v13; // rax
  __int64 *v14; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 <= *(_QWORD *)(a1 + 32) + 1LL )
  {
    std::deque<GetInputReportResult>::_Growmap(a1);
    v4 = *(_QWORD *)(a1 + 16);
  }
  v5 = 0LL;
  *(_QWORD *)(a1 + 24) &= v4 - 1;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24));
  if ( !*(_QWORD *)(v6 + 8 * v7) )
  {
    size_of = std::_Get_size_of_n<24>(1uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v6 = *(_QWORD *)(a1 + 8);
  }
  v9 = *(_QWORD *)(v6 + 8 * v7);
  *(_DWORD *)v9 = *(_DWORD *)a2;
  v10 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(v9 + 8) = v10;
  *(_DWORD *)(v9 + 16) = *(_DWORD *)(a2 + 16);
  v11 = 0LL;
  ++*(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)a1 )
  {
    v12 = **(__int64 ******)a1;
    if ( v12 )
      v11 = *v12;
  }
  if ( v11 )
  {
    v13 = *v11;
    if ( v13 )
    {
      v14 = *v13;
      if ( v14 )
        v5 = *v14;
    }
  }
  return *(_QWORD *)(*(_QWORD *)(v5 + 8)
                   + 8 * ((*(_QWORD *)(a1 + 24) + *(_QWORD *)(a1 + 32) - 1LL) & (*(_QWORD *)(v5 + 16) - 1LL)));
}
