/*
 * XREFs of PsRegisterSyscallProviderServiceTableMetadata @ 0x14083A484
 * Callers:
 *     KeAddSystemServiceTable @ 0x14083A320 (KeAddSystemServiceTable.c)
 *     PsInitializeSyscallProviders @ 0x140B72884 (PsInitializeSyscallProviders.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x14093FDB8 (VslRegisterSyscallProviderServiceTableMetadata.c)
 */

__int64 __fastcall PsRegisterSyscallProviderServiceTableMetadata(unsigned int a1)
{
  __int64 v3; // rdi
  __int64 v4; // rsi

  if ( !PspSyscallProvidersEnabled )
    return 3221225629LL;
  v3 = 2LL * a1;
  v4 = *((_QWORD *)&KeServiceDescriptorTableShadow[v3 + 1] + 1);
  if ( !v4 )
    return 3221225659LL;
  if ( a1 == 1 && (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) == -1 )
    return 3221226581LL;
  return VslRegisterSyscallProviderServiceTableMetadata(a1, LODWORD(KeServiceDescriptorTableShadow[v3 + 1]), v4);
}
