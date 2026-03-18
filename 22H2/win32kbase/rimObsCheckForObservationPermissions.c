/*
 * XREFs of rimObsCheckForObservationPermissions @ 0x1C01AD668
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C01749F0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0175770 (NtRIMUpdateInputObserverRegistration.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMIsTestSigningOn @ 0x1C01A35C4 (RIMIsTestSigningOn.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C01AC51C (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall rimObsCheckForObservationPermissions(char a1)
{
  int v1; // ebx
  int v2; // edi
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _EPROCESS *CurrentProcess; // rax
  int v8; // edx
  int v9; // r8d
  PDEVICE_OBJECT v10; // rcx
  __int16 v11; // r9
  int v12; // r9d
  PDEVICE_OBJECT v13; // rcx
  char v14; // dl
  char v15; // r8
  unsigned __int16 v16; // r10
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  char v19; // [rsp+70h] [rbp+8h] BYREF

  v1 = a1 & 2;
  v2 = a1 & 1;
  v3 = RIMIsTestSigningOn();
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5, v4, v6);
  if ( !(unsigned int)rimIsProcessLocalSystem(CurrentProcess) )
  {
    if ( !v3 )
    {
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          1,
          75,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      return 0LL;
    }
    v19 = 0;
    DestinationString = 0LL;
    if ( !v2
      || (RtlInitUnicodeString(&DestinationString, L"inputObservation"),
          v12 = RtlCapabilityCheck(0LL, &DestinationString, &v19),
          v12 >= 0)
      && v19 )
    {
      if ( !v1
        || (RtlInitUnicodeString(&DestinationString, L"inputSuppression"),
            v12 = RtlCapabilityCheck(0LL, &DestinationString, &v19),
            v12 >= 0)
        && v19 )
      {
        v10 = WPP_GLOBAL_Control;
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 1LL;
        v11 = 78;
        goto LABEL_51;
      }
      v13 = WPP_GLOBAL_Control;
      v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = 77;
    }
    else
    {
      v13 = WPP_GLOBAL_Control;
      v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = 76;
    }
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)v13->AttachedDevice,
      v14,
      v15,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      3u,
      1u,
      v16,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v12);
    return 0LL;
  }
  v10 = WPP_GLOBAL_Control;
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 1LL;
  v11 = 74;
LABEL_51:
  WPP_RECORDER_AND_TRACE_SF_(
    v10->AttachedDevice,
    v8,
    v9,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    4,
    1,
    v11,
    (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  return 1LL;
}
