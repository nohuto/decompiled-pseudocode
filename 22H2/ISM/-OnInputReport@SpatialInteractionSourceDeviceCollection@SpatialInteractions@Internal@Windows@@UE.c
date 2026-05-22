/*
 * XREFs of ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D17C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800D0174 (-GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?InputReportIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKPEB_W@Z @ 0x1800D04A4 (-InputReportIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKPEB_W@Z.c)
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D05B0 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEADK_JPEAUISpatialGraphNodeReference@Holographic@34@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D1C40 (-PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@W.c)
 *     ?SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D23E8 (-SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D45BC (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 *     ?UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEAUIPerceptionTimestamp@Perception@4@PEA_J@Z @ 0x1800DA65C (-UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windo.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnInputReport(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        int a2,
        char *a3,
        unsigned int a4,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a5)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v5; // rbp
  char *v7; // r14
  __int64 v9; // rcx
  struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rdi
  struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *v14; // r12
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v15; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v16; // rcx
  char v17; // al
  int v18; // eax
  __int64 v19; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v20; // rcx
  __int128 v22; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+8h] BYREF

  v5 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)((char *)this - 8);
  v7 = a3;
  v22 = 0LL;
  if ( (int)Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
              (__int64)this - 8,
              a2,
              (__int64)a3,
              &v22) < 0 )
  {
    if ( SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled(v9) )
    {
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
        v19,
        _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTraceContinuous::InputReportIgnored_(v20, a2, L"Unknown");
    }
  }
  else
  {
    v10 = (struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)v22;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 72LL))(v22) )
    {
      v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v10 + 56LL))(v10);
      PerformanceCount.QuadPart = 0LL;
      v13 = v12;
      if ( (*(unsigned __int8 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v10 + 64LL))(v10) )
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::UpdateRigTransforms(
          v5,
          0LL,
          (__int64 *)&PerformanceCount);
      else
        QueryPerformanceCounter(&PerformanceCount);
      if ( a4 >= (unsigned int)v13 )
      {
        v14 = a5;
        do
        {
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::PrepareAndSendInputInfo(
            v5,
            v10,
            v7,
            v13,
            PerformanceCount.QuadPart,
            0LL,
            v14);
          a4 -= v13;
          v7 += v13;
        }
        while ( a4 >= (unsigned int)v13 );
      }
    }
    else
    {
      if ( SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled(v11) )
      {
        wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
          v15,
          _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::InputReportIgnored_(v16, a2, L"Not enabled");
      }
      v17 = *((_BYTE *)v10 + 105);
      *((_BYTE *)v10 + 105) = 0;
      if ( v17 )
      {
        v18 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SendDeviceUpdate(
                v15,
                (struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)v22,
                a5);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            505LL,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
            (const char *)(unsigned int)v18);
      }
    }
  }
  if ( *((_QWORD *)&v22 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v22 + 1));
  return 0LL;
}
