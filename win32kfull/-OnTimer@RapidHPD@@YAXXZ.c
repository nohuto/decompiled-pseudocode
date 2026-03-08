/*
 * XREFs of ?OnTimer@RapidHPD@@YAXXZ @ 0x1C00E0290
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00E3308 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C00F62D8 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C00FF304 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1C0228DAC (-OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 */

void __fastcall RapidHPD::OnTimer(RapidHPD *this)
{
  unsigned int v1; // ebx
  unsigned int v2; // esi
  int v3; // edx
  __int64 v4; // r8
  char v5; // di
  unsigned int v6; // eax
  __int64 v7; // rdx
  const struct _GUID *v8; // r8
  __int64 v9; // r9
  char v10; // dl
  __int64 v11; // [rsp+40h] [rbp-28h]
  char v12; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  if ( CRapidHpdInfo::s_pRapidHpdInfo )
  {
    v2 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - CRapidHpdInfo::s_pRapidHpdInfo->Data1;
    if ( v2 >= CRapidHpdInfo::s_timeoutMs )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v12);
      v5 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v3) = 0;
      }
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v3,
          v4,
          (_DWORD)gFullLog,
          4,
          23,
          14,
          (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids,
          v2,
          *(_DWORD *)&CRapidHpdInfo::s_pRapidHpdInfo[1].Data2);
      v6 = CMonitorTopology::CompareToCurrent(*(_QWORD *)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4, 0LL, v4);
      v9 = v6;
      if ( v6 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v10 = 0;
        }
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v11) = v6;
          WPP_RECORDER_AND_TRACE_SF_D(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v10,
            (char)v8,
            (__int64)gFullLog,
            4u,
            0x17u,
            0x10u,
            (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids,
            v11);
        }
        DesktopRecalc::OnRapidHpdComparisonFailed(
          *(DesktopRecalc **)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4,
          (struct CMonitorTopology *)CRapidHpdInfo::s_pRapidHpdInfo[1].Data4,
          v8);
        v1 = 1;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v5 = 0;
        }
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v7,
            (_DWORD)v8,
            (unsigned int)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids,
            4,
            23,
            15,
            (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids);
        }
      }
      CRapidHpdInfo::Delete(v1, v7, v8, v9);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v12);
    }
  }
}
