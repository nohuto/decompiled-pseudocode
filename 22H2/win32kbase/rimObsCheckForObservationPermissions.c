/*
 * XREFs of rimObsCheckForObservationPermissions @ 0x1C017DDB4
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C0152EE0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C01546C0 (NtRIMUpdateInputObserverRegistration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C017D070 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     RIMIsTestSigningOn @ 0x1C018137C (RIMIsTestSigningOn.c)
 */

__int64 __fastcall rimObsCheckForObservationPermissions(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // ebx
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  int v8; // edx
  int v9; // r9d
  int v10; // ecx
  int v11; // r9d
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  char v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1 & 1;
  v3 = a1 & 2;
  v4 = RIMIsTestSigningOn(a1, a2);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6, v5);
  if ( (unsigned int)rimIsProcessLocalSystem(CurrentProcess) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 73;
LABEL_21:
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v8,
        23,
        v9,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
      return 1LL;
    }
    return 1LL;
  }
  if ( !v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v8,
        23,
        74,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    return 0LL;
  }
  v14 = 0;
  DestinationString = 0LL;
  if ( v2 )
  {
    RtlInitUnicodeString(&DestinationString, L"inputObservation");
    v10 = RtlCapabilityCheck(0LL, &DestinationString, &v14);
    if ( v10 < 0 || !v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 75;
LABEL_17:
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v8,
          23,
          v11,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
          v10,
          *(_QWORD *)&DestinationString.Length,
          DestinationString.Buffer);
        return 0LL;
      }
      return 0LL;
    }
  }
  if ( v3 )
  {
    RtlInitUnicodeString(&DestinationString, L"inputSuppression");
    v10 = RtlCapabilityCheck(0LL, &DestinationString, &v14);
    if ( v10 < 0 || !v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 76;
        goto LABEL_17;
      }
      return 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 77;
    goto LABEL_21;
  }
  return 1LL;
}
