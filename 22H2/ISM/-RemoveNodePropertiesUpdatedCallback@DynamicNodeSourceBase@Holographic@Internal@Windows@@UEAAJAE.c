/*
 * XREFs of ?RemoveNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x1801637E0
 * Callers:
 *     ?RemoveNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x180163A20 (-RemoveNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1800796B8 (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     ??$AsWeak@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@YAJPEAUISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@PEAVWeakRef@01@@Z @ 0x1800D4ADC (--$AsWeak@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Micro.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800D61D8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016057C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?NodePropertyCallbackUnregistered_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@PEBX@Z @ 0x180160B28 (-NodePropertyCallbackUnregistered_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NOD.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x180167C90 (-find@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidL.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167F04 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Holographic::DynamicNodeSourceBase::RemoveNodePropertiesUpdatedCallback(
        Windows::Internal::Holographic::DynamicNodeSourceBase *this,
        const struct SPATIAL_NODE_ID *a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback *a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 *v8; // rax
  int v9; // eax
  RTL_SRWLOCK *v10; // rbx
  _QWORD *i; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  HolographicDriverClientTrace *v14; // rcx
  __int64 v15; // rcx
  const char *v16; // r9
  int v17[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v18[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v21; // [rsp+68h] [rbp+20h] BYREF

  v6 = *(_QWORD *)a2 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v6 = *((_QWORD *)a2 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v6 )
  {
    if ( a3 )
    {
      *(_QWORD *)v17 = a3;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v17);
      v20 = 0LL;
      v18[0] = &v20;
      v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v18);
      v9 = Microsoft::WRL::AsWeak<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>(
             (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3,
             v8);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          259LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      v10 = (RTL_SRWLOCK *)((char *)this + 24);
      AcquireSRWLockExclusive((PSRWLOCK)this + 3);
      v21 = (RTL_SRWLOCK *)((char *)this + 24);
      std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::find(
        (char *)this + 32,
        v18,
        a2);
      try
      {
        if ( v18[0] != *((__int64 **)this + 4) )
        {
          for ( i = (_QWORD *)v18[0][6]; i != *((_QWORD **)v18[0] + 7) && *i != v20; ++i )
            ;
          if ( i != *((_QWORD **)v18[0] + 7) )
          {
            std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase((__int64)(v18[0] + 6), v18, (__int64)i);
            (*(void (__fastcall **)(Windows::Internal::Holographic::DynamicNodeSourceBase *, RTL_SRWLOCK **, const struct SPATIAL_NODE_ID *))(*(_QWORD *)this + 72LL))(
              this,
              &v21,
              a2);
            if ( HolographicDriverClientTrace::IsEnabled(v12) )
            {
              wil::details::static_lazy<HolographicDriverClientTrace>::get(
                v13,
                _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
              HolographicDriverClientTrace::NodePropertyCallbackUnregistered_(
                v14,
                (const struct _GUID *)this + 3,
                a2,
                (__int64)a3);
            }
            v10 = v21;
          }
        }
        if ( v10 )
          ReleaseSRWLockExclusive(v10);
        v15 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v17);
        result = 0LL;
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x11B,
                               (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                               v16);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFF,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}
