/*
 * XREFs of ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1C00FE8D0
 * Callers:
 *     ?GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00FB688 (-GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00FBCB8 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00FD034 (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C023F6F0 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C024060C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?LogicalMonitorRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C00FEAF0 (-LogicalMonitorRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A7638 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1C01F43A8 (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 */

const struct CMonitorTopology::MonitorData *__fastcall CMonitorTopology::MonitorDataFromRect(
        CMonitorTopology *this,
        const struct tagWND *a2,
        struct tagRECT *a3)
{
  const struct tagWND *v4; // r9
  LONG right; // r8d
  LONG left; // r15d
  LONG bottom; // ecx
  LONG top; // r14d
  char v10; // si
  unsigned int v11; // r12d
  char *v12; // rbp
  unsigned int v13; // edi
  int v14; // edx
  unsigned int v15; // ecx
  char *v16; // rax
  int v18; // r8d
  int v19; // edx
  __int128 v20; // [rsp+80h] [rbp-58h] BYREF
  struct tagRECT v21; // [rsp+90h] [rbp-48h] BYREF
  const struct tagWND *v22; // [rsp+E8h] [rbp+10h]

  v22 = a2;
  v4 = a2;
  right = a3->right;
  left = a3->left;
  if ( right == a3->left )
    a3->right = right + 1;
  bottom = a3->bottom;
  top = a3->top;
  if ( bottom == top )
    a3->bottom = ++bottom;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(right) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(right) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)right )
  {
    WPP_RECORDER_AND_TRACE_SF_qdddddd(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, right, bottom - top);
    v4 = v22;
  }
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_38;
  do
  {
    CMonitorTopology::MonitorData::LogicalMonitorRect(
      (CMonitorTopology *)((char *)this + 64 * v13 + 8 * v13 + 16),
      &v21,
      v4);
    v20 = 0LL;
    if ( (unsigned int)IntersectRect(&v20, a3, &v21) )
    {
      v15 = (DWORD2(v20) - v20) * (HIDWORD(v20) - DWORD1(v20));
      v16 = (char *)this + 64 * v13 + 8 * v13 + 16;
      if ( v15 <= v11 )
      {
        v16 = v12;
        v15 = v11;
      }
      v12 = v16;
      v11 = v15;
      if ( *((_QWORD *)&v20 + 1) == __PAIR64__(a3->bottom - top, a3->right - left) )
        break;
    }
    v4 = v22;
    ++v13;
  }
  while ( v13 < *((_DWORD *)this + 2) );
  if ( v12 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v14 || v10 )
    {
      v18 = 19;
      LOBYTE(v18) = v10;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v18,
        (_DWORD)gFullLog,
        5,
        23,
        19,
        (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids,
        *((_DWORD *)v12 + 2),
        *((_DWORD *)v12 + 3),
        *((_DWORD *)v12 + 4),
        *((_DWORD *)v12 + 5),
        v12[16] - v12[8],
        v12[20] - v12[12]);
    }
  }
  else
  {
LABEL_38:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = a3->bottom - top;
      LOBYTE(v19) = v10;
      LOBYTE(right) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        right,
        (_DWORD)gFullLog,
        3,
        23,
        20,
        (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids,
        left,
        top,
        a3->right,
        a3->bottom,
        LOBYTE(a3->right) - left,
        LOBYTE(a3->bottom) - top);
    }
  }
  return (const struct CMonitorTopology::MonitorData *)v12;
}
