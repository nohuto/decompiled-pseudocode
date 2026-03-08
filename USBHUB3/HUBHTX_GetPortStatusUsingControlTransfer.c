/*
 * XREFs of HUBHTX_GetPortStatusUsingControlTransfer @ 0x1C00044D4
 * Callers:
 *     HUBPSM20_GettingPortStatusInWaitingForStopSuspend @ 0x1C0012320 (HUBPSM20_GettingPortStatusInWaitingForStopSuspend.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_GetPortStatusUsingControlTransfer(__int64 a1)
{
  char v2; // al
  unsigned __int16 v3; // si
  __int64 *v4; // rdi
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-40h]
  __int64 v7; // [rsp+28h] [rbp-40h]

  v2 = *(_BYTE *)(a1 + 168) & 0x1C;
  *(_BYTE *)(a1 + 169) = 0;
  *(_BYTE *)(a1 + 168) = v2 | 0xA3;
  *(_WORD *)(a1 + 172) = *(_WORD *)(a1 + 200);
  v3 = (*(_DWORD *)(a1 + 204) & 0x100) != 0 ? 8 : 4;
  *(_WORD *)(a1 + 170) = (*(_DWORD *)(a1 + 204) & 0x100) != 0 ? 2 : 0;
  *(_WORD *)(a1 + 174) = v3;
  v4 = (__int64 *)(a1 + 1432);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *(unsigned __int16 *)(a1 + 200);
    WPP_RECORDER_SF_d(*v4, 4u, 4u, 0x28u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v6);
  }
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(*(_QWORD *)a1 + 248LL),
             a1,
             (int)a1 + 16,
             (__int64)HUBHTX_PortControlTransferComplete,
             a1 + 184,
             v3,
             0,
             *(_BYTE *)(*(_QWORD *)a1 + 2272LL));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = result;
      WPP_RECORDER_SF_d(*v4, 2u, 4u, 0x29u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v7);
    }
    return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 1240))(a1, 3008LL);
  }
  return result;
}
