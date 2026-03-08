/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C003A9C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0030BE4 (WPP_RECORDER_SF_ddL.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C003BE6C (Endpoint_SendClearStallTransfer.c)
 */

void __fastcall Endpoint_OnCancelEndpointConfigureCompletion(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // edx

  v2 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v2 + 80),
        a2,
        13,
        74,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144));
    }
LABEL_11:
    _m_prefetchw((const void *)(v2 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v2 + 32), 2u) & 2) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v2 + 296), 12);
    return;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL);
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v2 + 80),
        v4,
        13,
        76,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144),
        *(_BYTE *)(a1 + 60));
    }
    Controller_ReportFatalErrorEx(*(_QWORD *)v2, 2u, 4125, 0LL, 0LL, *(_QWORD *)(v2 + 16), v2, 0LL);
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL);
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v2 + 80),
      v3,
      13,
      75,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144));
  }
  Endpoint_SendClearStallTransfer((PVOID)v2);
}
