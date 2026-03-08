/*
 * XREFs of HUBDSM_ConfiguringDevice @ 0x1C0023B60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDSM_ConfiguringDevice(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  int v3; // eax
  __int64 v5; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 400) &= 0x1Cu;
  v2 = *(_QWORD *)(v1 + 48);
  *(_BYTE *)(v1 + 401) = 9;
  *(_WORD *)(v1 + 402) = *(unsigned __int8 *)(v2 + 37);
  *(_DWORD *)(v1 + 404) = 0;
  v3 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 248,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         0,
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
        0x43u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v5);
    }
    HUBSM_AddEvent(v1 + 504, 4004);
  }
  return 1000LL;
}
