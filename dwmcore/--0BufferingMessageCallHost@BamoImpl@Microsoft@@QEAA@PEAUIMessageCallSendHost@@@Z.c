/*
 * XREFs of ??0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z @ 0x1801B57EC
 * Callers:
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1801B694C (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800B1E44 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

Microsoft::BamoImpl::BufferingMessageCallHost *__fastcall Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        struct IMessageCallSendHost *a2)
{
  SIZE_T size_of; // rax
  __int64 v5; // rax
  __int64 v6; // rdi

  *(_QWORD *)this = &Microsoft::BamoImpl::BufferingMessageCallHost::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = &Microsoft::BamoImpl::BufferingMessageCallHost::`vftable'{for `IMessageCallSendHost'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *((_QWORD *)this + 4) = v5;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 72) = 0;
  v6 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return this;
}
