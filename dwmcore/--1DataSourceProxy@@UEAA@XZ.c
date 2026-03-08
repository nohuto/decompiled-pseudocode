/*
 * XREFs of ??1DataSourceProxy@@UEAA@XZ @ 0x1801DF494
 * Callers:
 *     ??_GDataSourceProxy@@UEAAPEAXI@Z @ 0x1801DF670 (--_GDataSourceProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@PEAVCBaseExpression@@PEAX@std@@@std@@@?$_List_node@PEAVCBaseExpression@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@PEAVCBaseExpression@@PEAX@std@@@1@PEAU01@@Z @ 0x1801DF1D8 (--$_Free_non_head@V-$allocator@U-$_List_node@PEAVCBaseExpression@@PEAX@std@@@std@@@-$_List_node@.c)
 *     ??1?$com_ptr_t@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801DF464 (--1-$com_ptr_t@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_p.c)
 */

void __fastcall DataSourceProxy::~DataSourceProxy(DataSourceProxy *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rbx
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &DataSourceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataSourceProxy::`vftable'{for `IDataSourceProxy'};
  v2 = (_QWORD *)*((_QWORD *)this + 26);
  for ( i = (_QWORD *)*((_QWORD *)this + 25); i != v2; ++i )
  {
    v4 = *(_QWORD *)(*i + 16LL);
    if ( v4 )
    {
      *(_QWORD *)(v4 + 64) = 0LL;
      *(_QWORD *)(v4 + 72) = 0LL;
      *(_BYTE *)(v4 + 80) &= ~1u;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
  }
  v5 = (void *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 26) = v5;
  *((_QWORD *)this + 24) = 0LL;
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 27) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 160);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 128);
  std::_Deallocate<16,0>(
    *((void **)this + 11),
    (*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  std::_List_node<CBaseExpression *,void *>::_Free_non_head<std::allocator<std::_List_node<CBaseExpression *,void *>>>(
    v6,
    *((_QWORD ***)this + 9));
  std::_Deallocate<16,0>(*((void **)this + 9), 0x18uLL);
  wil::com_ptr_t<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,wil::err_returncode_policy>((__int64 *)this + 7);
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
}
