/*
 * XREFs of ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C0362A70
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C0365238 (DxgkDdiCreateVirtualGpu.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     Feature_IoMmuIsolationForGPUP__private_ReportDeviceUsage @ 0x1C00265AC (Feature_IoMmuIsolationForGPUP__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0040104 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@34444@Z @ 0x1C005A3A0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapBuffer@U_UNICODE_STR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C01A7864 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?EnableIommuForSecureVgpu@ADAPTER_RENDER@@AEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02BC364 (-EnableIommuForSecureVgpu@ADAPTER_RENDER@@AEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C03634E0 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateVirtualGpu(
        __int64 *a1,
        int a2,
        _DWORD *a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        __int64 a7)
{
  unsigned __int8 v7; // r13
  _DWORD *v8; // rdi
  int v9; // esi
  int v11; // r12d
  __int64 *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r15
  _DWORD *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rcx
  struct _EPROCESS *v26; // [rsp+28h] [rbp-81h]
  __int64 v27; // [rsp+30h] [rbp-79h]
  __int64 v28; // [rsp+38h] [rbp-71h]
  __int64 v29; // [rsp+40h] [rbp-69h]
  int v30; // [rsp+78h] [rbp-31h] BYREF
  int v31; // [rsp+7Ch] [rbp-2Dh] BYREF
  int v32; // [rsp+80h] [rbp-29h] BYREF
  int v33; // [rsp+84h] [rbp-25h] BYREF
  int v34; // [rsp+88h] [rbp-21h] BYREF
  int v35; // [rsp+8Ch] [rbp-1Dh] BYREF
  int v36; // [rsp+90h] [rbp-19h] BYREF
  struct DXGPROCESS *v37; // [rsp+98h] [rbp-11h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int16 *v39; // [rsp+A8h] [rbp-1h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer((__int64)a1, &CreateVirtualGpuStart, (__int64)a3, a1[2], *a3, a4, 0);
  v11 = 0;
  v12 = a1 + 2;
  LODWORD(v15) = ADAPTER_RENDER::EnsureVirtualGpuProcess((ADAPTER_RENDER *)a1);
  if ( (int)v15 >= 0 )
  {
    v16 = *(_DWORD **)(*v12 + 2824);
    if ( (*v16 & 0x200) != 0 && v7 )
    {
      WdLogSingleEntry1(2LL, 1456LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"CreateVirtualGpu failed due to blocklist disallowing paravirtualization for a high security scenario",
        1456LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v8 = a3;
      LODWORD(v15) = -1073741823;
      v11 = 1;
      goto LABEL_36;
    }
    if ( g_ForceSecureVirtualMachine )
      v7 = 1;
    if ( v9 == 1 )
      v17 = a1[234];
    else
      v17 = a1[233];
    if ( !v17 )
    {
      v11 = 2;
      WdLogSingleEntry1(2LL, 1470LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Creating a paravirtualzed GPU without setting partition count",
        1470LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v15) = -1073741811;
LABEL_16:
      v8 = a3;
LABEL_35:
      v9 = a2;
      goto LABEL_36;
    }
    if ( !DXGPROCESS::GetCurrent((__int64)v16) )
    {
      LODWORD(v15) = DXGPROCESS::CreateDxgProcess(&v37, 0LL, 0LL, 0, 0LL);
      if ( (int)v15 < 0 )
      {
        v11 = 3;
        WdLogSingleEntry1(3LL, 1486LL);
        goto LABEL_16;
      }
    }
    if ( a2 == 1 )
    {
      if ( !v7 )
        goto LABEL_33;
      if ( *(int *)(*v12 + 2552) <= 9216 )
      {
        WdLogSingleEntry1(2LL, 1502LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The driver model does not support secure virtual GPU",
          1502LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v15) = -1073741637;
        v11 = 4;
        goto LABEL_16;
      }
    }
    else
    {
      if ( a2 )
        goto LABEL_33;
      Feature_IoMmuIsolationForGPUP__private_ReportDeviceUsage();
    }
    v20 = *v12;
    if ( (*(_DWORD *)(*v12 + 2284) & 0x800) != 0 )
    {
      v22 = ADAPTER_RENDER::EnableIommuForSecureVgpu((ADAPTER_RENDER *)a1, *(struct SYSMM_ADAPTER **)(v20 + 224));
      v15 = v22;
      if ( v22 < 0 )
      {
        WdLogSingleEntry3(2LL, a2, v7, v22);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to enable IoMmu for virtual GPU. VirtualGpuType=%u, Secure=%u. Status=0x%.8x",
          a2,
          v7,
          v15,
          0LL,
          0LL);
        v11 = 6;
        goto LABEL_16;
      }
    }
    else if ( (*(_DWORD *)(v20 + 2880) & 8) == 0 )
    {
      v21 = *(_DWORD *)(v20 + 436);
      if ( (v21 & 8) == 0 && (v21 & 4) == 0 )
      {
        WdLogSingleEntry1(2LL, 1534LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The driver does not support IOMMU isolation and does not bypass this requirement for secure mode",
          1534LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v15) = -1073741637;
        v11 = 5;
        goto LABEL_16;
      }
    }
LABEL_33:
    LOBYTE(v18) = v7;
    v8 = a3;
    LOBYTE(v19) = a5;
    LOBYTE(v26) = a6;
    LODWORD(v15) = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64, _DWORD, __int64))(*(_QWORD *)v17 + 16LL))(
                     v17,
                     a3,
                     v18,
                     v19,
                     (_DWORD)v26,
                     a7);
    if ( (int)v15 < 0 )
      v11 = 7;
    goto LABEL_35;
  }
  v11 = 8;
LABEL_36:
  if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000008000LL) )
  {
    v24 = *v12;
    v34 = v15;
    v35 = v11;
    v36 = v9;
    v30 = *(_DWORD *)(v24 + 424);
    v31 = *(_DWORD *)(v24 + 420);
    v32 = *(_DWORD *)(v24 + 416);
    v33 = *(_DWORD *)(v24 + 412);
    v38 = *(_QWORD *)(v24 + 404);
    v39 = *(unsigned __int16 **)(v24 + 1744);
    v37 = (struct DXGPROCESS *)0x2000000;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v24,
      byte_1C00A0088,
      v14,
      v23,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      &v39,
      (__int64)&v38,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30);
  }
  if ( bTracingEnabled )
  {
    if ( (int)v15 < 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v29) = v11;
      LODWORD(v28) = v15;
      LODWORD(v27) = v7;
      LODWORD(v26) = *v8;
      McTemplateK0pqtqq_EtwWriteTransfer(v13, &CreateVirtualGpuFailed, v14, *v12, v26, v27, v28, v29);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v29) = v11;
      LODWORD(v28) = v15;
      LODWORD(v27) = v7;
      LODWORD(v26) = *v8;
      McTemplateK0pqtqq_EtwWriteTransfer(v13, &CreateVirtualGpuEnd, v14, *v12, v26, v27, v28, v29);
    }
  }
  return (unsigned int)v15;
}
