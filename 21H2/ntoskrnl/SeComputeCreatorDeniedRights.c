/*
 * XREFs of SeComputeCreatorDeniedRights @ 0x1402AC350
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x1407227B0 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x14022A380 (RtlpOwnerAcesPresent.c)
 *     SepTokenIsOwner @ 0x1402A45CC (SepTokenIsOwner.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     SepGetScopedPolicySid @ 0x1405F4288 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1405F5D18 (SepRmReferenceFindCap.c)
 */

__int64 __fastcall SeComputeCreatorDeniedRights(
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        __int64 a2,
        int a3,
        __int64 a4)
{
  unsigned int v6; // esi
  __int64 v8; // rbp
  __int16 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  PACCESS_TOKEN ClientToken; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v17; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+58h] [rbp-20h]
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+18h] BYREF

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
  if ( (v9 & 4) != 0 )
  {
    if ( v9 >= 0 )
    {
      v11 = *(_QWORD *)(v8 + 32);
    }
    else
    {
      v10 = *(unsigned int *)(v8 + 16);
      v11 = (_DWORD)v10 ? v10 + v8 : 0LL;
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( !RtlpOwnerAcesPresent(0, v11) )
  {
    if ( (v9 & 0x10) != 0 )
    {
      if ( v9 >= 0 )
      {
        v13 = *(_QWORD *)(v8 + 24);
      }
      else
      {
        v12 = *(unsigned int *)(v8 + 12);
        v13 = (_DWORD)v12 ? v12 + v8 : 0LL;
      }
    }
    else
    {
      v13 = 0LL;
    }
    v19 = 0LL;
    if ( !SepRmEnforceCap )
      return 0LL;
    if ( !v13 )
      return 0LL;
    ScopedPolicySid = (void *)SepGetScopedPolicySid();
    if ( !ScopedPolicySid )
      return 0LL;
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v17 = v19;
    if ( Cap < 0 )
      v17 = SepRmDefaultCap;
    if ( (*(_DWORD *)(v17 + 56) & 1) == 0 )
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
