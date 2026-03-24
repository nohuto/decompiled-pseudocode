/*
 * XREFs of SeComputeCreatorDeniedRights @ 0x14034FC90
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x140662D98 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1406F6550 (ObpCreateHandle.c)
 * Callees:
 *     SeAccessCheck @ 0x140206760 (SeAccessCheck.c)
 *     SepTokenIsOwner @ 0x14027E590 (SepTokenIsOwner.c)
 *     RtlpOwnerAcesPresent @ 0x14029C4D0 (RtlpOwnerAcesPresent.c)
 *     SepGetScopedPolicySid @ 0x1405960C8 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x140597E54 (SepRmReferenceFindCap.c)
 */

__int64 __fastcall SeComputeCreatorDeniedRights(
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        __int64 a2,
        int a3,
        __int64 a4)
{
  unsigned int v7; // ebp
  __int64 v9; // rax
  __int16 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  PACCESS_TOKEN ClientToken; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v19; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-28h] BYREF
  __int64 v21; // [rsp+58h] [rbp-20h]
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+18h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  v7 = 0;
  if ( (a3 & 0xC0000) == 0 )
    return 0LL;
  v9 = *(_QWORD *)(a2 + 72);
  if ( *(_QWORD *)(v9 + 48) )
    a4 = *(_QWORD *)(v9 + 48);
  if ( !a4 )
  {
    a4 = *(_QWORD *)(a2 + 64);
    if ( !a4 )
      return 0LL;
  }
  v10 = *(_WORD *)(a4 + 2);
  if ( (v10 & 4) != 0 )
  {
    if ( v10 >= 0 )
    {
      v12 = *(_QWORD *)(a4 + 32);
    }
    else
    {
      v11 = *(unsigned int *)(a4 + 16);
      v12 = (_DWORD)v11 ? a4 + v11 : 0LL;
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( !RtlpOwnerAcesPresent(0, v12) )
  {
    if ( (v10 & 0x10) != 0 )
    {
      if ( v10 >= 0 )
      {
        v15 = *(_QWORD *)(a4 + 24);
      }
      else
      {
        v14 = *(unsigned int *)(a4 + 12);
        v15 = (_DWORD)v14 ? a4 + v14 : 0LL;
      }
    }
    else
    {
      v15 = 0LL;
    }
    v21 = 0LL;
    if ( !SepRmEnforceCap )
      return 0LL;
    if ( !v15 )
      return 0LL;
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v15);
    if ( !ScopedPolicySid )
      return 0LL;
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v19 = v21;
    if ( Cap < 0 )
      v19 = SepRmDefaultCap;
    if ( (*(_DWORD *)(v19 + 56) & 1) == 0 )
      return 0LL;
  }
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
    ClientToken = SubjectSecurityContext->PrimaryToken;
  if ( !SepTokenIsOwner((__int64)ClientToken, a4, v13, 0) )
    return 0LL;
  if ( (a3 & 0x40000) != 0
    && !SeAccessCheck(
          (PSECURITY_DESCRIPTOR)a4,
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
    v7 = 0x40000;
  }
  if ( (a3 & 0x80000) != 0
    && !SeAccessCheck(
          (PSECURITY_DESCRIPTOR)a4,
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
    v7 |= 0x80000u;
  }
  return v7;
}
