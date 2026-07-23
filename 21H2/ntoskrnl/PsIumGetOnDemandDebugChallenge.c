/*
 * XREFs of PsIumGetOnDemandDebugChallenge @ 0x14090CB78
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     VslGetOnDemandDebugChallenge @ 0x14088F9D4 (VslGetOnDemandDebugChallenge.c)
 */

__int64 __fastcall PsIumGetOnDemandDebugChallenge(void *a1, void *a2, unsigned int a3, _DWORD *a4)
{
  int v7; // ebx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  Object = 0LL;
  v7 = ObReferenceObjectByHandleWithTag(
         a1,
         0x1000u,
         (POBJECT_TYPE)PsProcessType,
         KeGetCurrentThread()->PreviousMode,
         0x79517350u,
         &Object,
         0LL);
  if ( v7 >= 0 )
  {
    v7 = VslGetOnDemandDebugChallenge((__int64)Object, a2, a3, a4);
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
  }
  return (unsigned int)v7;
}
