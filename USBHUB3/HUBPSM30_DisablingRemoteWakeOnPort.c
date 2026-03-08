/*
 * XREFs of HUBPSM30_DisablingRemoteWakeOnPort @ 0x1C0013D50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM30_DisablingRemoteWakeOnPort(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  __int64 *v3; // rdi
  int v4; // eax
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 168) & 0x1C;
  *(_BYTE *)(v1 + 169) = 3;
  *(_BYTE *)(v1 + 168) = v2 | 0x23;
  *(_BYTE *)(v1 + 173) = 0;
  *(_WORD *)(v1 + 170) = 27;
  *(_BYTE *)(v1 + 172) = *(_BYTE *)(v1 + 200);
  *(_WORD *)(v1 + 174) = 0;
  v3 = (__int64 *)(v1 + 1432);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *(unsigned __int16 *)(v1 + 200);
    WPP_RECORDER_SF_d(*v3, 4u, 4u, 0x34u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v6);
  }
  v4 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(*(_QWORD *)v1 + 248LL),
         v1,
         (int)v1 + 16,
         (__int64)HUBHTX_PortControlTransferComplete,
         0LL,
         0,
         0,
         *(_BYTE *)(*(_QWORD *)v1 + 2272LL));
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = v4;
      WPP_RECORDER_SF_d(*v3, 2u, 4u, 0x35u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v7);
    }
    (*(void (__fastcall **)(__int64, __int64))(v1 + 1240))(v1, 3008LL);
  }
  return 1000LL;
}
