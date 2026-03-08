/*
 * XREFs of HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C002A82C
 * Callers:
 *     HUBDSM_DisarmingDeviceForWakeOnD0Entry @ 0x1C0023F70 (HUBDSM_DisarmingDeviceForWakeOnD0Entry.c)
 *     HUBDSM_DisarmingDeviceForWakeOnPortResumed @ 0x1C0023FA0 (HUBDSM_DisarmingDeviceForWakeOnPortResumed.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_DisarmDeviceForWakeUsingControlTransfer(__int64 a1)
{
  char v2; // cl
  bool v3; // zf
  __int16 v4; // dx
  char v5; // cl
  char v6; // al
  __int64 result; // rax
  __int64 v8; // [rsp+28h] [rbp-30h]

  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 32LL), 0xFFFFFFFD);
  v2 = *(_BYTE *)(a1 + 400) & 0x1F;
  *(_WORD *)(a1 + 406) = 0;
  v3 = (*(_DWORD *)(a1 + 1456) & 0x800) == 0;
  *(_WORD *)(a1 + 404) = 0;
  if ( v3 )
  {
    v4 = 1;
    v5 = v2 & 0xFC;
    v6 = 1;
  }
  else
  {
    v4 = 0;
    v5 = v2 & 0xFC | 1;
    v6 = 3;
  }
  *(_BYTE *)(a1 + 401) = v6;
  *(_BYTE *)(a1 + 400) = v5;
  *(_WORD *)(a1 + 402) = v4;
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 24),
             a1,
             (int)a1 + 248,
             (__int64)HUBDTX_ControlTransferComplete,
             0LL,
             0,
             1,
             *(_BYTE *)(a1 + 1512));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x23u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v8);
    }
    return HUBSM_AddEvent(a1 + 504, 4004);
  }
  return result;
}
