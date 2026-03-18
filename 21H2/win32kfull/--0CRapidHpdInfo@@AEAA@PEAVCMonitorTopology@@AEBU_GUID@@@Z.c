/*
 * XREFs of ??0CRapidHpdInfo@@AEAA@PEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1C0243E0C
 * Callers:
 *     ?ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x1C011E624 (-ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

CRapidHpdInfo *__fastcall CRapidHpdInfo::CRapidHpdInfo(
        CRapidHpdInfo *this,
        struct CMonitorTopology *a2,
        const struct _GUID *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  __int128 v8; // xmm0

  *(_QWORD *)this = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v5 = MEMORY[0xFFFFF78000000320];
  v6 = MEMORY[0xFFFFF78000000004];
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_QWORD *)this + 1) = ((unsigned __int64)(v6 << 32) * (unsigned __int128)(unsigned __int64)(v5 << 8)) >> 64;
  v7 = 1;
  v8 = (__int128)*a3;
  *((_QWORD *)this + 5) = a2;
  *(_OWORD *)((char *)this + 24) = v8;
  _InterlockedAdd((volatile signed __int32 *)a2, 1u);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      11,
      (__int64)&WPP_09036311ad093020396ace1b470b3bee_Traceguids,
      CRapidHpdInfo::s_timeoutMs);
  }
  return this;
}
