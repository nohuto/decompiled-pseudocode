/*
 * XREFs of ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0221B50
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorSetUsageClass @ 0x1C02F5688 (MonitorSetUsageClass.c)
 */

__int64 __fastcall DxgkEnableDisableTargetAsHMD(
        struct _D3DKMT_SOFTGPU_LUID_TARGET *a1,
        __int64 a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct _LUID *v6; // r14
  __int64 v7; // rdi
  int *v8; // rbx
  __int64 v9; // rbp
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGADAPTER *v14; // rsi
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v23; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v24[144]; // [rsp+30h] [rbp-C8h] BYREF

  v6 = (struct _LUID *)a1;
  LODWORD(v7) = -1073741811;
  if ( (unsigned int)a2 <= 0x10 && (_DWORD)a2 )
  {
    v8 = (int *)((char *)a1 + 4);
    v9 = (unsigned int)a2;
    while ( 1 )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
      v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v6, &v23);
      v14 = v11;
      if ( v11 )
        break;
      LODWORD(v7) = -1073741811;
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v15[3] = *v8;
      v15[4] = (unsigned int)*(v8 - 1);
      v15[5] = -1073741811LL;
      WdLogEvent5_WdError(v15);
LABEL_13:
      v6 = (struct _LUID *)((char *)v6 + 12);
      v8 += 3;
      if ( !--v9 )
        return (unsigned int)v7;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v11, 0LL);
    DXGADAPTER::ReleaseReference(v14);
    v16 = COREADAPTERACCESS::AcquireExclusive((__int64)v24, 1LL);
    v7 = v16;
    if ( v16 >= 0 )
    {
      if ( !*((_QWORD *)v14 + 337) )
        goto LABEL_12;
      v20 = MonitorSetUsageClass(v14, (unsigned int)v8[1], a3 != 0, a4);
      v7 = v20;
      if ( v20 >= 0 )
        goto LABEL_12;
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v21, v17);
      v19[3] = (unsigned int)v8[1];
      v19[4] = *v8;
      v19[5] = (unsigned int)*(v8 - 1);
      v19[6] = v7;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
      v19[3] = *v8;
      v19[4] = (unsigned int)*(v8 - 1);
      v19[5] = v7;
    }
    WdLogEvent5_WdError(v19);
LABEL_12:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24, v17);
    goto LABEL_13;
  }
  return (unsigned int)v7;
}
