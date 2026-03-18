/*
 * XREFs of ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C001B304
 * Callers:
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C000B350 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DpiRequestDevicePowerState @ 0x1C001AE94 (DpiRequestDevicePowerState.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0040F6C (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequired(struct _FDO_CONTEXT *a1)
{
  __int64 v2; // r8

  WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(
      &DxgkControlGuid_Context,
      &Dxgk_DevicePowerRequiredTimer,
      v2,
      *((_QWORD *)a1 + 489),
      1);
  if ( !*((_DWORD *)a1 + 1026) )
    KeSetTimer((PKTIMER)((char *)a1 + 4176), DueTime, (PKDPC)((char *)a1 + 4240));
}
