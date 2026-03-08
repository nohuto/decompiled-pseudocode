/*
 * XREFs of HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C00084D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0032FCC (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0034B00 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHSM_CheckIfThereIsAValidHubChange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int16 v4; // ax
  __int16 v5; // bx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx

  v3 = *(_QWORD *)(a1 + 960);
  v4 = *(_WORD *)(v3 + 782);
  v5 = *(_WORD *)(v3 + 780);
  if ( (v4 & 2) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)(a1 + 960), a2, a3);
    v6 = 1;
    v7 = (2 * (~(_BYTE)v5 & 2)) | 0x7F1;
LABEL_5:
    *(_DWORD *)(v3 + 788) = v6;
    v8 = 2057;
    *(_DWORD *)(v3 + 792) = v7;
    return v8;
  }
  if ( (v4 & 1) != 0 )
  {
    v6 = 0;
    v7 = 4 * (v5 & 1) + 2025;
    goto LABEL_5;
  }
  if ( v4 )
  {
    v8 = 2026;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2520),
        2u,
        3u,
        0x54u,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v4);
    if ( (*(_DWORD *)(v3 + 2592) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", v3 + 1264);
  }
  else
  {
    return 2041;
  }
  return v8;
}
