/*
 * XREFs of ?GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z @ 0x1C00E3100
 * Callers:
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x1C00E2DF4 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     GreGetMonitorHash @ 0x1C00E325C (GreGetMonitorHash.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00E3308 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00FAFB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMonitorTopology::GetMonitorId(struct tagMONITOR *a1, struct CMonitorTopology::MonitorId *a2)
{
  __int64 v3; // r14
  char v4; // bl
  char v5; // dl
  char v6; // r8
  void *v7; // r9
  int MonitorHash; // esi
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rax
  int v12; // edx
  _DWORD *v13; // rbp
  __int64 v14; // r9
  char v15; // dl
  __int64 v16; // [rsp+40h] [rbp-68h]
  unsigned int v17; // [rsp+B0h] [rbp+8h] BYREF
  int v18; // [rsp+B8h] [rbp+10h]

  *(_OWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  v3 = *((_QWORD *)a1 + 10);
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v5 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v6 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v6 = 0;
  }
  v7 = &WPP_aeca42301358371308ca40d05b2a9235_Traceguids;
  if ( v5 || v6 )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids,
      5u,
      0x17u,
      0xAu,
      (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids,
      v3);
  v17 = 1;
  MonitorHash = GreGetMonitorHash(v3, &v17, a2, v7);
  if ( MonitorHash == -1073741789 )
  {
    v11 = v17;
    if ( v17 <= 1 )
    {
      v18 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 193LL);
      v11 = v17;
    }
    v13 = (_DWORD *)Win32AllocPoolZInit(20 * v11, 1919775573LL);
    if ( !v13 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v15 = 0;
      }
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = v17;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v15,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          2u,
          0x17u,
          0xCu,
          (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids,
          v16);
      }
      goto LABEL_13;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v9) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v12 || (_BYTE)v9 )
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v9,
        (_DWORD)gFullLog,
        5,
        23,
        11,
        (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids,
        v3,
        v17);
    MonitorHash = GreGetMonitorHash(v3, &v17, v13, v14);
    if ( MonitorHash >= 0 )
    {
      *(_OWORD *)a2 = *(_OWORD *)v13;
      *((_DWORD *)a2 + 4) = v13[4];
      *((_BYTE *)a2 + 20) = 1;
    }
    Win32FreePool(v13);
  }
  if ( MonitorHash >= 0 )
  {
    *((_BYTE *)a2 + 21) = 1;
    return;
  }
LABEL_13:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 13;
    LOBYTE(v10) = v4;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v9,
      (_DWORD)gFullLog,
      3,
      23,
      13,
      (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids,
      MonitorHash,
      v17);
  }
}
