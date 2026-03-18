/*
 * XREFs of PsInitializeSyscallProviders @ 0x140B76D74
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x14083B774 (PsRegisterSyscallProviderServiceTableMetadata.c)
 */

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
