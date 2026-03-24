/*
 * XREFs of _lambda_933b32e0a92a62a544db01ace2b25516_::operator() @ 0x1C00D7CE4
 * Callers:
 *     ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0251200 (-VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_VAIL_Fake_Monitor_Projection__private_ReportDeviceUsage @ 0x1C00267E8 (Feature_VAIL_Fake_Monitor_Projection__private_ReportDeviceUsage.c)
 *     Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage @ 0x1C00268B0 (Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage.c)
 *     ?AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z @ 0x1C004F390 (-AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z.c)
 *     ?RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x1C004F6F8 (-RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 */

__int64 __fastcall lambda_933b32e0a92a62a544db01ace2b25516_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  KSPIN_LOCK *v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rax
  struct _LUID v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+3Ch] [rbp-1Ch]
  __int64 v14; // [rsp+40h] [rbp-18h]
  __int64 v15; // [rsp+48h] [rbp-10h]

  Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage();
  v3 = **a1;
  if ( *(_DWORD *)(v3 + 48) < 2u )
  {
    Feature_VAIL_Fake_Monitor_Projection__private_ReportDeviceUsage();
    v8 = (KSPIN_LOCK *)((char *)DXGGLOBAL::GetGlobal(v7, v6) + 304672);
    v9 = **a1;
    v10 = a1[1];
    if ( (*(_DWORD *)(v9 + 48) & 1) != 0 )
    {
      v13 = 0;
      v14 = *(_QWORD *)(*v10 + 32);
      v11 = *(struct _LUID *)(v9 + 24);
      v12 = *(_DWORD *)(v9 + 32);
      v15 = *(_QWORD *)(v9 + 40);
      return REMOTEVSYNCMAPPING::AddMapping(v8, &v11);
    }
    else
    {
      return REMOTEVSYNCMAPPING::RemoveMapping(
               (REMOTEVSYNCMAPPING *)v8,
               *(void **)(*v10 + 32),
               *(struct _LUID *)(v9 + 24),
               *(_DWORD *)(v9 + 32),
               *(void **)(v9 + 40));
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2, v3);
    *(_QWORD *)(v4 + 24) = 6982LL;
    WdLogEvent5_WdError(v4);
    return 3221225714LL;
  }
}
