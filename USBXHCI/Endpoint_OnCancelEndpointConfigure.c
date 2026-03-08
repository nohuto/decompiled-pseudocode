/*
 * XREFs of Endpoint_OnCancelEndpointConfigure @ 0x1C003A7B4
 * Callers:
 *     ESM_ReconfiguringEndpointAfterStop @ 0x1C0051AE0 (ESM_ReconfiguringEndpointAfterStop.c)
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C0007FC0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C001B9F0 (XilEndpoint_AcquireBuffer.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003C168 (Endpoint_SetUpConfigureEndpointCommand.c)
 */

void __fastcall Endpoint_OnCancelEndpointConfigure(__int64 *a1)
{
  int v2; // ebx
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 *v5; // r14
  void *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 *v9; // rbx
  int v10; // edx

  v2 = *((_DWORD *)a1 + 36);
  v3 = *(_QWORD *)(*a1 + 144);
  v4 = *(_QWORD *)(*a1 + 88);
  v5 = a1 + 2;
  v6 = &WPP_54015396503830aea6e7f220ba327c55_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_dd(
      a1[10],
      (_DWORD)v6,
      13,
      69,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(*v5 + 135),
      *((_DWORD *)a1 + 36));
  }
  v7 = *v5;
  if ( (*(_DWORD *)(v4 + 104) & 4) != 0 )
  {
    if ( *(_BYTE *)(v7 + 658) )
      v8 = XilUsbDevice_GetDeviceContextBufferVA(v7) + (((unsigned int)(v2 - 1) + 1LL) << 6);
    else
      v8 = 0LL;
    v9 = a1 + 33;
    if ( !a1[33] )
    {
      v10 = 2112;
LABEL_14:
      *v9 = XilEndpoint_AcquireBuffer(a1, v10, (int)a1, 846491717);
    }
  }
  else
  {
    if ( *(_BYTE *)(v7 + 658) )
      v8 = XilUsbDevice_GetDeviceContextBufferVA(v7) + 32 * ((unsigned int)(v2 - 1) + 1LL);
    else
      v8 = 0LL;
    v9 = a1 + 33;
    if ( !a1[33] )
    {
      v10 = 1056;
      goto LABEL_14;
    }
  }
  if ( *v9 )
  {
    Endpoint_SetUpConfigureEndpointCommand(
      (int)a1,
      1,
      (int)Endpoint_OnCancelEndpointConfigureCompletion_EpDropped,
      (int)a1,
      *v9,
      v8,
      0LL,
      a1 + 20);
    Command_SendCommand(v3, (__int64)(a1 + 20));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_dd(
        a1[10],
        (_DWORD)v6,
        13,
        70,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*v5 + 135),
        *((_DWORD *)a1 + 36));
    }
    Controller_ReportFatalErrorEx(*a1, 2u, 0, 0LL, 0LL, *v5, (__int64)a1, 0LL);
    _m_prefetchw(a1 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)a1 + 8, 2u) & 2) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)a1 + 37, 12);
  }
}
