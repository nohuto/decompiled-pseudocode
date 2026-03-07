void __fastcall imp_WdfPdoInitAllocate(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *ParentDevice)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 v3; // r9
  bool v4; // zf
  ULONG Tag; // ecx
  void *v6; // rax
  FX_POOL **v7; // rax
  __int64 v8; // rax
  FxDevice *v9; // rcx
  __m128i v10; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ParentDevice,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 0) >= 0 )
  {
    if ( pDevice->m_PkgPnp->m_Type != 4353 )
    {
      v3 = 51;
LABEL_13:
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, v3, WPP_FxDeviceInitApi_cpp_Traceguids);
      return;
    }
    v4 = m_Globals->FxPoolTrackingOn == 0;
    Tag = m_Globals->Tag;
    v10.m128i_i64[0] = 0LL;
    v10.m128i_i64[1] = 64LL;
    if ( v4 )
      v6 = 0LL;
    else
      v6 = retaddr;
    v7 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v10, 0x3B0uLL, Tag, v6);
    if ( !v7 || (WDFDEVICE_INIT::WDFDEVICE_INIT((WDFDEVICE_INIT *)v7, pDevice->m_Driver), !v8) )
    {
      v3 = 52;
      goto LABEL_13;
    }
    v9 = pDevice;
    *(_DWORD *)(v8 + 56) |= 0x80u;
    *(_DWORD *)(v8 + 36) = 1;
    *(_QWORD *)(v8 + 792) = v9;
    if ( !v9->m_PowerPageableCapable )
      *(_BYTE *)(v8 + 26) = 0;
    *(_BYTE *)(v8 + 901) = 1;
  }
}
