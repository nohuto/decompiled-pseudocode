/*
 * XREFs of ?InitializeStreamReaderHelpers@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800DBD20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003D054 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?EyeGazeStateReaderInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@_N@Z @ 0x1800DB9D4 (-EyeGazeStateReaderInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUI.c)
 *     ?Init@?$PayloadFieldHelper@E@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800DBB08 (-Init@-$PayloadFieldHelper@E@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@23.c)
 *     ?Init@?$PayloadFieldHelper@UPERCEPTION_STATE_STREAM_TIMESTAMPS@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800DBB70 (-Init@-$PayloadFieldHelper@UPERCEPTION_STATE_STREAM_TIMESTAMPS@@@Holographic@Internal@Windows@@Q.c)
 *     ?Init@?$PayloadFieldHelper@UXMFLOAT3@DirectX@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800DBBDC (-Init@-$PayloadFieldHelper@UXMFLOAT3@DirectX@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPa.c)
 *     ?Init@?$PayloadFieldHelper@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800DBC44 (-Init@-$PayloadFieldHelper@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@Holographic@Internal@Wind.c)
 *     ?Init@?$PayloadFieldHelper@W4SPATIAL_GAZE_CALIBRATION_STATE@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800DBCB0 (-Init@-$PayloadFieldHelper@W4SPATIAL_GAZE_CALIBRATION_STATE@@@Holographic@Internal@Windows@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::InitializeStreamReaderHelpers(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rcx
  char v18; // di
  __int64 v19; // rax
  void *v20; // rax
  const struct std::nothrow_t *v21; // rdx
  void *v22; // rcx
  const struct _GUID *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v29[16]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v28 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 16) + 104LL))(*((_QWORD *)this + 16), &v28);
  v2 = Windows::Internal::Holographic::PayloadFieldHelper<PERCEPTION_STATE_STREAM_TIMESTAMPS>::Init(
         (__int64 *)this + 138,
         v28);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v6 = Windows::Internal::Holographic::PayloadFieldHelper<unsigned char>::Init(
           (__int64 *)this + 139,
           v28,
           (__int64)&SPATIALFIELD_IsCombinedGazeValid);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v9 = Windows::Internal::Holographic::PayloadFieldHelper<DirectX::XMFLOAT3>::Init(
             (__int64 *)this + 140,
             v28,
             (__int64)&SPATIALFIELD_CombinedProjectionCenter);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v12 = Windows::Internal::Holographic::PayloadFieldHelper<DirectX::XMFLOAT3>::Init(
                (__int64 *)this + 141,
                v28,
                (__int64)&SPATIALFIELD_CombinedGazeDirection);
        v13 = v12;
        if ( v12 >= 0 )
        {
          v15 = Windows::Internal::Holographic::PayloadFieldHelper<enum SPATIAL_GAZE_CALIBRATION_STATE>::Init(
                  (__int64 *)this + 142,
                  v28);
          v16 = v15;
          if ( v15 >= 0 )
          {
            v18 = (int)Windows::Internal::Holographic::PayloadFieldHelper<enum SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS>::Init(
                         (__int64 *)this + 143,
                         v28) >= 0;
            v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
            *((_QWORD *)this + 144) = v19;
            v20 = operator new[](2 * v19);
            v22 = (void *)*((_QWORD *)this + 145);
            *((_QWORD *)this + 145) = v20;
            if ( v22 )
              operator delete(v22, v21);
            v23 = (const struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 48LL))(
                                          *((_QWORD *)this + 15),
                                          v29);
            if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v24) )
            {
              wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                v25,
                _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
              SpatialInteractionDevices::SpatialInteractionTrace::EyeGazeStateReaderInitialized_(v26, v23, v18);
            }
            v27 = v28;
            if ( v28 )
            {
              v28 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            }
            return 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x12A,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
              (const char *)(unsigned int)v15);
            v17 = v28;
            if ( v28 )
            {
              v28 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            }
            return v16;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x129,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
            (const char *)(unsigned int)v12);
          v14 = v28;
          if ( v28 )
          {
            v28 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          }
          return v13;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x128,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
          (const char *)(unsigned int)v9);
        v11 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        return v10;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x127,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
        (const char *)(unsigned int)v6);
      v8 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
      (const char *)(unsigned int)v2);
    v4 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return v3;
  }
}
