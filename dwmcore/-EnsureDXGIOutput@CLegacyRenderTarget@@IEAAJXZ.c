/*
 * XREFs of ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C9C4C
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x1800C84D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800C8A5C (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1801E4810 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x1800CA30C (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1801C06D0 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x1801E362C (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1801E3B40 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vli.c)
 */

__int64 __fastcall CLegacyRenderTarget::EnsureDXGIOutput(CLegacyRenderTarget *this)
{
  unsigned int v2; // esi
  CDisplayManager *v4; // rcx
  int DXGIOutput; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ecx
  char v10; // cl
  CRegion *v11; // rcx
  struct IDXGIOutputDWM *v12; // rax
  __int64 v13; // rcx
  struct CSyncLockGroup *Group; // rax
  _DWORD *v15; // rax
  struct IDXGIOutputDWM *v16[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v17[28]; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+64h] [rbp-A4h]
  int v19; // [rsp+68h] [rbp-A0h]
  char v20; // [rsp+B4h] [rbp-54h]
  char v21; // [rsp+B5h] [rbp-53h]
  unsigned int v22; // [rsp+FCh] [rbp-Ch]

  if ( *((_QWORD *)this + 22) )
  {
    return 0;
  }
  else
  {
    v16[0] = 0LL;
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(v16);
    DXGIOutput = CDisplayManager::GetDXGIOutput(v4, *((_DWORD *)this + 4606), v16);
    v2 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, DXGIOutput, 0x41Eu, 0LL);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v16[0] + 32LL))(v16[0], v17);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x421u, 0LL);
      }
      else
      {
        v9 = v22;
        *((_DWORD *)this + 26) = v18;
        *((_DWORD *)this + 27) = v19;
        if ( v9 )
        {
          Group = CSyncLockGroup::GetGroup(v9);
          *((_QWORD *)this + 2321) = Group;
          *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::reserve_region(
                       (char *)Group + 16,
                       (__int64)(*((_QWORD *)Group + 3) - *((_QWORD *)Group + 2)) >> 3) = (char *)this + 144;
        }
        v10 = v20;
        *((_BYTE *)this + 18696) = v21 & 1;
        *((_BYTE *)this + 18697) = (v10 & 8) != 0;
        if ( (v10 & 1) != 0 )
        {
          v15 = operator new(0x48uLL);
          if ( v15 )
          {
            *(_QWORD *)v15 = v15 + 2;
            v15[2] = 0;
          }
          v11 = (CRegion *)*((_QWORD *)this + 2332);
          *((_QWORD *)this + 2332) = v15;
        }
        else
        {
          v11 = (CRegion *)*((_QWORD *)this + 2332);
          *((_QWORD *)this + 2332) = 0LL;
        }
        if ( v11 )
          CRegion::`scalar deleting destructor'(v11, 1u);
        v12 = v16[0];
        v13 = *((_QWORD *)this + 22);
        v16[0] = 0LL;
        *((_QWORD *)this + 22) = v12;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v16);
  }
  return v2;
}
