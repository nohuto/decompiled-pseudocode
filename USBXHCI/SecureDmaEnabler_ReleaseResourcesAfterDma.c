/*
 * XREFs of SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C00521B0
 * Callers:
 *     Isoch_Stage_CompleteTD @ 0x1C00029D0 (Isoch_Stage_CompleteTD.c)
 *     Control_TransferData_Free @ 0x1C0006034 (Control_TransferData_Free.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C00118C4 (Bulk_Stage_FreeScatterGatherList.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0045238 (Isoch_Stage_FreeScatterGatherList.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 */

void __fastcall SecureDmaEnabler_ReleaseResourcesAfterDma(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 *v4; // rbx
  int v5; // edx
  int v6; // esi

  v2 = 0;
  if ( *(_DWORD *)a2 == 1 )
  {
    v4 = (__int64 *)(a1 + 8);
    if ( KeGetCurrentIrql() == 2 )
    {
      Controller_LowerAndTrackIrql((_QWORD *)*v4);
      v2 = 1;
    }
    v6 = VslDeleteSecureSection(*(_QWORD *)(a2 + 16));
    if ( v2 )
      Controller_RaiseAndTrackIrql(*v4);
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*v4 + 72),
        v5,
        18,
        18,
        (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
        v6);
    }
  }
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
}
