/*
 * XREFs of ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0018A08
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C00188A4 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C001917C (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C01DD210 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C01DEFE0 (DxgkGetSharedSyncObjectType.c)
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C01DEFF0 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkCreateDeviceInternal @ 0x1C01DF010 (DxgkCreateDeviceInternal.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C01DF030 (DxgkCreateContextVirtualInternal.c)
 *     DxgkDestroyDeviceInternal @ 0x1C01DFFD8 (DxgkDestroyDeviceInternal.c)
 *     DxgkDestroyContextInternal @ 0x1C01DFFF0 (DxgkDestroyContextInternal.c)
 */

__int64 __fastcall CAdapter::UpdateRenderFence(CAdapter *this, void *a2)
{
  int DeviceInternal; // edi
  int v3; // r14d
  PVOID v4; // rsi
  int v7; // eax
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  NTSTATUS v9; // eax
  int v10; // eax
  void *v12; // rcx
  D3DKMT_HANDLE v13; // eax
  int v14; // eax
  _OWORD v15[8]; // [rsp+30h] [rbp-29h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v16; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+D0h] [rbp+77h] BYREF

  DeviceInternal = 0;
  v3 = 0;
  v4 = 0LL;
  if ( !a2 )
    goto LABEL_11;
  v7 = *((_DWORD *)this + 11);
  if ( !v7 )
  {
    memset(v15, 0, 0x40uLL);
    v14 = *((_DWORD *)this + 10);
    DWORD2(v15[0]) |= 4u;
    LODWORD(v15[0]) = v14;
    DeviceInternal = DxgkCreateDeviceInternal(v15);
    if ( DeviceInternal < 0 )
      return (unsigned int)DeviceInternal;
    v7 = HIDWORD(v15[0]);
    *((_DWORD *)this + 11) = HIDWORD(v15[0]);
  }
  if ( !*((_DWORD *)this + 18) )
  {
    memset(v15, 0, 40);
    HIDWORD(v15[0]) = 8;
    LODWORD(v15[0]) = v7;
    DeviceInternal = DxgkCreateContextVirtualInternal(v15);
    if ( DeviceInternal < 0 )
      return (unsigned int)DeviceInternal;
    *((_DWORD *)this + 18) = v15[2];
  }
  SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(a2, 0x1F0000u, SharedSyncObjectType, 1, &Object, 0LL);
  v4 = Object;
  DeviceInternal = v9;
  if ( v9 < 0 )
    goto LABEL_8;
  if ( Object == *((PVOID *)this + 8) )
    goto LABEL_8;
  memset(v15, 0, 0x58uLL);
  v10 = *((_DWORD *)this + 11);
  HIDWORD(v15[0]) |= 0x83u;
  DWORD2(v15[0]) = v10;
  *(_QWORD *)&v15[0] = a2;
  DeviceInternal = DxgkOpenSyncObjectFromNtHandle2Internal(v15);
  if ( DeviceInternal < 0 )
  {
    HIDWORD(v15[0]) &= ~0x80u;
    DeviceInternal = DxgkOpenSyncObjectFromNtHandle2Internal(v15);
    if ( DeviceInternal < 0 )
      goto LABEL_8;
  }
  v3 = v15[1];
  if ( !LODWORD(v15[1]) )
  {
LABEL_8:
    if ( v4 )
      ObfDereferenceObject(v4);
  }
  else
  {
LABEL_11:
    v12 = (void *)*((_QWORD *)this + 8);
    if ( v12 )
      ObfDereferenceObject(v12);
    v13 = *((_DWORD *)this + 14);
    *((_QWORD *)this + 8) = v4;
    if ( v13 )
    {
      v16.hSyncObject = v13;
      DxgkCddDestroySynchronizationObject(&v16);
    }
    *((_DWORD *)this + 14) = v3;
    if ( !v3 )
    {
      if ( *((_DWORD *)this + 18) )
      {
        v16.hSyncObject = *((_DWORD *)this + 18);
        DxgkDestroyContextInternal(&v16);
        *((_DWORD *)this + 18) = 0;
      }
      if ( *((_DWORD *)this + 11) )
      {
        v16.hSyncObject = *((_DWORD *)this + 11);
        DxgkDestroyDeviceInternal(&v16);
        *((_DWORD *)this + 11) = 0;
      }
    }
  }
  return (unsigned int)DeviceInternal;
}
