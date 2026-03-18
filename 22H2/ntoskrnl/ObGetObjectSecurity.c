/*
 * XREFs of ObGetObjectSecurity @ 0x140736700
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1402B3710 (SepSetProcessTrustLabelAceForToken.c)
 *     DifObGetObjectSecurityWrapper @ 0x1405E85A0 (DifObGetObjectSecurityWrapper.c)
 * Callees:
 *     ObpGetObjectSecurity @ 0x140736720 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity(Object, SecurityDescriptor, MemoryAllocated, 0LL);
}
