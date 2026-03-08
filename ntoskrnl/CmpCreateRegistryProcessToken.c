/*
 * XREFs of CmpCreateRegistryProcessToken @ 0x14081796C
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x140817300 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     SeFilterToken @ 0x140817AD0 (SeFilterToken.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCreateRegistryProcessToken(PACCESS_TOKEN *a1)
{
  PACCESS_TOKEN v2; // rdi
  struct _TOKEN_GROUPS *v3; // rsi
  void *v4; // r14
  NTSTATUS v5; // ebx
  __int64 Pool; // rax
  PVOID P; // [rsp+68h] [rbp+38h] BYREF
  PACCESS_TOKEN FilteredToken; // [rsp+70h] [rbp+40h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp+48h] BYREF

  TokenInformation = 0LL;
  v2 = 0LL;
  P = 0LL;
  FilteredToken = 0LL;
  v3 = 0LL;
  v4 = (void *)PsReferencePrimaryTokenWithTag((__int64)PsInitialSystemProcess, 0x746C6644u);
  v5 = SeQueryInformationToken(v4, TokenUser, &TokenInformation);
  if ( v5 >= 0 )
  {
    v5 = SeQueryInformationToken(v4, TokenGroups, &P);
    if ( v5 >= 0 )
    {
      Pool = CmpAllocatePool(256LL, 16LL * (unsigned int)(*(_DWORD *)P + 1) + 8, 876105027LL);
      v3 = (struct _TOKEN_GROUPS *)Pool;
      if ( Pool )
      {
        *(_DWORD *)Pool = *(_DWORD *)P + 1;
        *(_OWORD *)(Pool + 8) = *(_OWORD *)TokenInformation;
        memmove((void *)(Pool + 24), (char *)P + 8, 16LL * *(unsigned int *)P);
        v5 = SeFilterToken(v4, 1u, v3, 0LL, 0LL, &FilteredToken);
        if ( v5 < 0 )
        {
          v2 = FilteredToken;
        }
        else
        {
          v5 = 0;
          *a1 = FilteredToken;
        }
      }
      else
      {
        v5 = -1073741670;
      }
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v3 )
    CmSiFreeMemory((PPRIVILEGE_SET)v3);
  return (unsigned int)v5;
}
