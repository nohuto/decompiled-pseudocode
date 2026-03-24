/*
 * XREFs of ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x180024F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x180025178 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x180025394 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x180025C60 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18005F710 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FFF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180060020 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180184F2C (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18023DCE8 (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 */

__int64 __fastcall CLegacyRenderTarget::EnsureSwapChain(CLegacyRenderTarget *this, bool *a2)
{
  struct ILegacySwapChain **v2; // r14
  __int64 v4; // r8
  int DXGIOutput; // edi
  int (__fastcall ***v7)(_QWORD); // rcx
  unsigned int v8; // ecx
  unsigned int v10; // edx
  _QWORD *v11; // rbx
  struct IDXGIOutputDWM *v12; // rcx
  int v13; // eax
  __int16 v14; // cx
  char v15; // al
  struct IDXGIOutput *v16; // rcx
  CDeviceManager *v17; // rcx
  int Device; // eax
  unsigned int v19; // ecx
  struct ILegacySwapChain *v20; // rdx
  CD3DDevice *v21; // rbx
  int LegacySwapChain; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  CD3DDevice *v26; // rcx
  struct ILegacySwapChain *v27; // rdx
  __int64 v28; // rcx
  int ConversionSwapChain; // eax
  unsigned int v30; // ecx
  __int64 v31; // rcx
  int v32; // r9d
  __int64 v33; // rcx
  struct ILegacySwapChain *v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // [rsp+20h] [rbp-E0h]
  CD3DDevice *v37; // [rsp+40h] [rbp-C0h] BYREF
  struct IDXGIOutput *v38; // [rsp+48h] [rbp-B8h] BYREF
  struct IDXGIOutputDWM **v39; // [rsp+50h] [rbp-B0h]
  struct IDXGIOutputDWM *v40; // [rsp+58h] [rbp-A8h] BYREF
  char v41; // [rsp+60h] [rbp-A0h]
  char v42[28]; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+8Ch] [rbp-74h]
  int v44; // [rsp+90h] [rbp-70h]
  int v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+110h] [rbp+10h]

  v2 = (struct ILegacySwapChain **)((char *)this + 160);
  *a2 = 0;
  v4 = *((_QWORD *)this + 20);
  DXGIOutput = 0;
  if ( !v4 )
  {
    v10 = *((_DWORD *)this + 55);
    v11 = (_QWORD *)((char *)this + 152);
    v39 = (struct IDXGIOutputDWM **)((char *)this + 152);
    v38 = 0LL;
    v37 = 0LL;
    v40 = 0LL;
    v41 = 1;
    DXGIOutput = CDisplayManager::GetDXGIOutput(this, v10, &v40);
    if ( v41 )
    {
      v12 = *v39;
      *v39 = v40;
      if ( v12 )
        (*(void (__fastcall **)(struct IDXGIOutputDWM *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( DXGIOutput < 0 )
    {
      v32 = DXGIOutput;
      v36 = 1073;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v11 + 32LL))(*v11, v42);
      DXGIOutput = v13;
      if ( v13 < 0 )
      {
        v36 = 1076;
      }
      else
      {
        v14 = v45;
        *((_DWORD *)this + 20) = v43;
        *((_DWORD *)this + 21) = v44;
        *((_DWORD *)this + 4642) = v46;
        v15 = HIBYTE(v14) & 1;
        *((_BYTE *)this + 18585) = (v14 & 8) != 0;
        v16 = v38;
        *((_BYTE *)this + 18584) = v15;
        if ( v16 )
          ((void (__fastcall *)(struct IDXGIOutput *))v16->lpVtbl->Release)(v16);
        v13 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct IDXGIOutput **))*v11)(
                *v11,
                &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa,
                &v38);
        DXGIOutput = v13;
        if ( v13 >= 0 )
        {
          wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v37);
          Device = CDeviceManager::GetDevice(v17, *(struct _LUID *)((char *)this + 228), &v37);
          DXGIOutput = Device;
          if ( Device < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1802DB7B8, 4u, Device, 0x440u, 0LL);
            v26 = v37;
            if ( !v37 )
              goto LABEL_22;
            goto LABEL_21;
          }
          if ( *((_DWORD *)this + 24) > 1u )
          {
            *((_BYTE *)this + 18591) = 0;
            v27 = *v2;
            *v2 = 0LL;
            if ( v27 )
            {
              v28 = (__int64)v27 + *(int *)(*((_QWORD *)v27 + 1) + 4LL) + 8;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            }
            v21 = v37;
            ConversionSwapChain = CD3DDevice::CreateConversionSwapChain(
                                    v37,
                                    v38,
                                    (const struct D2D_SIZE_U *)this + 10,
                                    (CLegacyRenderTarget *)((char *)this + 88),
                                    (CLegacyRenderTarget *)((char *)this + 228),
                                    v2);
            DXGIOutput = ConversionSwapChain;
            if ( ConversionSwapChain >= 0 )
              goto LABEL_17;
            MilInstrumentationCheckHR_MaybeFailFast(v30, &dword_1802DB7B8, 4u, ConversionSwapChain, 0x45Bu, 0LL);
          }
          else
          {
            v20 = *v2;
            *v2 = 0LL;
            if ( v20 )
            {
              v31 = (__int64)v20 + *(int *)(*((_QWORD *)v20 + 1) + 4LL) + 8;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
            }
            v21 = v37;
            LegacySwapChain = CD3DDevice::CreateLegacySwapChain(
                                v37,
                                v38,
                                (const struct D2D_SIZE_U *)this + 10,
                                (CLegacyRenderTarget *)((char *)this + 88),
                                (CLegacyRenderTarget *)((char *)this + 228),
                                *((_DWORD *)this + 56),
                                *((_BYTE *)this + 18591),
                                v2);
            DXGIOutput = LegacySwapChain;
            if ( LegacySwapChain >= 0 )
            {
LABEL_17:
              v24 = COverlayContext::OnSwapChainCreated((CLegacyRenderTarget *)((char *)this + 472));
              DXGIOutput = v24;
              if ( v24 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_1802DB7B8, 4u, v24, 0x45Eu, 0LL);
              }
              else
              {
                *((_BYTE *)this + 129) = 1;
                *((_BYTE *)this + 18588) = 1;
                *a2 = 1;
              }
              goto LABEL_19;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v23, &dword_1802DB7B8, 4u, LegacySwapChain, 0x44Fu, 0LL);
          }
