/*
 * XREFs of ?UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEAUIPerceptionTimestamp@Perception@4@PEA_J@Z @ 0x1800DA65C
 * Callers:
 *     ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D17C0 (-OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     ?OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@4@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D7E50 (-OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIHolographicDisplay@Holographic@Graphics@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800476A8 (--4-$ComPtr@UIHolographicDisplay@Holographic@Graphics@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV0.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800D6210 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     GetHeadToPose @ 0x1800D7668 (GetHeadToPose.c)
 *     GetRigToHead @ 0x1800D7A4C (GetRigToHead.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::UpdateRigTransforms(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Perception::IPerceptionTimestamp *a2,
        LARGE_INTEGER *a3)
{
  __int128 v6; // xmm6
  __int128 v7; // xmm7
  __int128 v8; // xmm8
  __int128 v9; // xmm9
  __int64 v10; // rbx
  struct _RTL_CRITICAL_SECTION *v11; // rsi
  _OWORD *v12; // rax
  __int128 v13; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+38h] [rbp-D0h]
  __int128 v15; // [rsp+48h] [rbp-C0h]
  __int128 v16; // [rsp+58h] [rbp-B0h]
  int v17; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v18; // [rsp+6Ch] [rbp-9Ch]
  int v19; // [rsp+7Ch] [rbp-8Ch]
  __int128 v20; // [rsp+80h] [rbp-88h]
  int v21; // [rsp+90h] [rbp-78h]
  __int128 v22; // [rsp+94h] [rbp-74h]
  int v23; // [rsp+A4h] [rbp-64h]
  _BYTE v24[128]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v25; // [rsp+158h] [rbp+50h] BYREF
  __int64 v26; // [rsp+160h] [rbp+58h] BYREF

  v17 = 1065353216;
  v18 = 0LL;
  v19 = 1065353216;
  v20 = 0LL;
  v21 = 1065353216;
  v22 = 0LL;
  v23 = 1065353216;
  v6 = _xmm;
  v13 = _xmm;
  v7 = _xmm;
  v14 = _xmm;
  v8 = _xmm;
  v15 = _xmm;
  v9 = _xmm;
  v16 = _xmm;
  v10 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 360);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 9);
  if ( !a2 )
  {
    Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::IHolographicDisplay>::operator=(&v26, (__int64 *)this + 50);
    v10 = v26;
  }
  Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::IHolographicDisplay>::operator=(&v25, (__int64 *)this + 52);
  if ( v11 )
    LeaveCriticalSection(v11);
  if ( a2 || v10 )
    GetHeadToPose((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2, v10, (__int64)a3, (__int64)&v17);
  else
    QueryPerformanceCounter(a3);
  if ( v25 )
  {
    GetRigToHead(v25, (__int64)&v13);
    v9 = v16;
    v8 = v15;
    v7 = v14;
    v6 = v13;
  }
  v12 = Windows::Foundation::Numerics::operator*((__int64)v24, &v13, &v17);
  *(_OWORD *)((char *)this + 180) = *v12;
  *(_OWORD *)((char *)this + 196) = v12[1];
  *(_OWORD *)((char *)this + 212) = v12[2];
  *(_OWORD *)((char *)this + 228) = v12[3];
  *(_OWORD *)((char *)this + 244) = v6;
  *(_OWORD *)((char *)this + 260) = v7;
  *(_OWORD *)((char *)this + 276) = v8;
  *(_OWORD *)((char *)this + 292) = v9;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v26);
}
