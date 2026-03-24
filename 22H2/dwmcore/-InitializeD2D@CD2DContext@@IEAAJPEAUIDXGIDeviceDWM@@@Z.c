/*
 * XREFs of ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x18002C2E4
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x18002AC38 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x18002CA08 (-D2DRemoveClip@CD2DContext@@IEAAXXZ.c)
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x18002CA30 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?CreateD2DDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z @ 0x18002CF54 (-CreateD2DDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z.c)
 *     ?Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z @ 0x18002D02C (-Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180078718 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::InitializeD2D(struct CD2DResourceManager **this, struct IDXGIDeviceDWM *a2)
{
  __int64 v2; // rax
  struct CD2DResourceManager **v3; // rdi
  bool v5; // zf
  unsigned int v6; // ebx
  int D2DDevice; // eax
  _QWORD *v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // rcx
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+38h] [rbp-30h] BYREF

  v14 = 0LL;
  v2 = (__int64)(this + 139);
  v3 = this;
  v5 = this == 0LL;
  LODWORD(this) = 1128;
  if ( v5 )
    v2 = 1128LL;
  v6 = *(_DWORD *)v2;
  if ( *(int *)v2 < 0 )
  {
    v12 = *(_DWORD *)v2;
    v13 = 35;
  }
  else
  {
    D2DDevice = CD2DResourceManager::Create((struct CD2DContext *)v3, v3 + 26);
    v6 = D2DDevice;
    if ( D2DDevice < 0 )
    {
      v13 = 37;
    }
    else
    {
      v8 = v3 + 28;
      D2DDevice = CD2DFactory::CreateD2DDevice((CD2DFactory *)this, a2, v3 + 28);
      v6 = D2DDevice;
      if ( D2DDevice < 0 )
      {
        v13 = 40;
      }
      else
      {
        D2DDevice = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*v8)(
                      *v8,
                      &GUID_46fdbfea_53f8_440c_b9e2_81dfec612a72,
                      (__int64)(v3 + 29));
        v6 = D2DDevice;
        if ( D2DDevice < 0 )
        {
          v13 = 42;
        }
        else
        {
          D2DDevice = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v8 + 32LL))(*v8, 0LL, &v14);
          v6 = D2DDevice;
          if ( D2DDevice < 0 )
          {
            v13 = 45;
          }
          else
          {
            v9 = v3 + 30;
            D2DDevice = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v14)(
                          v14,
                          &GUID_394ea6a3_0c34_4321_950b_6ca20f0be6c7,
                          (__int64)(v3 + 30));
            v6 = D2DDevice;
            if ( D2DDevice < 0 )
            {
              v13 = 47;
            }
            else
            {
              D2DDevice = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*v9)(
                            *v9,
                            &GUID_2ea67ed7_d42e_4c07_9dd5_a91ea23e01d2,
                            (__int64)(v3 + 31));
              v6 = D2DDevice;
              if ( D2DDevice < 0 )
              {
                v13 = 49;
              }
              else
              {
                v10 = *v9;
                v15 = 0LL;
                D2DDevice = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, struct CD2DResourceManager **))(*(_QWORD *)v10 + 64LL))(
                              v10,
                              &v15,
                              0LL,
                              v3 + 45);
                v6 = D2DDevice;
                if ( D2DDevice < 0 )
                {
                  v13 = 53;
                }
                else
                {
                  D2DDevice = CD2DContext::PopulateEffectTable((CD2DContext *)v3);
                  v6 = D2DDevice;
                  if ( D2DDevice >= 0 )
                  {
                    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 48LL))(*v8, 0x40000000LL);
                    CD2DContext::D2DRemoveClip((CD2DContext *)v3);
                    goto LABEL_13;
                  }
                  v13 = 55;
                }
              }
            }
          }
        }
      }
    }
    v12 = D2DDevice;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v12, v13, 0LL);
LABEL_13:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((unsigned __int64)(v3 - 2) & -(__int64)(v3 != 0LL), v6, 0LL);
}
