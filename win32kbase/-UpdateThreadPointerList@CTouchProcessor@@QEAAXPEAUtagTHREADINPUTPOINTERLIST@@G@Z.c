/*
 * XREFs of ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0092B70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C00F2CD4 (-IsLastMsgData@CTouchProcessor@@AEAAH_K@Z.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C00F5E90 (ApiSetEditionFindThreadPointerData.c)
 *     ?IsCoalescedMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C01FB838 (-IsCoalescedMsgData@CTouchProcessor@@AEAAH_K@Z.c)
 *     ?IsSamePointerFrame@CTouchProcessor@@AEAAH_K0@Z @ 0x1C01FBF44 (-IsSamePointerFrame@CTouchProcessor@@AEAAH_K0@Z.c)
 *     ?ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C02014F0 (-ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C02078F0 (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1C0243320 (ApiSetEditionUnlinkAndFreeThreadPointerData.c)
 */

void __fastcall CTouchProcessor::UpdateThreadPointerList(
        PERESOURCE *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3)
{
  unsigned __int16 v3; // si
  struct tagTHREADINPUTPOINTERLIST *v4; // rdi
  PERESOURCE *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  PDEVICE_OBJECT v11; // rcx
  struct _ERESOURCE **v12; // rbx
  struct _ERESOURCE *v13; // rcx
  __int16 v14; // ax
  unsigned __int64 v15; // r15
  __int64 ThreadPointerData; // rsi
  struct tagTHREADINPUTPOINTERLIST *v17; // rsi
  struct tagTHREADINPUTPOINTERLIST *v18; // rcx
  int v19; // r12d
  struct tagTHREADINPUTPOINTERLIST *v20; // r14
  int v21; // eax
  __int64 v22; // rax
  char v23[24]; // [rsp+48h] [rbp-50h] BYREF
  char v24; // [rsp+60h] [rbp-38h]
  struct _KTHREAD **v25; // [rsp+68h] [rbp-30h]

  v3 = a3;
  v4 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      116,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v6 = this + 4;
  v24 = 0;
  v25 = (struct _KTHREAD **)(this + 4);
  if ( ExIsResourceAcquiredExclusiveLite(this[4]) || ExIsResourceAcquiredSharedLite(*v6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 119LL);
  if ( this[5] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 120LL);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*v6);
  this[5] = (PERESOURCE)KeGetCurrentThread();
  v10 = 0;
  if ( v3 == 1 )
  {
    v11 = WPP_GLOBAL_Control;
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v7 || (_BYTE)v8 )
    {
      v14 = 117;
      goto LABEL_76;
    }
  }
  else
  {
    if ( *(struct tagTHREADINPUTPOINTERLIST **)v4 == v4 )
    {
      v11 = WPP_GLOBAL_Control;
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType);
      if ( !(_BYTE)v7 && !(_BYTE)v8 )
        goto LABEL_23;
      v14 = 118;
LABEL_76:
      WPP_RECORDER_AND_TRACE_SF_(
        v11->AttachedDevice,
        v7,
        (_WORD)v8,
        v11->DeviceExtension,
        5,
        7,
        v14,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      goto LABEL_23;
    }
    v15 = 0LL;
    if ( v3 )
    {
      ThreadPointerData = ApiSetEditionFindThreadPointerData(v4, v3);
      if ( !ThreadPointerData )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4911LL);
      v15 = *(_QWORD *)(ThreadPointerData + 24);
    }
    v17 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
    while ( v17 != v4 )
    {
      v18 = v17;
      v19 = v10++;
      v20 = v17;
      v17 = *(struct tagTHREADINPUTPOINTERLIST **)v17;
      v7 = *((_QWORD *)v18 + 3);
      v21 = *((_DWORD *)v18 + 12);
      if ( v15 == v7 )
      {
        *((_DWORD *)v18 + 12) = v21 | 2;
      }
      else if ( (v21 & 2) != 0
             && !CTouchProcessor::IsSamePointerFrame(v18, v7, v15)
             && ((unsigned int)CTouchProcessor::IsLastMsgData((CTouchProcessor *)this, *((_QWORD *)v20 + 3))
              || (unsigned int)CTouchProcessor::IsCoalescedMsgData((CTouchProcessor *)this, *((_QWORD *)v20 + 3))) )
      {
        ApiSetEditionUnlinkAndFreeThreadPointerData(v4, v20);
        v10 = v19;
      }
    }
    if ( v10 != *((_DWORD *)v4 + 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4989LL);
    v11 = WPP_GLOBAL_Control;
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v7 || (_BYTE)v8 )
    {
      v14 = 119;
      goto LABEL_76;
    }
  }
LABEL_23:
  v12 = (struct _ERESOURCE **)v25;
  if ( v25[1] != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 324LL);
    v12 = (struct _ERESOURCE **)v25;
  }
  if ( v24 )
  {
    if ( qword_1C02D65D8 )
      qword_1C02D65D8(v23);
    v22 = SGDGetUserSessionState(v11, v7, v8, v9);
    CTouchProcessor::UnreferenceMsgDataFromGuard(*(_QWORD *)(v22 + 3424), 0LL);
    v12 = (struct _ERESOURCE **)v25;
  }
  if ( !ExIsResourceAcquiredExclusiveLite(*v12) && !ExIsResourceAcquiredSharedLite(*v12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 130LL);
  v13 = *v12;
  v12[1] = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v13);
}
