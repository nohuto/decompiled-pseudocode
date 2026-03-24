/*
 * XREFs of ??1DataSourceProxy@@UEAA@XZ @ 0x18017FE64
 * Callers:
 *     ??_GDataSourceProxy@@UEAAPEAXI@Z @ 0x18017FFA0 (--_GDataSourceProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800DA6EC (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DataSourceProxy::~DataSourceProxy(DataSourceProxy *this)
{
  __int64 *v2; // rsi
  __int64 *i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  void *v6; // rcx
  _QWORD **v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  void (__fastcall ***v10)(_QWORD); // rcx

  *(_QWORD *)this = &DataSourceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataSourceProxy::`vftable'{for `IDataSourceProxy'};
  v2 = (__int64 *)*((_QWORD *)this + 26);
  for ( i = (__int64 *)*((_QWORD *)this + 25); i != v2; ++i )
  {
    v4 = *i;
    v5 = *(_QWORD *)(*i + 16);
    if ( v5 )
    {
      *(_QWORD *)(v5 + 56) = 0LL;
      *(_QWORD *)(v5 + 64) = 0LL;
      *(_BYTE *)(v5 + 72) &= ~1u;
      v4 = *i;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = (void *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 26) = v6;
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 27) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 160);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 128);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)this + 88);
  v7 = (_QWORD **)*((_QWORD *)this + 9);
  *v7[1] = 0LL;
  v8 = *v7;
  if ( v8 )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      std::_Deallocate<16,0>(v8, 0x18uLL);
      v8 = v9;
    }
    while ( v9 );
  }
  std::_Deallocate<16,0>(*((void **)this + 9), 0x18uLL);
  v10 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  if ( v10 )
    (**v10)(v10);
}
