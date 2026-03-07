__int64 __fastcall DxgkGetSwapChainSurfacePhysicalAddress(ULONG64 a1)
{
  _OWORD *v2; // rax
  NTSTATUS v3; // eax
  int ClientSurfacePhysicalAddress; // ebx
  struct DXGSWAPCHAIN *v5; // rsi
  int v6; // eax
  HANDLE *v8; // rdx
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-B0h] BYREF
  struct DXGDEVICE *v11; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v12[128]; // [rsp+50h] [rbp-98h] BYREF

  *(_OWORD *)Handle = 0LL;
  v2 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v2;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  ClientSurfacePhysicalAddress = v3;
  if ( v3 >= 0 )
  {
    v5 = *(struct DXGSWAPCHAIN **)Object;
    v11 = 0LL;
    DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v12, v5, 0, 1);
    v6 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v12, &v11, 1);
    ClientSurfacePhysicalAddress = v6;
    if ( v6 >= 0 )
    {
      ClientSurfacePhysicalAddress = DXGSWAPCHAIN::GetClientSurfacePhysicalAddress(
                                       v5,
                                       (union _LARGE_INTEGER *)&Handle[1]);
      if ( ClientSurfacePhysicalAddress < 0 )
        Handle[1] = 0LL;
      v8 = (HANDLE *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v8 = (HANDLE *)MmUserProbeAddress;
      *v8 = Handle[1];
    }
    else
    {
      WdLogSingleEntry1(3LL, v6);
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v12);
  }
  else
  {
    WdLogSingleEntry2(3LL, Handle[0], v3);
  }
  NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
  return (unsigned int)ClientSurfacePhysicalAddress;
}
