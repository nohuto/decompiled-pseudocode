/*
 * XREFs of SpVerifierInitialization @ 0x1C007BC7C
 * Callers:
 *     DllInitialize @ 0x1C004C5A0 (DllInitialize.c)
 * Callees:
 *     <none>
 */

bool SpVerifierInitialization()
{
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  VerifierFlags = 0;
  return MmIsVerifierEnabled(&VerifierFlags) >= 0 && MmAddVerifierThunks(&StorPortVerifierFunctionTable, 0x180u) >= 0;
}
