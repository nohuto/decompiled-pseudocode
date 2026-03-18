/*
 * XREFs of ?GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z @ 0x1C00BFA88
 * Callers:
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x1C00BF780 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     GreGetMonitorHash @ 0x1C00BFBE0 (GreGetMonitorHash.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00BFCAC (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00C0F08 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMonitorTopology::GetMonitorId(struct tagMONITOR *a1, struct CMonitorTopology::MonitorId *a2)
{
  struct CMonitorTopology::MonitorId *v2; // rdi
  __int64 v3; // r14
  char v4; // bl
  char v5; // r8
  void *v6; // r9
  int MonitorHash; // esi
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rax
  int v11; // edx
  _DWORD *v12; // rbp
  __int64 v13; // r9
  char v14; // dl
  __int64 v15; // [rsp+40h] [rbp-68h]
  unsigned int v16; // [rsp+B0h] [rbp+8h] BYREF
  int v17; // [rsp+B8h] [rbp+10h]

  *(_OWORD *)a2 = 0LL;
  v2 = a2;
  *((_QWORD *)a2 + 2) = 0LL;
  v3 = *((_QWORD *)a1 + 10);
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  v6 = &WPP_b503bcdc7a733346aed43161a8297e0b_Traceguids;
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v5,
      (unsigned int)&WPP_b503bcdc7a733346aed43161a8297e0b_Traceguids,
      5,
      7,
      10,
      (__int64)&WPP_b503bcdc7a733346aed43161a8297e0b_Traceguids,
      v3);
  v16 = 1;
  MonitorHash = GreGetMonitorHash(v3, &v16, v2, v6);
  if ( MonitorHash == -1073741789 )
  {
    v10 = v16;
    if ( v16 <= 1 )
    {
      v17 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 193LL);
      v10 = v16;
    }
    v12 = (_DWORD *)Win32AllocPoolZInit(20 * v10, 1919775573LL);
    if ( !v12 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v14 = 0;
      }
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v15) = v16;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v14,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          2u,
          7u,
          0xCu,
          (__int64)&WPP_b503bcdc7a733346aed43161a8297e0b_Traceguids,
          v15);
      }
      goto LABEL_13;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v8) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v11 || (_BYTE)v8 )
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v8,
        (_DWORD)gFullLog,
        5,
        7,
        11,
        (__int64)&WPP_b503bcdc7a733346aed43161a8297e0b_Traceguids,
        v3,
        v16);
    MonitorHash = GreGetMonitorHash(v3, &v16, v12, v13);
    if ( MonitorHash >= 0 )
    {
      *(_OWORD *)v2 = *(_OWORD *)v12;
      *((_DWORD *)v2 + 4) = v12[4];
      *((_BYTE *)v2 + 20) = 1;
    }
    Win32FreePool(v12);
  }
  if ( MonitorHash >= 0 )
  {
    *((_BYTE *)v2 + 21) = 1;
    return;
  }
LABEL_13:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 13;
    LOBYTE(v9) = v4;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v8,
      (_DWORD)gFullLog,
      3,
      7,
      13,
      (__int64)&WPP_b503bcdc7a733346aed43161a8297e0b_Traceguids,
      MonitorHash,
      v16);
  }
}
