/*
 * XREFs of _lambda_42ee479a8e982a1e9231e91789050ae8_::operator() @ 0x1C036D608
 * Callers:
 *     ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0390720 (-VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage @ 0x1C00266D8 (Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage.c)
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C0056E0C (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x1C00573B4 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 */

__int64 __fastcall lambda_42ee479a8e982a1e9231e91789050ae8_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _LUID v9; // [rsp+50h] [rbp-38h] BYREF
  int v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  __int64 v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]
  __int64 v15; // [rsp+70h] [rbp-18h]
  __int64 v16; // [rsp+78h] [rbp-10h]

  Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage();
  v2 = **a1;
  if ( *(_QWORD *)(v2 + 40) )
  {
    if ( *(_DWORD *)(v2 + 48) < 2u )
    {
      Global = DXGGLOBAL::GetGlobal();
      v5 = a1[1];
      v6 = **a1;
      if ( (*(_DWORD *)(v6 + 48) & 1) != 0 )
      {
        v7 = *v5;
        v8 = *(_QWORD *)(*(_QWORD *)(v7 + 96) + 608LL);
        v11 = 0;
        v14 = 0;
        v16 = 0LL;
        v12 = *(_QWORD *)(v7 + 104) + 160LL;
        v9 = *(struct _LUID *)(v6 + 24);
        v10 = *(_DWORD *)(v6 + 32);
        v15 = *(_QWORD *)(v6 + 40);
        v13 = *(_DWORD *)(v8 + 392);
        return HOSTVMMONITORMAPPING::AddMapping((KSPIN_LOCK *)Global + 38111, &v9);
      }
      else
      {
        return HOSTVMMONITORMAPPING::RemoveMapping(
                 (struct DXGGLOBAL *)((char *)Global + 304888),
                 (void *)(*(_QWORD *)(*v5 + 104) + 160LL),
                 *(struct _LUID *)(v6 + 24),
                 *(_DWORD *)(v6 + 32),
                 *(void **)(v6 + 40));
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 7968LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Flags.Unused was not zero, failing request",
        7968LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225714LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 7962LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"pGuestVsyncEvent is zero, failing request",
      7962LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225713LL;
  }
}
