/*
 * XREFs of MiIsUserQueryVmCallerTrusted @ 0x14078194C
 * Callers:
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceEffectiveToken @ 0x1406D657C (PsReferenceEffectiveToken.c)
 *     SeTokenIsAdmin @ 0x1407819E0 (SeTokenIsAdmin.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MiIsUserQueryVmCallerTrusted(__int64 a1)
{
  void *v2; // rbx
  unsigned int v3; // edi
  char v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v2 = (void *)PsReferenceEffectiveToken(a1, 0x74726853u, &v6, &v5, (__int64)&v7, 0LL);
  v3 = 0;
  if ( SeTokenIsAdmin(v2) || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, 1) )
    v3 = 1;
  if ( v6 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 544) + 1208LL), (unsigned __int64)v2, 0x74726853u);
  }
  else if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x74726853u);
  }
  return v3;
}
