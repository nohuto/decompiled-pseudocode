/*
 * XREFs of Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C003B760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0017FB0 (WPP_RECORDER_SF_ddd.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0030BE4 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C003C4D0 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 */

void __fastcall Endpoint_OnResetSetDequeuePointerCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  char v7; // cl
  int v8; // edx
  int v9; // edx
  int v10; // edx

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v6 + 80),
        a2,
        13,
        42,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144));
    }
LABEL_8:
    *(_DWORD *)(v6 + 288) = -1073741823;
    _m_prefetchw((const void *)(v6 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u) & 2) != 0 )
      return;
    v9 = 12;
    goto LABEL_15;
  }
  v7 = *(_BYTE *)(a1 + 60);
  if ( v7 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v6 + 80),
        v8,
        13,
        43,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144),
        v7);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalErrorEx(*(_QWORD *)v6, 2u, 4122, 0LL, 0LL, *(_QWORD *)(v6 + 16), v6, (__int64)a3);
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v6 + 80),
      v10,
      13,
      44,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      *(_WORD *)(a1 + 34));
  }
  if ( *(_BYTE *)(v6 + 37) )
  {
    Endpoint_StreamsOnResetSetDequeuePointerComplete(v3, *(unsigned __int16 *)(a1 + 34));
    return;
  }
  *(_DWORD *)(v6 + 288) = 0;
  v9 = 16;
LABEL_15:
  ESM_AddEvent((KSPIN_LOCK *)(v6 + 296), v9);
}
