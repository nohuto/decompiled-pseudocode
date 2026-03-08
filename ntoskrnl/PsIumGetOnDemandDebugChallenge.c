/*
 * XREFs of PsIumGetOnDemandDebugChallenge @ 0x1409B3380
 * Callers:
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     VslGetOnDemandDebugChallenge @ 0x14093F40C (VslGetOnDemandDebugChallenge.c)
 */

__int64 __fastcall PsIumGetOnDemandDebugChallenge(ULONG_PTR a1, void *a2, unsigned int a3, _DWORD *a4)
{
  char PreviousMode; // r9
  int v8; // ebx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  v8 = ObpReferenceObjectByHandleWithTag(a1, 4096, (__int64)PsProcessType, PreviousMode, 0x79517350u, Object, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v8 = VslGetOnDemandDebugChallenge((__int64)Object[0], a2, a3, a4);
    ObfDereferenceObjectWithTag(Object[0], 0x79517350u);
  }
  return (unsigned int)v8;
}
