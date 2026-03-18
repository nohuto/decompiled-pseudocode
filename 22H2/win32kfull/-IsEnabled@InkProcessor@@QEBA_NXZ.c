/*
 * XREFs of ?IsEnabled@InkProcessor@@QEBA_NXZ @ 0x1C023DFEC
 * Callers:
 *     InkProcessorIsInkDevice @ 0x1C01FE530 (InkProcessorIsInkDevice.c)
 * Callees:
 *     <none>
 */

char __fastcall InkProcessor::IsEnabled(InkProcessor *this)
{
  char v2; // bl
  __int64 v3; // r8

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_BYTE *)this + 8);
  ExReleasePushLockSharedEx(this, 0LL, v3);
  KeLeaveCriticalRegion();
  return v2;
}
