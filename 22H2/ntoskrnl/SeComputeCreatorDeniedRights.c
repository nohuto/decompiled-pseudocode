/*
 * XREFs of SeComputeCreatorDeniedRights @ 0x1402D0420
 * Callers:
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     ObpAdjustCreatorAccessState @ 0x1406DBB88 (ObpAdjustCreatorAccessState.c)
 * Callees:
 *     SeAccessCheck @ 0x140206720 (SeAccessCheck.c)
 *     RtlpOwnerAcesPresent @ 0x1402F43F0 (RtlpOwnerAcesPresent.c)
 *     SepTokenIsOwner @ 0x1403475A0 (SepTokenIsOwner.c)
 *     SepGetScopedPolicySid @ 0x140596008 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x140597D94 (SepRmReferenceFindCap.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  PACCESS_TOKEN ClientToken; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v20; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-28h] BYREF
  __int64 v22; // [rsp+58h] [rbp-20h]
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
  if ( !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v12) )
  {
    if ( (v10 & 0x10) != 0 )
    {
      if ( v10 >= 0 )
      {
        v16 = *(_QWORD *)(a4 + 24);
      }
      else
      {
        v15 = *(unsigned int *)(a4 + 12);
        v16 = (_DWORD)v15 ? a4 + v15 : 0LL;
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
  if ( !(unsigned __int8)SepTokenIsOwner(ClientToken, a4, v14, 0LL) )
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
