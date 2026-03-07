__int64 __fastcall CD2DFactory::EnsureD2DFactory(CD2DFactory *this)
{
  unsigned int v1; // ebx
  HRESULT Factory; // eax
  unsigned int v3; // ecx
  __int64 v4; // rcx
  struct CD2DFactory *v5; // rcx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // [rsp+20h] [rbp-18h]
  CD2DFactory *pFactoryOptions; // [rsp+40h] [rbp+8h] BYREF

  pFactoryOptions = this;
  v1 = 0;
  if ( g_DeviceManager )
    return v1;
  LODWORD(pFactoryOptions) = 0;
  g_DeviceManager = 0LL;
  Factory = D2D1CreateFactory(
              D2D1_FACTORY_TYPE_MULTI_THREADED,
              &GUID_bb12d362_daee_4b9a_aa1d_14ba401cfa1f,
              (const D2D1_FACTORY_OPTIONS *)&pFactoryOptions,
              (void **)&g_DeviceManager);
  v1 = Factory;
  if ( Factory < 0 )
  {
    v10 = 31;
    goto LABEL_11;
  }
  v4 = *(&g_DeviceManager + 1);
  *(&g_DeviceManager + 1) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  Factory = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))*g_DeviceManager)(
              g_DeviceManager,
              &GUID_6f72c0a2_6db7_46e9_9b62_b58a23f4928b,
              (char *)&g_DeviceManager + 8);
  v1 = Factory;
  if ( Factory < 0 )
  {
    v10 = 33;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, Factory, v10, 0LL);
    return v1;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(&g_DeviceManager + 1) + 48LL))(*(&g_DeviceManager + 1), 0LL);
  v6 = CMesh2DEffect::Register(v5);
  v1 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xB5u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v1, 0x2Cu, 0LL);
  }
  return v1;
}
