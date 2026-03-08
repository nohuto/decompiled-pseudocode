/*
 * XREFs of ?VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037B8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?FindMappingFromHostId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1C0347E38 (-FindMappingFromHostId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER.c)
 *     ?NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z @ 0x1C03CD5E0 (-NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusHostMonitorPower(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r14
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v3; // rax
  DWORD LowPart; // ebx
  struct DXGADAPTER *v5; // rax
  DXGADAPTER *v6; // rsi
  __int64 v7; // rdi
  int v8; // r8d
  int v9; // edi
  __int64 HighPart; // rdi
  DXGDODPRESENT *v11; // rcx
  struct _LUID v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+68h] [rbp-98h]
  _BYTE v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = *((_QWORD *)a1 + 17);
  *(_OWORD *)&v13[0].LowPart = 0LL;
  v14 = *(_QWORD *)(v1 + 24);
  v15 = *(_DWORD *)(v1 + 32);
  Global = DXGGLOBAL::GetGlobal();
  if ( (int)REMOTEMONITORMAPPING::FindMappingFromHostId(
              (struct _KTHREAD **)Global + 38104,
              (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v14,
              (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)v13) >= 0 )
  {
    v3 = DXGGLOBAL::GetGlobal();
    LowPart = v13[0].LowPart;
    v5 = DXGGLOBAL::ReferenceAdapterByLuid(v3, v13[0], &v14);
    v6 = v5;
    if ( v5 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, v5, 0LL);
      v9 = COREADAPTERACCESS::AcquireExclusive((__int64)v16, (unsigned int)(v8 + 1));
      DXGADAPTER::ReleaseReference(v6);
      if ( v9 >= 0 )
      {
        if ( !*((_QWORD *)v6 + 366) )
        {
          v11 = *(DXGDODPRESENT **)(*((_QWORD *)v6 + 365) + 448LL);
          if ( v11 )
            DXGDODPRESENT::NotifyHostMonitorPowerState(v11, v13[1].HighPart, *(_BYTE *)(v1 + 36) & 1);
        }
      }
      else
      {
        HighPart = v13[0].HighPart;
        WdLogSingleEntry2(2LL, v13[0].HighPart, LowPart);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid adapter specified, AdapterLuid = 0x%08I64x%08I64x",
          HighPart,
          LowPart,
          0LL,
          0LL,
          0LL);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
    }
    else
    {
      v7 = v13[0].HighPart;
      WdLogSingleEntry2(2LL, v13[0].HighPart, LowPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid adapter specified, GuestAdapterLuid = 0x%08I64x%08I64x",
        v7,
        LowPart,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, *(int *)(v1 + 28), *(unsigned int *)(v1 + 24));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not find guest adapter info, HostAdapterLuid = 0x%08I64x%08I64x",
      *(int *)(v1 + 28),
      *(unsigned int *)(v1 + 24),
      0LL,
      0LL,
      0LL);
  }
  return 0;
}
