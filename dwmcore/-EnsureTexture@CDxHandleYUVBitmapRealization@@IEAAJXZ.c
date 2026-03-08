/*
 * XREFs of ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802B0724
 * Callers:
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x1802B0B7C (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1802B0D60 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D644 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800B96A4 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801BA3FC (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z @ 0x1802BC654 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPE.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::EnsureTexture(CDxHandleYUVBitmapRealization *this)
{
  unsigned int v1; // edi
  volatile signed __int32 **v2; // r14
  struct _LUID v4; // rdx
  int Device; // eax
  __int64 v6; // rcx
  bool v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rdx
  _BYTE *v11; // rax
  char *v12; // r8
  const void **v13; // rcx
  CD3DDevice *v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-68h]
  CD3DDevice *v17; // [rsp+30h] [rbp-58h] BYREF
  char *v18; // [rsp+38h] [rbp-50h] BYREF
  struct D3D11_TEXTURE2D_DESC v19; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0;
  v2 = (volatile signed __int32 **)((char *)this + 376);
  if ( !*((_QWORD *)this + 47) )
  {
    if ( *((_DWORD *)this + 68) )
    {
      v1 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0x246u, 0LL);
      return v1;
    }
    v4 = (struct _LUID)*((_QWORD *)this + 32);
    v17 = 0LL;
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v4, &v17);
    v1 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, Device, 0x238u, 0LL);
      v14 = v17;
      if ( v17 )
        goto LABEL_12;
    }
    else
    {
      memset(&v19, 0, sizeof(v19));
      wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(v2);
      v8 = CD3DVidMemOnlyTexture::OpenSharedTexture(
             &v19,
             v17,
             *((void **)this + 31),
             v7,
             v16,
             (struct CD3DVidMemOnlyTexture **)v2);
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x240u, 0LL);
      }
      else
      {
        v10 = *v2;
        v11 = (_BYTE *)*((_QWORD *)*v2 + 10);
        v12 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16;
        v13 = (const void **)(*v2 + 18);
        v18 = v12;
        if ( v11 == *((_BYTE **)v10 + 11) )
        {
          std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(v13, v11, &v18);
        }
        else
        {
          *(_QWORD *)v11 = v12;
          *((_QWORD *)v10 + 10) += 8LL;
        }
      }
      if ( v17 )
      {
        v14 = v17;
LABEL_12:
        CD3DDevice::Release(v14);
      }
    }
  }
  return v1;
}
