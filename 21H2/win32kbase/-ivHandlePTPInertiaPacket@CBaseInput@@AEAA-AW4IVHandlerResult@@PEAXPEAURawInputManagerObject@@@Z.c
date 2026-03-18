/*
 * XREFs of ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C004763C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0047C7C (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01E2B54 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     FindRimDevByName @ 0x1C01F0198 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01F0D9C (IsRimObjectUnregistered.c)
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
  int v11; // r8d
  __int64 v12; // r9
  CHidInput *v13; // rcx
  void *v14; // rdx
  char v16; // [rsp+78h] [rbp+10h] BYREF

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
      (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
  *(_QWORD *)(v4 + 8) = v4 + (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v16, 1LL, a3);
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
      v13 = *(CHidInput **)(v10 + 472);
      if ( v13 && *((_DWORD *)v13 + 6) == 7 )
      {
        if ( *(_QWORD *)(v10 + 32) != -88LL )
          v5 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 88LL);
        CHidInput::ProcessPTPInertiaActions(v13, v5, *(_QWORD *)(v4 + 16), v12);
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
        v14 = &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids;
        LOBYTE(v14) = v6;
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v14,
          v11,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          48,
          (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
      }
      v6 = 0;
    }
    v7 = v6;
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v16);
  return v7;
}
