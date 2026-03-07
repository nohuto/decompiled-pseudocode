void PopDisarmIdlePhaseWatchdog()
{
  _QWORD InputBuffer[13]; // [rsp+30h] [rbp-68h] BYREF

  if ( PopPdcIdlePhaseWatchdogContext )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = PopPdcIdlePhaseWatchdogContext;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C39B88);
    dword_140C39BA0 = 0;
    if ( qword_140C39B98 )
    {
      ExFreePoolWithTag(qword_140C39B98, 0x67696450u);
      qword_140C39B98 = 0LL;
    }
    PopReleaseRwLock((ULONG_PTR)&xmmword_140C39B88);
  }
}
