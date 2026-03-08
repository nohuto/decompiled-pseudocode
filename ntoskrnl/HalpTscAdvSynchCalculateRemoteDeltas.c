/*
 * XREFs of HalpTscAdvSynchCalculateRemoteDeltas @ 0x140388048
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x140387D38 (HalpTscAdvSynchLeader.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x14038829C (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall HalpTscAdvSynchCalculateRemoteDeltas(
        __int64 *a1,
        __int64 *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 *v6; // rdi
  __int64 v8; // r13
  unsigned int *v9; // r12
  unsigned int v11; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  int *v13; // rsi
  __int64 v14; // rax
  REGHANDLE v15; // r12
  int v17; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-61h] BYREF
  int v19; // [rsp+50h] [rbp-59h] BYREF
  unsigned int *v20; // [rsp+58h] [rbp-51h]
  __int64 v21; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  int *v23; // [rsp+80h] [rbp-29h]
  __int64 v24; // [rsp+88h] [rbp-21h]
  __int64 *v25; // [rsp+90h] [rbp-19h]
  __int64 v26; // [rsp+98h] [rbp-11h]
  int *v27; // [rsp+A0h] [rbp-9h]
  __int64 v28; // [rsp+A8h] [rbp-1h]

  v6 = (__int64 *)HalpTscDeltas;
  v8 = HalpTscNopCycles;
  v9 = a3;
  v20 = a3;
  v11 = 0;
  *a1 = 0LL;
  *a2 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  *a3 = CurrentPrcb->Number;
  if ( a6 )
  {
    v13 = (int *)v8;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v11 == CurrentPrcb->Number )
      {
        *v6 = 0LL;
        *v13 = 0;
      }
      else
      {
        v14 = HalpTscAdvSynchCalculateRemoteDelta(v11, v8 + 4LL * v11);
        *v6 = v14;
        if ( v14 < *a1 )
          *a1 = v14;
        if ( *v6 > *a2 )
        {
          *a2 = *v6;
          *v9 = v11;
        }
        v19 = *v13;
        v21 = *v6;
        LODWORD(CurrentPrcb) = KeGetCurrentPrcb()->Number;
        v18 = v11;
        v17 = (int)CurrentPrcb;
        if ( HalpDiagnosticEventsRegistered )
        {
          v15 = HalpDiagnosticEventHandle;
          LOBYTE(CurrentPrcb) = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TIMER_PROC_DELTA_REPORT);
          if ( (_BYTE)CurrentPrcb )
          {
            v26 = 8LL;
            *(_QWORD *)&UserData.Size = 4LL;
            UserData.Ptr = (ULONGLONG)&v17;
            v24 = 4LL;
            v23 = (int *)&v18;
            v28 = 4LL;
            v25 = &v21;
            v27 = &v19;
            LOBYTE(CurrentPrcb) = EtwWriteEx(
                                    v15,
                                    &HAL_ETW_EVENT_TIMER_PROC_DELTA_REPORT,
                                    0LL,
                                    0,
                                    0LL,
                                    0LL,
                                    4u,
                                    &UserData);
          }
          v9 = v20;
        }
      }
      ++v11;
      ++v13;
      ++v6;
    }
    while ( v11 < a6 );
  }
  return (char)CurrentPrcb;
}
