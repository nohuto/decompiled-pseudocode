/*
 * XREFs of ?ResetTimer@CRapidHpdInfo@@AEAAXXZ @ 0x1C0230878
 * Callers:
 *     ?ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x1C00F7960 (-ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall CRapidHpdInfo::ResetTimer(CRapidHpdInfo *this)
{
  struct _GUID *v1; // r8
  int v2; // r9d
  int v3; // edx

  v1 = CRapidHpdInfo::s_pRapidHpdInfo;
  v2 = 1;
  ++CRapidHpdInfo::s_pRapidHpdInfo[1].Data1;
  *(_QWORD *)&v1->Data1 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
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
      (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids);
  }
}
