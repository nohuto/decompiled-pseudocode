/*
 * XREFs of ?AddNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x1801595C0
 * Callers:
 *     ?AddNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x180159880 (-AddNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18001AB64 (--$_Destroy_range@V-$allocator@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Int.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$AsWeak@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@YAJPEAUISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@PEAVWeakRef@01@@Z @ 0x1800D4ADC (--$AsWeak@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Micro.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800D61D8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$_Emplace_reallocate@VWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180151A70 (--$_Emplace_reallocate@VWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VW.c)
 *     ??$emplace@AEBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBUSPATIAL_NODE_ID@@$$QEAV?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@1@@Z @ 0x180155F70 (--$emplace@AEBUSPATIAL_NODE_ID@@V-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Micr.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016057C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?NodePropertyCallbackRegistered_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@PEBX@Z @ 0x180160A90 (-NodePropertyCallbackRegistered_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167F04 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Holographic::DynamicNodeSourceBase::AddNodePropertiesUpdatedCallback(
        Windows::Internal::Holographic::DynamicNodeSourceBase *this,
        const struct SPATIAL_NODE_ID *a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback *a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 *v8; // rax
  int v9; // eax
  void *v10; // rbx
  __int64 v11; // rcx
  __int64 *v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // cl
  unsigned int v16; // ebx
  const char *v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  HolographicDriverClientTrace *v20; // rcx
  __int64 v21; // rcx
  int v22[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  _QWORD *v26; // [rsp+78h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+20h] BYREF

  v6 = *(_QWORD *)a2 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v6 = *((_QWORD *)a2 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v6 )
  {
    if ( a3 )
    {
      v26 = 0LL;
      *(_QWORD *)v22 = &v26;
      v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)v22);
      v9 = Microsoft::WRL::AsWeak<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>(
             (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3,
             v8);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          236LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      AcquireSRWLockExclusive((PSRWLOCK)this + 3);
      SRWLock = (PSRWLOCK)((char *)this + 24);
      v23 = 0LL;
      v24 = 0LL;
      try
      {
        std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::vector<Microsoft::WRL::WeakRef>,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,std::vector<Microsoft::WRL::WeakRef>>>,0>>::emplace<SPATIAL_NODE_ID const &,std::vector<Microsoft::WRL::WeakRef>>(
          (__int64 *)this + 4,
          (__int64)v22,
          a2,
          &v23);
        v10 = (void *)v23;
        if ( (_QWORD)v23 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
            (__int64 *)v23,
            *((__int64 **)&v23 + 1));
          std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)((v24 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        v11 = *(_QWORD *)v22 + 48LL;
        v12 = *(__int64 **)(*(_QWORD *)v22 + 56LL);
        if ( *(__int64 **)(*(_QWORD *)v22 + 64LL) == v12 )
        {
          std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef>(
            (__int64 **)v11,
            v12,
            (__int64 *)&v26);
        }
        else
        {
          *v12 = 0LL;
          if ( v12 != (__int64 *)&v26 )
          {
            *v12 = (__int64)v26;
            v26 = 0LL;
          }
          *(_QWORD *)(v11 + 8) += 8LL;
        }
        v13 = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::DynamicNodeSourceBase *, PSRWLOCK *, const struct SPATIAL_NODE_ID *))(*(_QWORD *)this + 64LL))(
                this,
                &SRWLock,
                a2);
        v16 = v13;
        if ( v13 >= 0 )
        {
          if ( HolographicDriverClientTrace::IsEnabled(v15, v14) )
          {
            wil::details::static_lazy<HolographicDriverClientTrace>::get(
              v19,
              _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
            HolographicDriverClientTrace::NodePropertyCallbackRegistered_(v20, (const struct _GUID *)this + 3, a2, a3);
          }
          if ( SRWLock )
            ReleaseSRWLockExclusive(SRWLock);
          v21 = (__int64)v26;
          if ( v26 )
          {
            v26 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF3,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
            (const char *)(unsigned int)v13);
          if ( SRWLock )
            ReleaseSRWLockExclusive(SRWLock);
          v18 = v26;
          if ( v26 )
          {
            v26 = 0LL;
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*v18 + 16LL))(v18, *v18);
          }
          result = v16;
        }
      }
      catch ( ... )
      {
        LODWORD(v26) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0xF8,
                         (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                         v17);
        return (unsigned int)v26;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE9,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}
