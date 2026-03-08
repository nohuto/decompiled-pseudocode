/*
 * XREFs of Controller_Start @ 0x1C0014F3C
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013F90 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_InternalReset @ 0x1C0033D04 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x1C000A918 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C000A958 (DynamicLock_Release.c)
 *     Register_GetExtendedTBCTRBStatusSupported @ 0x1C0013524 (Register_GetExtendedTBCTRBStatusSupported.c)
 *     Register_GetExtendedTBCEnable @ 0x1C001354C (Register_GetExtendedTBCEnable.c)
 *     WPP_RECORDER_SF_I @ 0x1C00138F8 (WPP_RECORDER_SF_I.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0032EF4 (Controller_DetectFrameMicroframeBoundary.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall Controller_Start(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // r12
  int Ulong; // eax
  bool ExtendedTBCEnable; // al
  char v9; // r8
  int v10; // edx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  ULONGLONG UnbiasedInterruptTime; // r13
  unsigned int i; // ebp
  char v17; // bl
  ULONGLONG v18; // rax
  int v19; // r8d
  ULONGLONG v20; // rbp
  unsigned __int64 v21; // rdx
  int v22; // ebp
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  int v27; // r14d
  ULONGLONG v28; // rax
  int v29; // r8d
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  int v33; // eax
  int Timeout; // [rsp+20h] [rbp-68h]
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( *(_BYTE *)(a1 + 601) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v24, v25, v26);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 117, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
  if ( Controller_IsControllerAccessible(a1) )
  {
    v4 = *(_QWORD *)(a1 + 88);
    v5 = *(_QWORD *)(v4 + 32);
    v6 = v5 + 4;
    Ulong = XilRegister_ReadUlong(v4, v5 + 4);
    if ( Ulong != -1 )
    {
      if ( (Ulong & 1) != 0 )
      {
        XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 20LL, 2LL);
        XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v5);
        ExtendedTBCEnable = Register_GetExtendedTBCEnable(*(_QWORD *)(a1 + 88));
        *(_BYTE *)(a1 + 602) = ExtendedTBCEnable;
        v11 = v10 & 0xFFFF9FFF | ((v9 & 2 | (4 * ExtendedTBCEnable)) << 12);
        *(_BYTE *)(a1 + 603) = Register_GetExtendedTBCTRBStatusSupported();
        if ( !Register_GetExtendedTBCTRBStatusSupported()
          || (v13 = 0x8000, (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(v12 + 8) + 336LL), 8).m128i_u16[0] & 0x1000) != 0) )
        {
          v13 = 0;
        }
        v14 = v13 | v11 & 0xFFFF7FFF;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 119, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
        UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
        XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v5, v14);
        for ( i = 0; i < 0x32; ++i )
        {
          KeStallExecutionProcessor(0x64u);
          v17 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
          if ( (v17 & 1) == 0 )
          {
            v18 = KeQueryUnbiasedInterruptTime();
            goto LABEL_14;
          }
        }
        v3 = ExAllocateTimer(&Controller_HighResTimerCompletion, &Event, 4LL);
        if ( !v3 )
          return (unsigned int)-1073741670;
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v27 = 0;
        v20 = 0LL;
        while ( 1 )
        {
          ExSetTimer(v3, -50000LL, 0LL, 0LL);
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v17 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
          if ( (v17 & 1) == 0 )
            break;
          if ( (unsigned int)++v27 >= 7 )
            goto LABEL_15;
        }
        v18 = KeQueryUnbiasedInterruptTime();
LABEL_14:
        v20 = v18;
LABEL_15:
        if ( (v17 & 1) != 0 )
        {
          v28 = KeQueryUnbiasedInterruptTime();
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v30 = (v28 - UnbiasedInterruptTime) / 0x2710;
            LOBYTE(v30) = 2;
            WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v30, v29, 120, Timeout, (v28 - UnbiasedInterruptTime) / 0x2710);
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = (v20 - UnbiasedInterruptTime) / 0xA;
          LOBYTE(v21) = 4;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v21, v19, 121, Timeout, (v20 - UnbiasedInterruptTime) / 0xA);
        }
        DynamicLock_Acquire(*(_QWORD *)(a1 + 672));
        ++*(_DWORD *)(a1 + 680);
        v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 112))(
                WdfDriverGlobals,
                *(_QWORD *)(a1 + 688));
        if ( v22 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
            WdfDriverGlobals,
            **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
            Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
            a1 + 664);
          v31 = *(_QWORD *)(a1 + 88);
          v32 = *(_QWORD *)(v31 + 32);
          v33 = XilRegister_ReadUlong(v31, v32);
          XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v32, v33 | 0x400u);
          *(_BYTE *)(a1 + 664) = 1;
        }
        DynamicLock_Release(*(_QWORD *)(a1 + 672));
        if ( v22 )
          Controller_DetectFrameMicroframeBoundary(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 360),
          -50000000LL);
        if ( v3 )
          ExDeleteTimer(v3, 0LL, 0LL, 0LL);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, 118, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
        return (unsigned int)-1073741630;
      }
    }
  }
  return v1;
}
