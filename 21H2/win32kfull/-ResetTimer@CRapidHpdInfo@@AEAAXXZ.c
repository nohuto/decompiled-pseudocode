/*
 * XREFs of ?ResetTimer@CRapidHpdInfo@@AEAAXXZ @ 0x1C0244068
 * Callers:
 *     ?ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x1C011E624 (-ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall CRapidHpdInfo::ResetTimer(CRapidHpdInfo *this)
{
  struct CRapidHpdInfo *v1; // r8
  int v2; // r9d
  int v3; // edx

  v1 = CRapidHpdInfo::s_pRapidHpdInfo;
  v2 = 1;
  ++*((_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo + 4);
  *(_QWORD *)v1 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(v2) = 0;
  }
  if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 13;
    LOBYTE(v3) = v2;
    LOBYTE(v1) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      (_DWORD)v1,
      v2,
      4,
      23,
      13,
      (__int64)&WPP_09036311ad093020396ace1b470b3bee_Traceguids);
  }
}
