void PsInitializeSyscallProviders()
{
  _QWORD v0[14]; // [rsp+20h] [rbp-88h] BYREF

  if ( VslVsmEnabled
    && (memset(v0, 0, 0x68uLL),
        v0[2] = 32LL,
        v0[1] = &PspServiceDescriptorGroupTable,
        (int)VslpEnterIumSecureMode(2u, 231, 0, (__int64)v0) >= 0) )
  {
    PspSyscallProvidersEnabled = 1;
    PsRegisterSyscallProviderServiceTableMetadata(0);
  }
  else
  {
    PspSyscallProvidersEnabled = 0;
  }
}
