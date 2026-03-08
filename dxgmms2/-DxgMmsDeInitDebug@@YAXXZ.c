/*
 * XREFs of ?DxgMmsDeInitDebug@@YAXXZ @ 0x1C00DFFD0
 * Callers:
 *     DriverUnload @ 0x1C002CF70 (DriverUnload.c)
 * Callees:
 *     <none>
 */

void DxgMmsDeInitDebug(void)
{
  if ( P )
  {
    KeDeregisterBugCheckReasonCallback(P);
    ExFreePoolWithTag(P, 0x4B677844u);
    P = 0LL;
    qword_1C0076238 = 0LL;
  }
}
