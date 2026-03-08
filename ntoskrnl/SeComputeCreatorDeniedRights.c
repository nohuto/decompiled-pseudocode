/*
 * XREFs of SeComputeCreatorDeniedRights @ 0x140311EB0
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x140698E40 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 * Callees:
 *     SepTokenIsOwner @ 0x1402077E0 (SepTokenIsOwner.c)
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     RtlpOwnerAcesPresent @ 0x1402CBBC0 (RtlpOwnerAcesPresent.c)
 *     SepGetScopedPolicySid @ 0x1405B57D4 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1405B7498 (SepRmReferenceFindCap.c)
 */

__int64 __fastcall SeComputeCreatorDeniedRights(
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        __int64 a2,
        int a3,
        __int64 a4)
{
  unsigned int v6; // esi
  __int64 v8; // rbp
  __int16 v9; // r15
  __int16 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  PACCESS_TOKEN ClientToken; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v20; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-30h]
  NTSTATUS AccessStatus; // [rsp+A0h] [rbp+18h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  v6 = 0;
  if ( (a3 & 0xC0000) == 0 )
    return 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 48LL);
  if ( !v8 )
  {
    v8 = a4;
    if ( !a4 )
    {
      v8 = *(_QWORD *)(a2 + 64);
      if ( !v8 )
        return 0LL;
    }
  }
  v9 = *(_WORD *)(v8 + 2);
  v10 = v9 & 0x8000;
  if ( (v9 & 4) != 0 )
  {
    if ( v10 )
    {
      v11 = *(unsigned int *)(v8 + 16);
      v12 = (_DWORD)v11 ? v11 + v8 : 0LL;
    }
    else
    {
      v12 = *(_QWORD *)(v8 + 32);
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( !RtlpOwnerAcesPresent(0, v12) )
  {
    if ( (v9 & 0x10) != 0 )
    {
      if ( v10 )
      {
        v15 = *(unsigned int *)(v8 + 12);
        v16 = (_DWORD)v15 ? v15 + v8 : 0LL;
      }
      else
      {
        v16 = *(_QWORD *)(v8 + 24);
      }
    }
    else
    {
      v16 = 0LL;
    }
    v22 = 0LL;
    if ( !SepRmEnforceCap )
      return 0LL;
    if ( !v16 )
      return 0LL;
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v16, v13, v14);
    if ( !ScopedPolicySid )
      return 0LL;
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v20 = v22;
    if ( Cap < 0 )
      v20 = SepRmDefaultCap;
    if ( (*(_DWORD *)(v20 + 56) & 1) == 0 )
      return 0LL;
  }
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
    ClientToken = SubjectSecurityContext->PrimaryToken;
  if ( !(unsigned __int8)SepTokenIsOwner((__int64)ClientToken, v8) )
    return 0LL;
  if ( (a3 & 0x40000) != 0
    && !SeAccessCheck(
          (PSECURITY_DESCRIPTOR)v8,
          SubjectSecurityContext,
          1u,
          0x40000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&StandardBitMapping,
          KeGetCurrentThread()->PreviousMode,
          &GrantedAccess,
          &AccessStatus) )
  {
    v6 = 0x40000;
  }
  if ( (a3 & 0x80000) != 0
    && !SeAccessCheck(
          (PSECURITY_DESCRIPTOR)v8,
          SubjectSecurityContext,
          1u,
          0x80000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&StandardBitMapping,
          KeGetCurrentThread()->PreviousMode,
          &GrantedAccess,
          &AccessStatus) )
  {
    v6 |= 0x80000u;
  }
  return v6;
}
