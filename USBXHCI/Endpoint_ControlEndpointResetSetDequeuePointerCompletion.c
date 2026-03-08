/*
 * XREFs of Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0039B90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0030BE4 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 */

void __fastcall Endpoint_ControlEndpointResetSetDequeuePointerCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 v3; // rbx
  char v6; // cl
  int v7; // edx
  int v8; // edx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v3 + 80),
        a2,
        13,
        81,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144));
    }
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 60);
    if ( v6 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v3 + 80),
          a2,
          13,
          82,
          (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
          1,
          *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
          *(_DWORD *)(v3 + 144));
      }
      *(_DWORD *)(v3 + 288) = 0;
      v7 = 16;
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        v8,
        13,
        83,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        v6);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalErrorEx(*(_QWORD *)v3, 2u, 4101, 0LL, 0LL, *(_QWORD *)(v3 + 16), v3, 0LL);
  }
  _m_prefetchw((const void *)(v3 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u) & 2) != 0 )
    return;
  v7 = 12;
LABEL_13:
  ESM_AddEvent((KSPIN_LOCK *)(v3 + 296), v7);
}
