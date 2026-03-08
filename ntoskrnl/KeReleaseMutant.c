/*
 * XREFs of KeReleaseMutant @ 0x14030E920
 * Callers:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     EtwpEnableMetaProviderGuid @ 0x140204F18 (EtwpEnableMetaProviderGuid.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140317800 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14035C910 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14035D974 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14036C9E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14039D7D4 (LdrpSetAlternateResourceModuleHandle.c)
 *     DifKeReleaseMutantWrapper @ 0x1405E27E0 (DifKeReleaseMutantWrapper.c)
 *     DifKeReleaseMutexWrapper @ 0x1405E2920 (DifKeReleaseMutexWrapper.c)
 *     EtwpFixBootLoggers @ 0x140B6569C (EtwpFixBootLoggers.c)
 * Callees:
 *     KeReleaseMutantEx @ 0x14040A86C (KeReleaseMutantEx.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  KeReleaseMutantEx((ULONG_PTR)Mutant);
  return 0;
}
