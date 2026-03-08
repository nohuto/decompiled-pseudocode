/*
 * XREFs of ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1802863C4
 * Callers:
 *     ?InternalPresentDFlip@CDDisplaySwapChain@@MEAAJ_N0IIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1802877B0 (-InternalPresentDFlip@CDDisplaySwapChain@@MEAAJ_N0IIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4D.c)
 *     ?Present@CDDisplaySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180287FC0 (-Present@CDDisplaySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180288130 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800D0FEC (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDDisplaySwapChain::ExecutePresent(
        CDDisplaySwapChain *this,
        struct Windows::Devices::Display::Core::IDisplayScanout *a2)
{
  int v2; // r14d
  CD2DContext *v4; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rsi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  const void *retaddr; // [rsp+68h] [rbp+38h]
  int v35; // [rsp+70h] [rbp+40h] BYREF
  __int64 v36; // [rsp+80h] [rbp+50h] BYREF
  __int64 v37; // [rsp+88h] [rbp+58h] BYREF

  v2 = *((_DWORD *)this + 111);
  v4 = (CD2DContext *)(*((_QWORD *)this + 10) + 16LL);
  v37 = 0LL;
  v6 = v2 + 1;
  CD2DContext::ReleaseCachedD2DTarget(v4);
  v7 = *((_QWORD *)this + 35);
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 48LL);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  v9 = v8(v7, &v37);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x130u, 0LL);
  }
  else
  {
    v12 = *((_QWORD *)this + 10);
    v13 = *((_QWORD *)this + 36);
    *(_BYTE *)(v12 + 1507) = 0;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v12 + 224) + 152LL))(
            *(_QWORD *)(v12 + 224),
            v13,
            v6);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x133u, 0LL);
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v37 + 56LL))(
              v37,
              *((_QWORD *)this + 38),
              v6);
      v11 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x134u, 0LL);
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v37 + 48LL))(
                v37,
                a2);
        v11 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x137u, 0LL);
        }
        else
        {
          v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 35) + 56LL))(
                  *((_QWORD *)this + 35),
                  v37);
          v11 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x138u, 0LL);
          }
          else
          {
            ++*((_DWORD *)this + 111);
            if ( *((_BYTE *)this + 448) )
              goto LABEL_16;
            v22 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 46) + 48LL))(
                    *((_QWORD *)this + 46),
                    &v35);
            v11 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x140u, 0LL);
            }
            else
            {
              if ( v35 )
                goto LABEL_16;
              v24 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 45);
              v36 = 0LL;
              v25 = (**v24)(v24, &GUID_8f12f506_f08f_4adb_a368_473e4dd42d43, &v36);
              v11 = v25;
              if ( v25 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x144u, 0LL);
              }
              else
              {
                v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 43) + 96LL))(
                        *((_QWORD *)this + 43),
                        *((unsigned int *)this + 98),
                        0LL);
                v11 = v27;
                if ( v27 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x145u, 0LL);
                }
                else
                {
                  v29 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 43) + 160LL))(
                          *((_QWORD *)this + 43),
                          v36);
                  v11 = v29;
                  if ( v29 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x146u, 0LL);
                  }
                  else
                  {
                    v31 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 35) + 56LL))(
                            *((_QWORD *)this + 35),
                            v37);
                    v11 = v31;
                    if ( v31 >= 0 )
                    {
                      ++*((_DWORD *)this + 111);
                      *((_BYTE *)this + 448) = 1;
                      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
                      goto LABEL_16;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x149u, 0LL);
                  }
                }
              }
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
            }
          }
        }
      }
    }
  }
  if ( v11 == -2005270428 && CDeviceManager::s_bXbox )
    ModuleFailFastForHRESULT(-2005270521, retaddr);
LABEL_16:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
  return v11;
}
