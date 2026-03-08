/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1C01D6220
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1C00157DC (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0024530 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z @ 0x1C004C7CC (-ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1C01D683C (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C01D6DA8 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     DxgkCaptureQueryInterface @ 0x1C02D93FC (DxgkCaptureQueryInterface.c)
 *     ?SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z @ 0x1C0310B84 (-SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z.c)
 *     ?DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z @ 0x1C0358E24 (-DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkInternalDeviceIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rbx
  struct _DXGWSL_INTERFACE *v10; // r14
  __int64 v11; // r8
  int *v12; // rax
  int i; // edx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(); // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct DXGGLOBAL *v18; // rax
  int TestInterface; // eax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rax
  const wchar_t *v23; // r9
  DXGGLOBAL *v24; // rax
  int v25; // eax
  struct DXGKW32KIMPORTS **Global; // rax
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // r8
  int v32; // [rsp+50h] [rbp-20h] BYREF
  __int64 v33; // [rsp+58h] [rbp-18h]
  char v34; // [rsp+60h] [rbp-10h]
  unsigned int v35; // [rsp+A8h] [rbp+38h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(1LL, &EventProfilerEnter, a3, 2);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2);
  v4 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  v35 = 0;
  v6 = *(unsigned int *)(v5 + 24);
  v7 = *(unsigned int *)(v5 + 8);
  v8 = *(unsigned int *)(v5 + 16);
  if ( *(_BYTE *)(a2 + 64) )
  {
    WdLogSingleEntry1(1LL, 1162LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pIrp->RequestorMode == KernelMode",
      1162LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (v6 & 3) != 3 )
  {
    WdLogSingleEntry1(1LL, 1168LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"METHOD_FROM_CTL_CODE(Ioctl) == METHOD_NEITHER",
      1168LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *(_QWORD *)(a2 + 112);
  v10 = *(struct _DXGWSL_INTERFACE **)(v5 + 32);
  if ( (unsigned int)v6 > 0x232063 )
  {
    switch ( (_DWORD)v6 )
    {
      case 0x23E057:
        if ( (unsigned int)v8 < 0x318 || (unsigned int)v7 < 0x318 )
        {
          v27 = v7;
          v28 = v8;
          LODWORD(v8) = -1073741306;
          WdLogSingleEntry4(1LL, v28, v27, 792LL, -1073741306LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Invalid lengths specified for IOCTL_INTERNAL_VIDEO_QUERY_WIN32K_INTERFACE (Input = 0n%I64d, Output "
                      "= 0n%I64d, sizeof(DXGKWIN32K_INTERFACE) = 0n%I64d), returing 0x%I64x",
            v28,
            v27,
            792LL,
            -1073741306LL,
            0LL);
          goto LABEL_90;
        }
        Global = (struct DXGKW32KIMPORTS **)DXGGLOBAL::GetGlobal();
        LODWORD(v8) = DXGGLOBAL::DelayLoadWin32k(Global, *(void **)(v9 + 8));
        if ( (int)v8 >= 0 )
        {
          LODWORD(v8) = DxgkWin32kQueryInterface((struct _DXGKWIN32K_INTERFACE *)v9, &v35);
          if ( (int)v8 >= 0 )
          {
LABEL_79:
            v4 = v35;
            goto LABEL_90;
          }
          v4 = v35;
        }
LABEL_87:
        v20 = (int)v8;
        goto LABEL_88;
      case 0x23E05B:
        if ( (unsigned int)v8 < 0x210 || (unsigned int)v7 < 0x210 )
          goto LABEL_80;
        v25 = DxgkCddQueryInterface(*(struct _DXGKCDD_INTERFACE **)(a2 + 112), &v35);
        break;
      case 0x23E05F:
        if ( (unsigned int)v8 < 0x30 || (unsigned int)v7 < 0x30 )
          goto LABEL_80;
        v25 = DxgkCaptureQueryInterface(*(_QWORD *)(a2 + 112), &v35);
        break;
      default:
        v11 = 8LL;
        if ( (_DWORD)v6 != 2351207 )
        {
          if ( (_DWORD)v6 == 2351211 )
          {
            if ( (unsigned int)v8 >= 0xC )
            {
              if ( *((_DWORD *)v10 + 2) == 1 )
              {
                v21 = *((_DWORD *)v10 + 1);
                if ( v21 == 1 )
                {
                  if ( *(_DWORD *)v10 == 80 )
                  {
                    v24 = DXGGLOBAL::GetGlobal();
                    LODWORD(v8) = DXGGLOBAL::SetWslInterface(v24, v10);
                    goto LABEL_90;
                  }
                  WdLogSingleEntry1(2LL, *(unsigned int *)v10);
                  v22 = *(unsigned int *)v10;
                  v23 = L"Invalid size of DXGWSL_INTERFACE: %I64x";
                }
                else
                {
                  WdLogSingleEntry1(2LL, v21);
                  v22 = *((unsigned int *)v10 + 1);
                  v23 = L"Invalid version of DXGINTERFACE_WSL: %I64x";
                }
              }
              else
              {
                WdLogSingleEntry1(2LL, *((int *)v10 + 2));
                v22 = *((int *)v10 + 2);
                v23 = L"Invalid interface type in IOCTL_INTERNAL_VIDEO_SET_INTERFACE: %I64x";
              }
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, v22, 0LL, 0LL, 0LL, 0LL);
              goto LABEL_63;
            }
            v14 = v8;
            v8 = -1073741306LL;
            goto LABEL_58;
          }
          if ( (_DWORD)v6 != 2351215 )
            goto LABEL_51;
          if ( (unsigned int)v8 < 8 )
            goto LABEL_53;
          TestInterface = DxgkpQueryTestInterface(
                            *(_QWORD *)(a2 + 112),
                            (unsigned int)v7,
                            *(unsigned int *)v10,
                            *((unsigned int *)v10 + 1));
          LODWORD(v8) = TestInterface;
          if ( TestInterface >= 0 )
            goto LABEL_90;
          v20 = TestInterface;
LABEL_88:
          WdLogSingleEntry1(3LL, v20);
          goto LABEL_90;
        }
        if ( (unsigned int)v8 >= 0x268 && (unsigned int)v7 >= 0x268 )
        {
          v25 = ComputeQueryInterface(*(struct _DXGKCOMPUTE_INTERFACE **)(a2 + 112), &v35);
          break;
        }
LABEL_80:
        v16 = v8;
        v17 = v7;
        v8 = -1073741306LL;
        goto LABEL_81;
    }
    LODWORD(v8) = v25;
    if ( v25 < 0 )
      WdLogSingleEntry1(3LL, v25);
    goto LABEL_79;
  }
  switch ( (_DWORD)v6 )
  {
    case 0x232063:
      if ( (unsigned int)v7 >= 8 && v9 )
      {
        v15 = (__int64 (__fastcall *)())DpiReportSoftwareDevice;
        goto LABEL_32;
      }
LABEL_28:
      v16 = v7;
      v8 = -1073741789LL;
      v17 = *(_QWORD *)(a2 + 112);
LABEL_81:
      WdLogSingleEntry3(3LL, v16, v17, v8);
      goto LABEL_90;
    case 0x230007:
      v18 = DXGGLOBAL::GetGlobal();
      v35 = -1073741275;
      LODWORD(v8) = DXGGLOBAL::IterateAdaptersWithCallback(
                      (__int64)v18,
                      (__int64 (__fastcall *)(_QWORD *, __int64))RfxVgpuResetCallback,
                      (__int64)&v35,
                      0);
      if ( (int)v8 >= 0 )
      {
        LODWORD(v8) = v35;
        if ( (v35 & 0x80000000) == 0 )
          goto LABEL_90;
      }
      goto LABEL_87;
    case 0x23003F:
      if ( (unsigned int)v7 >= 8 && v9 )
      {
        v15 = (__int64 (__fastcall *)())DpiInitialize;
        goto LABEL_32;
      }
      goto LABEL_28;
    case 0x230043:
      if ( (unsigned int)v7 >= 8 && v9 )
      {
        v15 = (__int64 (__fastcall *)())DpiKmdDodInitialize;
        goto LABEL_32;
      }
      goto LABEL_28;
    case 0x230047:
      if ( (unsigned int)v7 >= 8 && v9 )
      {
        v15 = (__int64 (__fastcall *)())DpiInitializeWin8;
        goto LABEL_32;
      }
      goto LABEL_28;
    case 0x23004B:
      if ( (unsigned int)v7 >= 8 && v9 )
      {
        v15 = DpiUnInitialize;
LABEL_32:
        *(_QWORD *)v9 = v15;
        LODWORD(v8) = 0;
        v4 = 8;
        goto LABEL_90;
      }
      goto LABEL_28;
  }
  if ( (_DWORD)v6 != 2293839 )
  {
LABEL_51:
    v14 = v6;
    v8 = -1073741808LL;
    goto LABEL_58;
  }
  if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
  {
    v14 = v6;
    v8 = -1073741808LL;
LABEL_58:
    WdLogSingleEntry2(3LL, v14, v8);
    goto LABEL_90;
  }
  v11 = 16LL;
  if ( (unsigned int)v8 < 0x10 )
  {
LABEL_53:
    WdLogSingleEntry2(3LL, v8, v11);
    LODWORD(v8) = -1073741306;
    goto LABEL_90;
  }
  v12 = (int *)*((_QWORD *)v10 + 1);
  if ( *v12 != 36 )
  {
    WdLogSingleEntry2(3LL, *v12, -1073741811LL);
LABEL_63:
    LODWORD(v8) = -1073741811;
    goto LABEL_90;
  }
  for ( i = 0; i < 2; *(_WORD *)(*((_QWORD *)v10 + 1) + 10LL) |= i )
    ++i;
  *(_WORD *)(*((_QWORD *)v10 + 1) + 10LL) |= 8u;
  LODWORD(v8) = 0;
LABEL_90:
  *(_QWORD *)(a2 + 56) = v4;
  *(_DWORD *)(a2 + 48) = v8;
  IofCompleteRequest((PIRP)a2, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v32);
  return (unsigned int)v8;
}
