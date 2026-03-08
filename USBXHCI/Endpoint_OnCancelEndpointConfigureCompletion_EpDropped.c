/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C003AB40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     Endpoint_GetDequeuePointer @ 0x1C000CEDC (Endpoint_GetDequeuePointer.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0030BE4 (WPP_RECORDER_SF_ddL.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003C168 (Endpoint_SetUpConfigureEndpointCommand.c)
 */

void __fastcall Endpoint_OnCancelEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  int v4; // edx
  int v5; // edx
  __int64 DequeuePointer; // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v7 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)v2 + 144LL);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v2 + 80),
        a2,
        13,
        71,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144));
    }
LABEL_8:
    _m_prefetchw((const void *)(v2 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v2 + 32), 2u) & 2) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v2 + 296), 12);
    return;
  }
  v4 = *(unsigned __int8 *)(a1 + 60);
  if ( (_BYTE)v4 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL);
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v2 + 80),
        v5,
        13,
        72,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144),
        *(_BYTE *)(a1 + 60));
    }
    Controller_ReportFatalErrorEx(*(_QWORD *)v2, 2u, 4119, 0LL, 0LL, *(_QWORD *)(v2 + 16), v2, 0LL);
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v2 + 80),
      v4,
      13,
      73,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144));
  }
  Endpoint_SetUpConfigureEndpointCommand(
    v2,
    0,
    (int)Endpoint_OnCancelEndpointConfigureCompletion,
    v2,
    *(_QWORD *)(v2 + 264),
    0LL,
    (__int64)&v7,
    (void *)(v2 + 160));
  DequeuePointer = Endpoint_GetDequeuePointer(v2, 0);
  *(_QWORD *)(v7 + 8) = DequeuePointer;
  Command_SendCommand(v3, v2 + 160);
}
