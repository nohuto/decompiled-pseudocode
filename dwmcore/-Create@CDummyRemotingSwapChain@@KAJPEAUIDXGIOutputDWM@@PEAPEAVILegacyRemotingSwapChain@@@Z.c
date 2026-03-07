__int64 __fastcall CDummyRemotingSwapChain::Create(struct IDXGIOutputDWM *a1, struct ILegacyRemotingSwapChain **a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  CDeviceManager *v7; // rcx
  HMODULE LibraryA; // rbx
  int DefaultDevice; // eax
  __int64 v10; // rcx
  CDummyRemotingSwapChain *v11; // rax
  CDummyRemotingSwapChain *v12; // rax
  CDummyRemotingSwapChain *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  struct CD3DDevice *v17; // [rsp+40h] [rbp-F8h] BYREF
  struct _UNSIGNED_RATIO v18; // [rsp+48h] [rbp-F0h]
  _BYTE v19[8]; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-E0h]
  struct _UNSIGNED_RATIO v21; // [rsp+78h] [rbp-C0h]
  unsigned __int16 v22[40]; // [rsp+C0h] [rbp-78h] BYREF

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)a1 + 32LL))(a1, v19);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x16u, 0LL);
  }
  else
  {
    v18 = v21;
    LibraryA = LoadLibraryA("rdsdwmdr.dll");
    if ( LibraryA )
    {
      v17 = 0LL;
      DefaultDevice = CDeviceManager::GetDefaultDevice(v7, &v17);
      v6 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, DefaultDevice, 0x21u, 0LL);
      }
      else
      {
        v11 = (CDummyRemotingSwapChain *)operator new(0x148uLL);
        if ( v11 )
        {
          v12 = CDummyRemotingSwapChain::CDummyRemotingSwapChain(v11, v17, a1, v20, v18, LibraryA);
          v13 = v12;
          if ( v12 )
            CMILRefCountImpl::AddReference((CDummyRemotingSwapChain *)((char *)v12 + 8));
        }
        else
        {
          v13 = 0LL;
        }
        v14 = CDummyRemotingSwapChain::Initialize(v13, v22);
        v6 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x29u, 0LL);
          if ( v13 )
            CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v13);
        }
        else
        {
          *a2 = (struct ILegacyRemotingSwapChain *)(((unsigned __int64)v13 + 56) & -(__int64)(v13 != 0LL));
        }
      }
      if ( v17 )
        CD3DDevice::Release(v17);
    }
    else
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, -2147024809, 0x2Fu, 0LL);
    }
  }
  return v6;
}