LABEL_19:
          if ( !v21 )
          {
LABEL_22:
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v38);
            if ( DXGIOutput >= 0 )
              return (unsigned int)DXGIOutput;
            if ( DXGIOutput == -2003304306 && *((_BYTE *)this + 18591) )
              *((_BYTE *)this + 18591) = 0;
            goto LABEL_41;
          }
          v26 = v21;
LABEL_21:
          CD3DDevice::Release(v26);
          goto LABEL_22;
        }
        v36 = 1086;
      }
      v32 = v13;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, &dword_1802DB7B8, 4u, v32, v36, 0LL);
    goto LABEL_22;
  }
  v7 = (int (__fastcall ***)(_QWORD))(v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 12LL));
  if ( (**v7)(v7) >= 0 )
    return (unsigned int)DXGIOutput;
  DXGIOutput = -2003304442;
  MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802DB7B8, 4u, -2003304442, 0x428u, 0LL);
LABEL_41:
  v33 = *((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = 0LL;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  v34 = *v2;
  *v2 = 0LL;
  if ( v34 )
  {
    v35 = (__int64)v34 + *(int *)(*((_QWORD *)v34 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset((char *)this + 168);
  *((_BYTE *)this + 18590) = 0;
  return (unsigned int)DXGIOutput;
}
