/*
 * XREFs of ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EEBD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C004763C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0047C7C (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0052B2C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C01A73A0 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     rimProcessCompleteFrame @ 0x1C01A9900 (rimProcessCompleteFrame.c)
 *     FindRimDevByName @ 0x1C01F0198 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01F0D9C (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleTouchInputPacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 RimDevByName; // rax
  struct RIMDEV *v14; // r14
  int v15; // r8d
  void *v16; // rdx
  __int64 v17; // r8
  char *v18; // rbx
  CBaseInput *v19; // rcx
  void *v21; // [rsp+78h] [rbp+10h] BYREF
  char v22; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      36,
      (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
  *(_QWORD *)(v4 + 8) = v4 + (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  v6 = *(_QWORD *)(v4 + 208);
  if ( v6 )
  {
    v7 = v4 + (v6 & 0xFFFFFFFFFFFFFFFEuLL);
    *(_QWORD *)(v4 + 208) = v7;
    while ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( v8 )
        *(_QWORD *)(v7 + 8) = v4 + (v8 & 0xFFFFFFFFFFFFFFFEuLL);
      v9 = (unsigned __int64 *)(v7 + 16);
      v10 = *(_QWORD *)(v7 + 16);
      if ( !v10 )
        break;
      v7 = v4 + (v10 & 0xFFFFFFFFFFFFFFFEuLL);
      *v9 = v7;
    }
  }
  v11 = *(_QWORD *)(v4 + 216);
  if ( v11 )
    *(_QWORD *)(v4 + 216) = v4 + (v11 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( *(_DWORD *)(v4 + 224) )
  {
    v21 = 0LL;
    rimGetCompleteFrameFromIVCompleteFrame(v4, 0LL, (__int64 *)&v21);
    v18 = (char *)v21;
    if ( v21 )
    {
      v19 = gpHidInput;
      *((_QWORD *)gpHidInput + 175) = v21;
      CRIMBase::SensorDoWorkAndWait((__int64)v19, 15LL, v17);
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v18);
    }
    return v5;
  }
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v22, 1LL, a3);
  RIMLockExclusive(v3 + 104);
  if ( !(unsigned __int8)IsRimObjectUnregistered(v3) )
  {
    RimDevByName = FindRimDevByName((PCUNICODE_STRING)v4);
    *(_QWORD *)(v3 + 112) = 0LL;
    v14 = (struct RIMDEV *)RimDevByName;
    ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
    KeLeaveCriticalRegion();
    if ( v14 )
    {
      v21 = 0LL;
      rimGetCompleteFrameFromIVCompleteFrame(v4, v14, (__int64 *)&v21);
      if ( v21 )
      {
        RIMLockExclusive(v3 + 104);
        RIMLockExclusive(v3 + 792);
        rimProcessCompleteFrame((HANDLE *)v3, (LARGE_INTEGER *)v14, (unsigned int *)v21);
        *(_QWORD *)(v3 + 800) = 0LL;
        ExReleasePushLockExclusiveEx(v3 + 792, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(v3 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        LOBYTE(v5) = 0;
      }
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids;
        LOBYTE(v16) = v5;
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v16,
          v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          37,
          (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
      }
      v5 = 0;
    }
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v22);
    return v5;
  }
  *(_QWORD *)(v3 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
  KeLeaveCriticalRegion();
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v22);
  return 2;
}
