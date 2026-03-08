/*
 * XREFs of HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x1C00061A8
 * Callers:
 *     HUBPSM20_ErrorOnResettingPort @ 0x1C0011E70 (HUBPSM20_ErrorOnResettingPort.c)
 * Callees:
 *     WPP_RECORDER_SF_dDD @ 0x1C0002ED0 (WPP_RECORDER_SF_dDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0032FCC (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0034B00 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int16 v4; // di
  __int16 v6; // bx
  unsigned int v7; // esi
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-28h]

  v4 = *((_WORD *)a1 + 97);
  v6 = *((_WORD *)a1 + 92);
  v7 = 3049;
  if ( (v4 & 1) != 0 )
  {
    v7 = (v6 & 1) != 0 ? 3049 : 3021;
    goto LABEL_13;
  }
  if ( (v4 & 0x10) == 0 )
    goto LABEL_11;
  if ( (v6 & 1) == 0 )
  {
    v7 = (v6 & 2) != 0 ? 3021 : 3077;
    goto LABEL_13;
  }
  if ( (v6 & 4) != 0 )
  {
    v7 = 3021;
    goto LABEL_13;
  }
  if ( (v6 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2, a3);
    v8 = *a1;
    v7 = 3065;
    *((_DWORD *)a1 + 356) = 4;
    if ( (*(_DWORD *)(v8 + 2592) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
  }
  else
  {
LABEL_11:
    if ( ((unsigned __int8)v6 & (unsigned __int8)v4 & 2) != 0 )
      v7 = 3037;
  }
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dDD(a1[179], a2, *((unsigned __int16 *)a1 + 100), a4, v10);
  return v7;
}
