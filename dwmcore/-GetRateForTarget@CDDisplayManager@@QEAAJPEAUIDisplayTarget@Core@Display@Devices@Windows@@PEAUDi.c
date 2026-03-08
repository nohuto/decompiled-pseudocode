/*
 * XREFs of ?GetRateForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAUDisplayPresentationRate@3456@@Z @ 0x180292718
 * Callers:
 *     ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x180288760 (-UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplayManager::GetRateForTarget(
        CDDisplayManager *this,
        struct Windows::Devices::Display::Core::IDisplayTarget *a2,
        struct Windows::Devices::Display::Core::DisplayPresentationRate *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, struct Windows::Devices::Display::Core::IDisplayTarget *, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 *v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h] BYREF
  CDDisplayManager *v26; // [rsp+70h] [rbp+20h] BYREF
  __int64 v27; // [rsp+88h] [rbp+38h] BYREF

  v26 = this;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Devices::Display::Core::IDisplayTarget *, CDDisplayManager **))(*(_QWORD *)g_DDisplayManager + 64LL))(
         g_DDisplayManager,
         a2,
         &v26);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xE0u, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)g_DDisplayManager + 80LL))(g_DDisplayManager, &v24);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xE3u, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 64LL))(v24, &v23);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xE4u, 0LL);
      }
      else
      {
        v12 = v23;
        v13 = *(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::IDisplayTarget *, __int64 *))(*(_QWORD *)v23 + 120LL);
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        v14 = v13(v12, a2, &v25);
        v7 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xE7u, 0LL);
        }
        else if ( v25 )
        {
          v22 = 0LL;
          (**(void (__fastcall ***)(__int64, GUID *, __int64 **))v25)(
            v25,
            &GUID_f32459c5_e994_570b_9ec8_ef42c35a8547,
            &v22);
          v16 = *v22;
          v27 = 0LL;
          v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v16 + 48))(v22, &v27);
          v7 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xEEu, 0LL);
          }
          else
          {
            v19 = (*(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::DisplayPresentationRate *))(*(_QWORD *)v27 + 48LL))(
                    v27,
                    a3);
            v7 = v19;
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xEFu, 0LL);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
        }
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
  return v7;
}
