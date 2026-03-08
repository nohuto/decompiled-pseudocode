/*
 * XREFs of HUBDSM_SetttingIsochDelay @ 0x1C0024DF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SetttingIsochDelay(__int64 a1)
{
  __int64 v1; // rbx
  __int16 v2; // dx
  int v3; // eax
  __int64 v5; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_WORD *)(v1 + 2582) + *(_WORD *)(*(_QWORD *)v1 + 1188LL) + *(_WORD *)(*(_QWORD *)v1 + 2492LL);
  *(_BYTE *)(v1 + 400) &= 0x1Cu;
  *(_WORD *)(v1 + 402) = v2;
  *(_BYTE *)(v1 + 401) = 49;
  *(_DWORD *)(v1 + 404) = 0;
  v3 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 248,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(v1 + 1512));
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = v3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x6Au,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v5);
    }
    HUBSM_AddEvent(v1 + 504, 4004);
  }
  return 1000LL;
}
