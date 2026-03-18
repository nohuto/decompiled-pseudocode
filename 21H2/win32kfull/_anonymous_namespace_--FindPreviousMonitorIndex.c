/*
 * XREFs of _anonymous_namespace_::FindPreviousMonitorIndex @ 0x1C00B0460
 * Callers:
 *     ?GetMigrateMonitor@AdvancedWindowPos@@YAPEAUtagMONITOR@@PEBUtagWND@@AEBUtagRECT@@AEBVCMonitorTopology@@PEA_N@Z @ 0x1C00B0174 (-GetMigrateMonitor@AdvancedWindowPos@@YAPEAUtagMONITOR@@PEBUtagWND@@AEBUtagRECT@@AEBVCMonitorTop.c)
 *     _anonymous_namespace_::GetPreviousMonitorInfo @ 0x1C00B02C8 (_anonymous_namespace_--GetPreviousMonitorInfo.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     CalculateLogicalMonitorRect @ 0x1C00B0650 (CalculateLogicalMonitorRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1C00B27A0 (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 */

__int64 __fastcall anonymous_namespace_::FindPreviousMonitorIndex(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // r15
  int *v4; // r14
  char v6; // si
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  unsigned int i; // edi
  __int128 *v10; // rax
  unsigned int v11; // eax
  int v12; // r8d
  unsigned int v13; // ecx
  int v15; // r8d
  __int128 v16; // [rsp+80h] [rbp-58h] BYREF
  __int128 v17; // [rsp+90h] [rbp-48h] BYREF
  char v18; // [rsp+A0h] [rbp-38h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_qdddddd(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, v4[3] - v4[1], 5);
  v7 = -1;
  v8 = 0;
  for ( i = 0; i < *(_DWORD *)(v3 + 8); ++i )
  {
    v10 = (__int128 *)CalculateLogicalMonitorRect(
                        (unsigned int)&v18,
                        (unsigned int)v3 + 8 * (9 * i + 3),
                        *(unsigned __int16 *)(v3 + 72LL * i + 56),
                        (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) >> 8) & 0x1FF,
                        *(_WORD *)(v3 + 12));
    v16 = 0LL;
    v17 = *v10;
    if ( (unsigned int)IntersectRect(&v16, v4, (int *)&v17) )
    {
      v11 = i;
      v12 = HIDWORD(v16) - DWORD1(v16);
      LODWORD(a2) = DWORD2(v16) - v16;
      v13 = (DWORD2(v16) - v16) * (HIDWORD(v16) - DWORD1(v16));
      DWORD2(v16) -= v16;
      HIDWORD(v16) -= DWORD1(v16);
      if ( v13 <= v8 )
      {
        v13 = v8;
        v11 = v7;
      }
      v8 = v13;
      v7 = v11;
      if ( (_DWORD)a2 == v4[2] - *v4 && v12 == v4[3] - v4[1] )
        break;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)a2 || v6 )
  {
    v15 = 31;
    LOBYTE(v15) = v6;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v15,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      5,
      25,
      31,
      (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
      v7);
  }
  return v7;
}
