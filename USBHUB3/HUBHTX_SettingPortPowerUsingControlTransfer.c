/*
 * XREFs of HUBHTX_SettingPortPowerUsingControlTransfer @ 0x1C00049BC
 * Callers:
 *     HUBPSM20_PoweringOnPortOnResume @ 0x1C0012600 (HUBPSM20_PoweringOnPortOnResume.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_SettingPortPowerUsingControlTransfer(__int64 a1)
{
  char v2; // al
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-30h]
  __int64 v5; // [rsp+28h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 1424) == 4 )
    *(_DWORD *)(a1 + 1424) = 0;
  v2 = *(_BYTE *)(a1 + 168) & 0x1C;
  *(_BYTE *)(a1 + 169) = 3;
  *(_BYTE *)(a1 + 168) = v2 | 0x23;
  *(_WORD *)(a1 + 170) = 8;
  *(_DWORD *)(a1 + 172) = *(unsigned __int16 *)(a1 + 200);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = *(unsigned __int16 *)(a1 + 200);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      4u,
      4u,
      0x3Au,
      (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
      v4);
  }
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(*(_QWORD *)a1 + 248LL),
             a1,
             (int)a1 + 16,
             (__int64)HUBHTX_PortControlTransferComplete,
             0LL,
             0,
             0,
             *(_BYTE *)(*(_QWORD *)a1 + 2272LL));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 1432),
        2u,
        4u,
        0x3Bu,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v5);
    }
    return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 1240))(a1, 3008LL);
  }
  return result;
}
