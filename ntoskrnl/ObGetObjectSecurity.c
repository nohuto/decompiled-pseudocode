/*
 * XREFs of ObGetObjectSecurity @ 0x1406DB220
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x140247DF0 (SepSetProcessTrustLabelAceForToken.c)
 *     DifObGetObjectSecurityWrapper @ 0x1405E60F0 (DifObGetObjectSecurityWrapper.c)
 * Callees:
 *     ObpGetObjectSecurity @ 0x1406DB240 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity(Object, SecurityDescriptor, MemoryAllocated, 0LL);
}
