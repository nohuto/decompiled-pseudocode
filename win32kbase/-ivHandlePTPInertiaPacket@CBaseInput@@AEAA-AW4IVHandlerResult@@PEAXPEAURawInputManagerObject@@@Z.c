/*
 * XREFs of ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021F300
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0039D28 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C003A054 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C0212654 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     FindRimDevByName @ 0x1C0221134 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C0221F28 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandlePTPInertiaPacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rbx
  int v6; // edi
  unsigned int v7; // esi
  __int64 RimDevByName; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  void *v17; // rdx
  char v19; // [rsp+78h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = 0LL;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      47,
      (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
  *(_QWORD *)(v4 + 8) = v4 + (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v19, 1LL, a3);
  RIMLockExclusive(v3 + 104);
  if ( (unsigned __int8)IsRimObjectUnregistered(v3) )
  {
    *(_QWORD *)(v3 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
    KeLeaveCriticalRegion();
    v7 = 2;
  }
  else
  {
    RimDevByName = FindRimDevByName((PCUNICODE_STRING)v4);
    *(_QWORD *)(v3 + 112) = 0LL;
    v9 = v3 + 104;
    v10 = RimDevByName;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
    if ( v10 )
    {
      v14 = *(_QWORD *)(v10 + 472);
      if ( v14 && *(_DWORD *)(v14 + 24) == 7 )
      {
        if ( *(_QWORD *)(v10 + 32) != -72LL )
          v5 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 72LL);
        v15 = SGDGetUserSessionState(v14, v11, v12, v13);
        CHidInput::ProcessPTPInertiaActions(*(CHidInput **)(v15 + 16840), v5, *(_QWORD *)(v4 + 16), v16);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        LOBYTE(v6) = 0;
      }
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = &WPP_6faef5775b8438fac85e142323c35be9_Traceguids;
        LOBYTE(v17) = v6;
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v17,
          v12,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          48,
          (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
      }
      v6 = 0;
    }
    v7 = v6;
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v19);
  return v7;
}
