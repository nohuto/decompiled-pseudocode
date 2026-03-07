void __fastcall VidMmUnmapViewAsync(struct _EPROCESS *a1, void *a2, void *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(v11, 0, 0x48uLL);
  if ( (byte_1C00769C1 & 1) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(v6, &BeginVidMmUnmapViewAsync, v7, a1, a2, a3);
  ObfReferenceObject(a2);
  v11[8] = 0LL;
  LODWORD(v11[4]) = 2;
  v11[5] = a1;
  v11[6] = a2;
  v11[7] = a3;
  if ( a1 )
    v11[8] = PsGetProcessDxgProcess(a1);
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v11) )
  {
    if ( a1 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(struct _EPROCESS *, void *))VirtualMemoryInterface + 4))(a1, a3);
    }
    else
    {
      MmUnmapViewInSystemSpace(a3);
    }
    ObfDereferenceObject(a2);
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(v9, &EndVidMmUnmapViewAsync, v10, a1, a2, a3);
  }
}
