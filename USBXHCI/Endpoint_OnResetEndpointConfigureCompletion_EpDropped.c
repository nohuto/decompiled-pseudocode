/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C003B190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     Endpoint_GetDequeuePointer @ 0x1C000CEDC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C0013AB4 (Endpoint_InitializeTransferRing.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001E754 (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0030BE4 (WPP_RECORDER_SF_ddL.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0038E24 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C00390E8 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003C168 (Endpoint_SetUpConfigureEndpointCommand.c)
 */

void __fastcall Endpoint_OnResetEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // edx
  int v6; // edx
  __int64 v7; // rcx
  unsigned int i; // ebx
  __int64 DequeuePointer; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 48);
  v12 = 0LL;
  v3 = *v2;
  v4 = *(_QWORD *)(*(_QWORD *)*v2 + 144LL);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v3 + 80),
        a2,
        13,
        51,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144));
    }
  }
  else
  {
    v5 = *(unsigned __int8 *)(a1 + 60);
    if ( (_BYTE)v5 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v3 + 80),
          v5,
          13,
          53,
          (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
          *(_DWORD *)(v3 + 144));
      }
      if ( (int)XilEndpoint_FetchStreamContextArray(*(_QWORD *)(v3 + 136)) >= 0 )
      {
        v7 = *(_QWORD *)(v3 + 136);
        for ( i = 1; i <= *(_DWORD *)(v7 + 8); v7 = *(_QWORD *)(v3 + 136) )
        {
          Endpoint_InitializeTransferRing((__int64 *)v3, i);
          DequeuePointer = Endpoint_GetDequeuePointer(v3, i);
          v10 = i++;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 32LL) + 16LL) + 16 * v10) = DequeuePointer;
        }
        if ( (int)XilEndpoint_CommitStreamContextArrayUpdates(v7) >= 0 )
        {
          Endpoint_SetUpConfigureEndpointCommand(
            v3,
            0,
            (int)Endpoint_OnResetEndpointConfigureCompletion,
            (int)v2,
            v2[1],
            0LL,
            (__int64)&v12,
            v2 + 2);
          v11 = Endpoint_GetDequeuePointer(v3, 0);
          *(_QWORD *)(v12 + 8) = v11;
          Command_SendCommand(v4, (__int64)(v2 + 2));
          return;
        }
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v3 + 80),
          v6,
          13,
          52,
          (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
          *(_DWORD *)(v3 + 144),
          *(_BYTE *)(a1 + 60));
      }
      Controller_ReportFatalErrorEx(*(_QWORD *)v3, 2u, 4119, 0LL, 0LL, *(_QWORD *)(v3 + 16), v3, 0LL);
    }
  }
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v3 + 120LL), v2[1]);
  v2[1] = 0LL;
  *(_DWORD *)(v3 + 288) = 0;
  _m_prefetchw((const void *)(v3 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u) & 2) == 0 )
    ESM_AddEvent((KSPIN_LOCK *)(v3 + 296), 12);
}
