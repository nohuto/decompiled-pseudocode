/*
 * XREFs of ?ResetBackBuffer@CLegacySwapChain@@MEAAJXZ @ 0x180100BF0
 * Callers:
 *     ?ResetBackBuffer@CLegacyStereoSwapChain@@MEAAJXZ @ 0x18029CDA0 (-ResetBackBuffer@CLegacyStereoSwapChain@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x180100D88 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::ResetBackBuffer(CLegacySwapChain *this)
{
  _QWORD *v1; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  int DeviceTextureTarget; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  char v23; // [rsp+30h] [rbp-18h]
  __int64 (__fastcall ***v24)(_QWORD, GUID *, char *); // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 128);
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
  {
    v20 = *(int *)(*(_QWORD *)(v3 + 8) + 8LL) + v3 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 48LL))(
      v20,
      ((unsigned __int64)this + 216) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  }
  v4 = *v1;
  *v1 = 0LL;
  if ( v4 )
  {
    v21 = v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v5 = (__int64 *)*((_QWORD *)this + 28);
  *((_BYTE *)this + 345) = 0;
  if ( v5 )
  {
    v6 = *v5;
    v24 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(v6 + 72))(
           v5,
           0LL,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v24);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802EB290, 2u, v7, 0x5B0u, 0LL);
    }
    else
    {
      v10 = *((_QWORD *)this + 29);
      *((_QWORD *)this + 29) = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v11 = (**v24)(v24, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, (char *)this + 232);
      v9 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802EB290, 2u, v11, 0x5B2u, 0LL);
      }
      else
      {
        v13 = *v1;
        v14 = *((_QWORD *)this + 10);
        *v1 = 0LL;
        if ( v13 )
        {
          v22 = v13 + 8 + *(int *)(*(_QWORD *)(v13 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v23 = 1;
        DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                                v14,
                                v24,
                                *((unsigned int *)this + 70),
                                *((unsigned int *)this + 71),
                                *((_DWORD *)this + 24),
                                *((_DWORD *)this + 26),
                                v23,
                                v1);
        v9 = DeviceTextureTarget;
        if ( DeviceTextureTarget < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802EB290, 2u, DeviceTextureTarget, 0x5BAu, 0LL);
        }
        else
        {
          v17 = *v1 + 8LL + *(int *)(*(_QWORD *)(*v1 + 8LL) + 8LL);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 40LL))(
            v17,
            ((unsigned __int64)this + 216) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
          LOBYTE(v18) = *((_BYTE *)this + 108);
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 16LL))(*v1, v18);
        }
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
  }
  else
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802EB290, 2u, -2003304307, 0x5C2u, 0LL);
  }
  return v9;
}
