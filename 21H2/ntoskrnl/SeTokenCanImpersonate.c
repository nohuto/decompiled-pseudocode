/*
 * XREFs of SeTokenCanImpersonate @ 0x14065B420
 * Callers:
 *     PsImpersonateClient @ 0x14065AEA0 (PsImpersonateClient.c)
 * Callees:
 *     RtlSidDominates @ 0x140252890 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14025299C (SepCopyTokenIntegrity.c)
 *     RtlEqualSid @ 0x14027C9E0 (RtlEqualSid.c)
 *     RtlSidDominatesForTrust @ 0x14027DDE0 (RtlSidDominatesForTrust.c)
 *     SeTokenIsRestricted @ 0x14035FFF0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140360010 (SeTokenIsWriteRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x140360024 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x140360058 (SepAcquireOrderedReadLocks.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1405972B8 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     RtlIsParentOfChildAppContainer @ 0x140673594 (RtlIsParentOfChildAppContainer.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x14069CD74 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsElevated @ 0x1406A1840 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1406A75E0 (RtlQueryElevationFlags.c)
 */

__int64 __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  __int64 result; // rax
  void *v7; // rbx
  void *v8; // rdi
  _BYTE *v9; // r11
  int IsElevated; // ebx
  void *v11; // rbp
  void *v12; // r14
  int v13; // eax
  char v14; // [rsp+70h] [rbp+8h] BYREF
  bool v15; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  *a4 = 0;
  if ( a3 < 2 )
    return 0LL;
  if ( *(_DWORD *)(a2 + 24) == 998 && !*(_DWORD *)(a2 + 28) )
  {
    if ( (*(_DWORD *)(Token + 200) & 0x4000) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
        return 3221225569LL;
      v7 = *(void **)(a2 + 784);
      v8 = *(void **)(Token + 784);
      if ( !RtlEqualSid(v8, v7) && !(unsigned __int8)RtlIsParentOfChildAppContainer(v8, v7) )
        return 3221225569LL;
    }
    return 0LL;
  }
  result = RtlSidDominatesForTrust(*(_QWORD *)(Token + 1104), *(_QWORD *)(a2 + 1104), &v14);
  if ( (int)result < 0 )
    return result;
  if ( !v14 )
    *v9 = 1;
  if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) != 0 )
    return 0LL;
  SepAcquireOrderedReadLocks(Token, a2);
  SepCopyTokenIntegrity(Token);
  SepCopyTokenIntegrity(a2);
  IsElevated = RtlSidDominates(0LL, 0LL, &v15);
  if ( IsElevated >= 0 )
  {
    if ( !v15 )
      goto LABEL_42;
    if ( (unsigned __int8)SepIsImpersonationAllowedDueToCapability((PACCESS_TOKEN)Token)
      || *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
    {
      IsElevated = 0;
      goto LABEL_43;
    }
    if ( !RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
    {
LABEL_42:
      IsElevated = -1073741727;
      goto LABEL_43;
    }
    if ( (int)RtlQueryElevationFlags(&v17) < 0 || (v17 & 1) == 0 )
      goto LABEL_32;
    IsElevated = SeTokenIsElevated(a2, &v16);
    if ( IsElevated >= 0 )
    {
      if ( !v16 )
        goto LABEL_29;
      IsElevated = SeTokenIsElevated(Token, &v16);
      if ( IsElevated >= 0 )
      {
        if ( !v16 && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0 )
          goto LABEL_42;
LABEL_29:
        if ( (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0
          && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 4) == 0 )
        {
          SepLogUnmatchedSessionFlagImpersonationAttempt(Token, a2);
          goto LABEL_42;
        }
LABEL_32:
        IsElevated = 0;
        if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
          || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
          && ((v11 = *(void **)(a2 + 784), v12 = *(void **)(Token + 784), RtlEqualSid(v12, v11))
           || (unsigned __int8)RtlIsParentOfChildAppContainer(v12, v11)) )
        {
          if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
            || SeTokenIsRestricted((PACCESS_TOKEN)a2)
            && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
          {
            v13 = *(_DWORD *)(a2 + 120);
            if ( *(_DWORD *)(Token + 120) == v13 || v13 )
              goto LABEL_43;
          }
        }
        goto LABEL_42;
      }
    }
  }
LABEL_43:
  SepReleaseOrderedReadLocks(Token, a2);
  return (unsigned int)IsElevated;
}
