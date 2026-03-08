/*
 * XREFs of PsIumEnableOnDemandDebugWithResponse @ 0x1409B32E8
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14093F29C (VslEnableOnDemandDebugWithResponse.c)
 */

__int64 __fastcall PsIumEnableOnDemandDebugWithResponse(ULONG_PTR a1, const void *a2, unsigned int a3)
{
  char PreviousMode; // r9
  int v6; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v6 = ObpReferenceObjectByHandleWithTag(
         a1,
         0x2000,
         (__int64)PsProcessType,
         PreviousMode,
         0x79517350u,
         &Object,
         0LL,
         0LL);
  if ( v6 >= 0 )
  {
    v6 = VslEnableOnDemandDebugWithResponse((__int64)Object, a2, a3);
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
  }
  return (unsigned int)v6;
}
