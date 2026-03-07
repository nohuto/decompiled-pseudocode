__int64 __fastcall CDDisplayRenderTarget::TryEnsureSwapChain(CDDisplayRenderTarget *this)
{
  struct CDDisplaySwapChain **v1; // r14
  __int64 v2; // rax
  unsigned int v4; // edi
  COverlayContext *v5; // rbp
  struct _LUID v6; // rdx
  int Device; // eax
  __int64 v8; // rcx
  CD3DDevice *v9; // rbx
  int DDisplaySwapchainForSource; // eax
  __int64 v11; // rcx
  struct CDDisplaySwapChain *v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  CD3DDevice *v15; // rcx
  CD3DDevice *v17; // [rsp+70h] [rbp+8h] BYREF

  v1 = (struct CDDisplaySwapChain **)((char *)this + 184);
  v2 = *((_QWORD *)this + 23);
  v4 = 0;
  if ( !v2 || *(int *)(*(_QWORD *)(v2 + 80) + 1088LL) < 0 )
  {
    v5 = (CDDisplayRenderTarget *)((char *)this + 192);
    COverlayContext::Reset((CDDisplayRenderTarget *)((char *)this + 192));
    wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(v1);
    *((_QWORD *)this + 2310) = 0LL;
    *((_QWORD *)this + 2311) = 0LL;
    *((_QWORD *)this + 2312) = 0LL;
    *((_QWORD *)this + 2313) = 0LL;
    *((_QWORD *)this + 2314) = 0LL;
    *((_QWORD *)this + 2315) = 0LL;
    *((_QWORD *)this + 2316) = 0LL;
    *((_QWORD *)this + 2317) = 0LL;
    *((_QWORD *)this + 2318) = 0LL;
    *((_BYTE *)this + 18552) = 0;
    v6 = *(struct _LUID *)((char *)this + 18444);
    *((struct _LUID *)this + 2303) = v6;
    v17 = 0LL;
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v6, &v17);
    v4 = Device;
    if ( Device >= 0 )
    {
      v9 = v17;
      if ( *((_BYTE *)v17 + 1508) )
      {
        ScheduleCompositionPass(0, 0x2000u);
        v4 = 142213121;
      }
      else
      {
        wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(v1);
        DDisplaySwapchainForSource = CDDisplayManager::CreateDDisplaySwapchainForSource(
                                       *((CDDisplayManager **)this + 21),
                                       (CDDisplayRenderTarget *)((char *)this + 18444),
                                       *((_DWORD *)this + 4617),
                                       (CDDisplayRenderTarget *)((char *)this + 112),
                                       (const struct D2D_SIZE_U *)this + 13,
                                       *((_DWORD *)this + 4618),
                                       *((void **)this + 21),
                                       v1);
        v4 = DDisplaySwapchainForSource;
        if ( DDisplaySwapchainForSource < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, DDisplaySwapchainForSource, 0xCAu, 0LL);
        }
        else
        {
          v12 = *v1;
          *((_QWORD *)this + 2302) = *(_QWORD *)((char *)*v1 + 116);
          *((_DWORD *)this + 4608) = *((_DWORD *)v12 + 28);
          (*(void (__fastcall **)(struct CDDisplaySwapChain *))(*(_QWORD *)v12 + 256LL))(v12);
          *((_DWORD *)this + 4609) = *((_DWORD *)v12 + 31);
          v13 = COverlayContext::OnSwapChainCreated(v5);
          v4 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xD0u, 0LL);
        }
      }
      v15 = v9;
      goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Device, 0xBBu, 0LL);
    v15 = v17;
    if ( v17 )
LABEL_13:
      CD3DDevice::Release(v15);
  }
  return v4;
}
