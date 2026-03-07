void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C013B497 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C013B8D0 )
    {
      PoUnregisterPowerSettingCallback(qword_1C013B8D0);
      qword_1C013B8D0 = 0LL;
    }
    if ( qword_1C013B960 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C013B960, qword_1C013B960 | 3, qword_1C013B960 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C013B960 = 0LL;
      }
    }
  }
}
