/*
 * XREFs of ??0CRapidHpdInfo@@AEAA@PEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1C023061C
 * Callers:
 *     ?ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x1C00F7960 (-ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

CRapidHpdInfo *__fastcall CRapidHpdInfo::CRapidHpdInfo(
        CRapidHpdInfo *this,
        struct CMonitorTopology *a2,
        const struct _GUID *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // dl
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
    v7 = 0;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x17u,
      0xBu,
      (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids,
      CRapidHpdInfo::s_timeoutMs);
  return this;
}
