/*
 * XREFs of ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x1801EB1E8
 * Callers:
 *     ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x1801EB4F8 (-ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRT.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801E9080 (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX.c)
 *     ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1801EA094 (-GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlip.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::CreateTextures(
        CVirtualMonitorCaptureRenderTarget *this,
        unsigned int a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  struct IFlipProducer *v6; // r8
  struct CD3DDevice *D3DDeviceNoRef; // rax
  __int64 *v8; // r15
  int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  char *v20; // rcx
  __int64 v22; // [rsp+38h] [rbp-19h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-11h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-9h] BYREF
  void *v25; // [rsp+50h] [rbp-1h] BYREF
  _DWORD v26[12]; // [rsp+58h] [rbp+7h] BYREF

  v4 = 0;
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(*((_QWORD *)this + 2) + 264LL) + 40LL))(
                   *(_QWORD *)(*((_QWORD *)this + 2) + 264LL),
                   &v25);
  v6 = (struct IFlipProducer *)*((_QWORD *)this + 246);
  *((_QWORD *)this + 235) = *v5;
  D3DDeviceNoRef = CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
                     (struct CD3DDevice **)this + 234,
                     (const struct _LUID *)this + 235,
                     v6);
  if ( D3DDeviceNoRef )
  {
    v8 = (__int64 *)*((_QWORD *)D3DDeviceNoRef + 69);
    v9 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v10 = *((_DWORD *)this + 525);
        v22 = 0LL;
        v26[6] = 0;
        v26[7] = 0;
        v26[9] = 0;
        v23 = 0LL;
        v26[0] = v10;
        v26[1] = *((_DWORD *)this + 526);
        v11 = *v8;
        v26[2] = 1;
        v26[3] = 1;
        v26[4] = 87;
        v26[5] = 1;
        v26[8] = 40;
        v26[10] = 2050;
        v12 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v11 + 40))(
                v8,
                v26,
                0LL,
                &v23);
        v4 = v12;
        if ( v12 < 0 )
          break;
        v14 = v22;
        v22 = 0LL;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v15 = (**v23)(v23, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v22);
        v4 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xCDu, 0LL);
          goto LABEL_18;
        }
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v22 + 104LL))(
                v22,
                0LL,
                0x10000000LL,
                0LL,
                &v25);
        v4 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xCEu, 0LL);
          goto LABEL_18;
        }
        v19 = (_QWORD *)*((_QWORD *)this + 253);
        hObject = v25;
        if ( v19 == *((_QWORD **)this + 254) )
        {
          std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
            (__int64 *)this + 252,
            (__int64)v19,
            &hObject);
          v20 = (char *)hObject;
        }
        else
        {
          v20 = 0LL;
          *v19 = v25;
          *((_QWORD *)this + 253) += 8LL;
        }
        if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v20);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
        if ( ++v9 >= a2 )
          return v4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xCBu, 0LL);
LABEL_18:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    }
  }
  return v4;
}
