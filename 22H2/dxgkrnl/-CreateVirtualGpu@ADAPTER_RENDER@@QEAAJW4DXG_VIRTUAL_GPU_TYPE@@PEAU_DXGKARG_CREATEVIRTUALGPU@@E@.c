/*
 * XREFs of ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C022F8CC
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C02318D0 (DxgkDdiCreateVirtualGpu.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000C284 (_tlgKeywordOn.c)
 *     Feature_EnableGpuPVFor2_4Drivers__private_ReportDeviceUsage @ 0x1C00265EC (Feature_EnableGpuPVFor2_4Drivers__private_ReportDeviceUsage.c)
 *     Feature_IoMmuIsolationForGPUP__private_ReportDeviceUsage @ 0x1C0026650 (Feature_IoMmuIsolationForGPUP__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C003A510 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@34444@Z @ 0x1C003FF08 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapBuffer@U_UNICODE_STR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0125434 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02167E4 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0230248 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateVirtualGpu(ADAPTER_RENDER *a1, int a2, _DWORD *a3, unsigned __int8 a4)
{
  unsigned __int8 v5; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  _DWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _DWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // r9
  __int64 v32; // rcx
  struct _EPROCESS *v34; // [rsp+28h] [rbp-59h]
  void *v35; // [rsp+30h] [rbp-51h]
  __int64 v36; // [rsp+38h] [rbp-49h]
  __int64 v37; // [rsp+40h] [rbp-41h]
  int v38; // [rsp+78h] [rbp-9h] BYREF
  int v39; // [rsp+7Ch] [rbp-5h] BYREF
  int v40; // [rsp+80h] [rbp-1h] BYREF
  int v41; // [rsp+84h] [rbp+3h] BYREF
  int v42; // [rsp+88h] [rbp+7h] BYREF
  int v43; // [rsp+8Ch] [rbp+Bh] BYREF
  int v44; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v45; // [rsp+98h] [rbp+17h] BYREF
  unsigned __int16 *v46; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v47; // [rsp+A8h] [rbp+27h] BYREF
  struct DXGPROCESS *v48; // [rsp+B0h] [rbp+2Fh] BYREF

  v5 = a4;
  v7 = a2;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(
      (__int64)a1,
      &CreateVirtualGpuStart,
      (__int64)a3,
      *((_QWORD *)a1 + 2),
      *a3,
      a4,
      0,
      0);
  LODWORD(v10) = ADAPTER_RENDER::EnsureVirtualGpuProcess(a1);
  if ( (int)v10 < 0 )
  {
    v13 = 8;
    goto LABEL_36;
  }
  v14 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 2600LL);
  if ( (*v14 & 0x200) != 0 && v5 )
  {
    v15 = WdLogNewEntry5_WdError(v14, v8);
    *(_QWORD *)(v15 + 24) = 1226LL;
    WdLogEvent5_WdError(v15);
    LODWORD(v10) = -1073741823;
    v13 = 1;
    goto LABEL_36;
  }
  if ( g_ForceSecureVirtualMachine )
    v5 = 1;
  if ( (_DWORD)v7 == 1 )
    v16 = *((_QWORD *)a1 + 205);
  else
    v16 = *((_QWORD *)a1 + 204);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdError(v14, v8);
    *(_QWORD *)(v17 + 24) = 1240LL;
    WdLogEvent5_WdError(v17);
    LODWORD(v10) = -1073741811;
    v13 = 2;
    goto LABEL_36;
  }
  if ( !DXGPROCESS::GetCurrent((__int64)v14, v8, v11, v12) )
  {
    LODWORD(v10) = DXGPROCESS::CreateDxgProcess(&v48, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( (int)v10 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v20, v19, v18);
      *(_QWORD *)(v21 + 24) = 1256LL;
      WdLogEvent5_WdWarning(v21);
      v13 = 3;
      goto LABEL_36;
    }
  }
  if ( (_DWORD)v7 == 1 )
  {
    if ( v5 )
    {
      v22 = (_DWORD *)*((_QWORD *)a1 + 2);
      v23 = 9216LL;
      if ( (int)v22[582] < 9216 )
      {
LABEL_24:
        v24 = WdLogNewEntry5_WdError(v22, v23);
        *(_QWORD *)(v24 + 24) = 1272LL;
        WdLogEvent5_WdError(v24);
        LODWORD(v10) = -1073741637;
        v13 = 4;
        goto LABEL_36;
      }
      if ( v22[582] == 9216 )
      {
        Feature_EnableGpuPVFor2_4Drivers__private_ReportDeviceUsage();
        goto LABEL_24;
      }
      goto LABEL_27;
    }
  }
  else if ( !(_DWORD)v7 )
  {
    Feature_IoMmuIsolationForGPUP__private_ReportDeviceUsage();
    v22 = (_DWORD *)*((_QWORD *)a1 + 2);
LABEL_27:
    if ( (v22[515] & 0x800) != 0 )
    {
      v27 = ADAPTER_RENDER::EnableIoMmuIsolation(a1, v23, v18);
      v10 = v27;
      if ( v27 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
        v30[4] = v5;
        v30[3] = v7;
        v30[5] = v10;
        WdLogEvent5_WdError(v30);
        v13 = 6;
        goto LABEL_36;
      }
    }
    else if ( (v22[664] & 8) == 0 )
    {
      v25 = v22[87];
      if ( (v25 & 8) == 0 && (v25 & 4) == 0 )
      {
        v26 = WdLogNewEntry5_WdError(v22, v23);
        *(_QWORD *)(v26 + 24) = 1304LL;
        WdLogEvent5_WdError(v26);
        LODWORD(v10) = -1073741637;
        v13 = 5;
        goto LABEL_36;
      }
    }
  }
  LOBYTE(v18) = v5;
  v13 = 0;
  LODWORD(v10) = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v16 + 16LL))(v16, a3, v18);
  if ( (int)v10 < 0 )
    v13 = 7;
LABEL_36:
  if ( (unsigned int)dword_1C00B1A90 > 5 && tlgKeywordOn((__int64)&dword_1C00B1A90, 0x400000008000LL) )
  {
    v32 = *((_QWORD *)a1 + 2);
    v42 = v10;
    v43 = v13;
    v44 = v7;
    v38 = *(_DWORD *)(v32 + 336);
    v39 = *(_DWORD *)(v32 + 332);
    v40 = *(_DWORD *)(v32 + 328);
    v41 = *(_DWORD *)(v32 + 324);
    v45 = *(_QWORD *)(v32 + 316);
    v46 = *(unsigned __int16 **)(v32 + 1520);
    v47 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v32,
      byte_1C007EF86,
      v11,
      v31,
      (__int64)&v47,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      &v46,
      (__int64)&v45,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38);
  }
  if ( bTracingEnabled )
  {
    if ( (int)v10 < 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
    {
      LODWORD(v37) = v13;
      LODWORD(v36) = v10;
      LODWORD(v35) = v5;
      LODWORD(v34) = *a3;
      McTemplateK0pqtqq_EtwWriteTransfer(v9, &CreateVirtualGpuFailed, v11, *((_QWORD *)a1 + 2), v34, v35, v36, v37);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v37) = v13;
      LODWORD(v36) = v10;
      LODWORD(v35) = v5;
      LODWORD(v34) = *a3;
      McTemplateK0pqtqq_EtwWriteTransfer(v9, &CreateVirtualGpuEnd, v11, *((_QWORD *)a1 + 2), v34, v35, v36, v37);
    }
  }
  return (unsigned int)v10;
}
