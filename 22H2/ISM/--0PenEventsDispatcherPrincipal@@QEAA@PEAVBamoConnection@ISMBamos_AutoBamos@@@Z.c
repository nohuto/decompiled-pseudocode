/*
 * XREFs of ??0PenEventsDispatcherPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18002FBDC
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003052C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@1@AEBV?$allocator@PEAUISystemContextObserver@@@1@@Z @ 0x180025310 (--0-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextObser.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180027E10 (-IsEdition@@YA_N_K@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@1@@Z @ 0x18002AB88 (--0-$_Hash@V-$_Umap_traits@IV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@@Z @ 0x18002CE0C (-Initialize@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSessio.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18003017C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAA@PEBD@Z @ 0x180047EF8 (--0-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAA@PEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180079630 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVPenEventsDispatcherPrincipal@@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIHotKeyClient@@@WRL@Microsoft@@@012@$$QEAPEAVPenEventsDispatcherPrincipal@@$$QEA_N@Z @ 0x18013254C (--$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVPenEventsDispatcherPrincipa_ea_18013254C.c)
 */

// Hidden C++ exception states: #wind=8
PenEventsDispatcherPrincipal *__fastcall PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal(
        PenEventsDispatcherPrincipal *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  int v3; // eax
  __int64 v4; // r8
  const char *v5; // r9
  int v6; // eax
  unsigned int v7; // esi
  unsigned __int16 *v8; // r14
  int v9; // eax
  int v11; // [rsp+20h] [rbp-50h]
  _QWORD v12[8]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int pvParam; // [rsp+B0h] [rbp+40h] BYREF
  int pvParam_4; // [rsp+B4h] [rbp+44h]
  PenEventsDispatcherPrincipal *v16; // [rsp+B8h] [rbp+48h] BYREF

  *(_QWORD *)this = &BamoPenEventsDispatcherPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &PenEventsDispatcherPrincipal::`vftable'{for `IPenEventsDispatcherPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((PenEventsDispatcherPrincipal *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoPenEventsDispatcherPrincipalImpl::`vftable';
  *(_QWORD *)this = &PenEventsDispatcherPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &PenEventsDispatcherPrincipal::`vftable'{for `IPenEventsDispatcherPrincipal'};
  *((_QWORD *)this + 7) = &PenEventsDispatcherPrincipal::`vftable';
  pvParam_4 = ((unsigned __int64)this + 64) >> 32;
  pvParam = 0;
  std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>(
    (__int64)this + 64,
    &pvParam);
  pvParam_4 = ((unsigned __int64)this + 128) >> 32;
  pvParam = 0;
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>(
    (__int64)this + 128,
    &pvParam);
  *((_BYTE *)this + 196) = 1;
  *((_DWORD *)this + 50) = 1;
  *((_DWORD *)this + 51) = 1;
  *((_QWORD *)this + 26) = 0LL;
  KernelInputConnection<_MIT_PEN_EVENT_MESSAGE>::KernelInputConnection<_MIT_PEN_EVENT_MESSAGE>((char *)this + 216);
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  if ( IsEdition(8778LL) )
  {
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 208);
    v3 = CoreUICreate((char *)this + 208);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x62,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        (const char *)(unsigned int)v3,
        v11);
      JUMPOUT(0x18002FE00LL);
    }
    v12[0] = off_1801B7198;
    v12[1] = this;
    v12[7] = v12;
    KernelInputConnection<_MIT_PEN_EVENT_MESSAGE>::Initialize(
      (_QWORD *)this + 27,
      (_QWORD *)this + 26,
      v4,
      (__int64)v12);
    pvParam = 0;
    if ( SystemParametersInfoW(0x1052u, 0, &pvParam, 0) )
      *((_BYTE *)this + 196) = pvParam != 1;
    else
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x6E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        v5);
  }
  else
  {
    LOBYTE(pvParam) = 1;
    v16 = this;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<HotKeyClient,IHotKeyClient,PenEventsDispatcherPrincipal *,bool>(
           (char *)this + 352,
           &v16,
           &pvParam);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x78,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        (const char *)(unsigned int)v6,
        v11);
    v7 = 0;
    v8 = (unsigned __int16 *)&PenEventsDispatcherPrincipal::s_hotkeyList;
    do
    {
      LOBYTE(v11) = 0;
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 44) + 24LL))(
             *((_QWORD *)this + 44),
             v7,
             *v8,
             *((unsigned __int8 *)v8 + 2));
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x80,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\pene"
                        "ventsdispatcherprincipal.cpp",
          (const char *)(unsigned int)v9,
          v11);
      ++v7;
      v8 += 2;
    }
    while ( v7 <= 4 );
  }
  return this;
}
