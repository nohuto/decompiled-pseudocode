/*
 * XREFs of KiIntSteerLogStatus @ 0x1402A8FAC
 * Callers:
 *     KeIntSteerPeriodic @ 0x1402A8BB0 (KeIntSteerPeriodic.c)
 *     KiIntSteerEventTraceControlCallback @ 0x140861B80 (KiIntSteerEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeCountSetBitsAffinityEx @ 0x140237550 (KeCountSetBitsAffinityEx.c)
 *     KiIntSteerLogState @ 0x1402903C8 (KiIntSteerLogState.c)
 *     KiIntSteerEtwEventEnabled @ 0x1402A9098 (KiIntSteerEtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

int __fastcall KiIntSteerLogStatus(char a1)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  const EVENT_DESCRIPTOR *v3; // rbx
  const EVENT_DESCRIPTOR *v4; // rsi
  __int64 v5; // rax
  __int64 *i; // rbx
  __int64 *j; // rdi
  int v9; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int16 *v10[2]; // [rsp+50h] [rbp-61h] BYREF
  __int16 v11; // [rsp+60h] [rbp-51h]
  int v12; // [rsp+62h] [rbp-4Fh]
  __int16 v13; // [rsp+66h] [rbp-4Bh]
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+68h] [rbp-49h] BYREF
  __int64 v15; // [rsp+78h] [rbp-39h]
  __int64 v16; // [rsp+80h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-29h] BYREF
  int *v18; // [rsp+98h] [rbp-19h]
  __int64 v19; // [rsp+A0h] [rbp-11h]
  int *v20; // [rsp+A8h] [rbp-9h]
  __int64 v21; // [rsp+B0h] [rbp-1h]
  int *v22; // [rsp+B8h] [rbp+7h]
  __int64 v23; // [rsp+C0h] [rbp+Fh]
  __int64 *v24; // [rsp+C8h] [rbp+17h]
  int v25; // [rsp+D0h] [rbp+1Fh]
  int v26; // [rsp+D4h] [rbp+23h]

  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE;
  if ( a1 )
    v2 = &KMPnPRundownEvt_SleepStudy_ConnectionResource;
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(v2) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v19 = 4LL;
    v18 = &KiIntTrackRootCount;
    v9 = KeCountSetBitsAffinityEx((unsigned __int16 *)&KiIntSteerMask);
    v24 = qword_140C41268;
    v20 = &v9;
    v25 = 8 * (unsigned __int16)KiIntSteerMask;
    v21 = 4LL;
    v22 = &KiIntSteerMask;
    v23 = 2LL;
    v26 = 0;
    EtwWriteEx(KiIntSteerEtwHandle, v2, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  v12 = 0;
  v13 = 0;
  v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE;
  v9 = 0;
  if ( a1 )
    v3 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(v3) )
  {
    v10[1] = (unsigned __int16 *)qword_140D1EFE8[0];
    v10[0] = (unsigned __int16 *)&KeActiveProcessors;
    v11 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v10) )
    {
      *(_QWORD *)&v14.Size = 4LL;
      v14.Ptr = (ULONGLONG)&v9;
      v16 = 4LL;
      v15 = KiProcessorBlock[v9] + 11672;
      EtwWriteEx(KiIntSteerEtwHandle, v3, 0LL, 0, 0LL, 0LL, 2u, &v14);
    }
  }
  v4 = (const EVENT_DESCRIPTOR *)PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET;
  if ( a1 )
    v4 = &PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN;
  LODWORD(v5) = KiIntSteerEtwEventEnabled(v4);
  if ( (_BYTE)v5 )
  {
    for ( i = (__int64 *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (__int64 *)*i )
    {
      if ( !a1 )
      {
        v5 = i[20];
        if ( i[22] == v5 )
          continue;
      }
      for ( j = (__int64 *)i[2]; j != i + 2; j = (__int64 *)*j )
        LODWORD(v5) = KiIntSteerLogState((__int64)j, v4);
    }
  }
  return v5;
}
