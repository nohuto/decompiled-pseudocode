__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessCreate(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        struct _LUID *a3)
{
  CD3DDevice *v5; // rsi
  struct CVisual *Resource; // rax
  void *v7; // r14
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // r9d
  int Device; // eax
  __int64 v12; // rcx
  int updated; // eax
  int v14; // r12d
  int v15; // r13d
  __int64 v16; // rcx
  __int64 v17; // rcx
  CComposition *v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-69h]
  struct CD3DDevice *v21; // [rsp+30h] [rbp-59h] BYREF
  __int64 v22; // [rsp+38h] [rbp-51h]
  __int64 v23; // [rsp+40h] [rbp-49h] BYREF
  struct CVisual *v24; // [rsp+48h] [rbp-41h]
  int v25; // [rsp+50h] [rbp-39h] BYREF
  __int128 v26; // [rsp+54h] [rbp-35h]
  __int64 v27; // [rsp+64h] [rbp-25h]
  __int128 v28; // [rsp+70h] [rbp-19h] BYREF
  enum DXGI_FORMAT v29[4]; // [rsp+80h] [rbp-9h]
  __int64 v30; // [rsp+90h] [rbp+7h]
  int v31; // [rsp+98h] [rbp+Fh]

  v22 = 0LL;
  v21 = 0LL;
  v5 = 0LL;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, a3[3].LowPart, 0xC4u);
  v7 = (void *)a3[1];
  v8 = 0LL;
  v24 = Resource;
  v23 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v28 = 0LL;
  *(_OWORD *)v29 = 0LL;
  if ( Resource )
  {
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, a3[2], &v21);
    v9 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Device, 0x21u, 0LL);
      v5 = v21;
      goto LABEL_22;
    }
    v5 = v21;
    updated = CD3DDevice::OpenIndirectSwapchain(v21, v7);
    v9 = updated;
    if ( updated < 0 )
    {
      v20 = 41;
    }
    else
    {
      v7 = 0LL;
      updated = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v22 + 56LL))(
                  v22,
                  0LL,
                  (char *)this + 1944);
      v9 = updated;
      if ( updated < 0 )
      {
        v20 = 50;
      }
      else
      {
        updated = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 243))(
                    *((_QWORD *)this + 243),
                    &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                    &v23);
        v9 = updated;
        if ( updated < 0 )
        {
          v20 = 51;
        }
        else
        {
          (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v23 + 80LL))(v23, &v28);
          v14 = v28;
          v15 = DWORD1(v28);
          updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v29[0]);
          v9 = updated;
          if ( updated < 0 )
          {
            v20 = 59;
          }
          else
          {
            updated = CRenderTarget::SetRootVisual(this, v24);
            v9 = updated;
            if ( updated < 0 )
            {
              v20 = 62;
            }
            else
            {
              v16 = v22;
              *((_QWORD *)this + 242) = v22;
              if ( v16 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
              *((_DWORD *)this + 26) = v14;
              *((_DWORD *)this + 27) = v15;
              *((_DWORD *)this + 490) = v14;
              *((_DWORD *)this + 491) = v15;
              *((struct _LUID *)this + 244) = a3[2];
              *((_BYTE *)this + 1756) = 1;
              updated = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(this);
              v9 = updated;
              if ( updated >= 0 )
              {
                COffScreenRenderTarget::ReleaseRenderTargets(this);
                goto LABEL_22;
              }
              v20 = 75;
            }
          }
        }
      }
    }
    v10 = updated;
  }
  else
  {
    v9 = -2003303421;
    v10 = -2003303421;
    v20 = 29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v10, v20, 0LL);
LABEL_22:
  if ( *((_QWORD *)this + 243) )
  {
    LODWORD(v21) = 2;
    (*(void (__fastcall **)(__int64, __int64, struct CD3DDevice **))(*(_QWORD *)v22 + 64LL))(v22, 4LL, &v21);
    v17 = *((_QWORD *)this + 243);
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      *((_QWORD *)this + 243) = 0LL;
    }
  }
  if ( v9 < 0 )
    CIndirectSwapchainRenderTarget::Unregister(this);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v5 )
    CD3DDevice::Release(v5);
  if ( v7 )
    CloseHandle(v7);
  v18 = (CComposition *)*((_QWORD *)this + 2);
  v25 = 19;
  v26 = 0LL;
  DWORD1(v26) = v9;
  v27 = 0LL;
  CComposition::NotifyHelper(v18, (struct MIL_MESSAGE *)&v25);
  return 0LL;
}
