/*
 * XREFs of DxgkCleanupPower @ 0x1C039A4F8
 * Callers:
 *     DxgkUnload @ 0x1C030A890 (DxgkUnload.c)
 *     DriverEntry @ 0x1C03DEE7C (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C0140497 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C01408D0 )
    {
      PoUnregisterPowerSettingCallback(qword_1C01408D0);
      qword_1C01408D0 = 0LL;
    }
    if ( qword_1C0140960 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C0140960, qword_1C0140960 | 3, qword_1C0140960 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C0140960 = 0LL;
      }
    }
  }
}
