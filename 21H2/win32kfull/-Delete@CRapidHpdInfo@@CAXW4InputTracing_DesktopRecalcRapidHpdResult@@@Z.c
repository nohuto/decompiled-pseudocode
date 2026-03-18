/*
 * XREFs of ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C0122BD0
 * Callers:
 *     _lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_::operator() @ 0x1C00764F8 (_lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_--operator().c)
 *     EditionBaseDriverUnloadUninitialize @ 0x1C0111F50 (EditionBaseDriverUnloadUninitialize.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1C01222F0 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@W4StartRecalcOption@@@Z @ 0x1C015CB60 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 * Callees:
 *     ?TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z @ 0x1C021ECD4 (-TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z.c)
 *     ?RapidHpdComplete@DesktopRecalc@InputTraceLogging@@SAXW4InputTracing_DesktopRecalcRapidHpdResult@@IIIIU_GUID@@I@Z @ 0x1C0243F00 (-RapidHpdComplete@DesktopRecalc@InputTraceLogging@@SAXW4InputTracing_DesktopRecalcRapidHpdResult.c)
 */

void __fastcall CRapidHpdInfo::Delete(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v5; // r10d
  unsigned int v6; // r10d
  struct CRapidHpdInfo *v7; // rbx
  volatile signed __int32 *v8; // rcx
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  struct _GUID v10; // [rsp+50h] [rbp-18h] BYREF

  if ( CRapidHpdInfo::s_pRapidHpdInfo )
  {
    v4 = CMonitorTopology::CompareToCurrent(*((_QWORD *)CRapidHpdInfo::s_pRapidHpdInfo + 5), a2, a3);
    v5 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *((_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo + 2);
    v9 = *(_OWORD *)((char *)CRapidHpdInfo::s_pRapidHpdInfo + 24);
    InputTraceLogging::DesktopRecalc::RapidHpdComplete(
      a1,
      *((unsigned int *)CRapidHpdInfo::s_pRapidHpdInfo + 5),
      (unsigned int)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
    - *(_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo,
      *((unsigned int *)CRapidHpdInfo::s_pRapidHpdInfo + 4),
      v5,
      &v9,
      v4);
    v6 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *((_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo + 2);
    v10 = *(struct _GUID *)((char *)CRapidHpdInfo::s_pRapidHpdInfo + 24);
    TraceLoggingRapidHpdComplete(
      a1,
      *((_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo + 5),
      ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
    - *(_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo,
      *((_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo + 4),
      v6,
      &v10,
      v4);
    v7 = CRapidHpdInfo::s_pRapidHpdInfo;
    if ( CRapidHpdInfo::s_pRapidHpdInfo )
    {
      v8 = (volatile signed __int32 *)*((_QWORD *)CRapidHpdInfo::s_pRapidHpdInfo + 5);
      if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
        Win32FreePool(v8);
      Win32FreePool(v7);
    }
    CRapidHpdInfo::s_pRapidHpdInfo = 0LL;
  }
}
