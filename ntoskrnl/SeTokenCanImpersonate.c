/*
 * XREFs of SeTokenCanImpersonate @ 0x1406DA880
 * Callers:
 *     PsImpersonateClient @ 0x1406DA310 (PsImpersonateClient.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140206B10 (SeTokenIsRestricted.c)
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     RtlSidDominatesForTrust @ 0x140247D00 (RtlSidDominatesForTrust.c)
 *     SeTokenIsWriteRestricted @ 0x1402B8710 (SeTokenIsWriteRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x1402E9D34 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x1402E9D68 (SepAcquireOrderedReadLocks.c)
 *     SepCopyTokenIntegrity @ 0x14030FED0 (SepCopyTokenIntegrity.c)
 *     RtlSidDominates @ 0x14030FF10 (RtlSidDominates.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1405B6E38 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140744780 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsElevated @ 0x140782960 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x140785410 (RtlQueryElevationFlags.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409B9428 (RtlIsParentOfChildAppContainer.c)
 */

__int64 __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  __int64 result; // rax
  _BYTE *v7; // r11
  int IsElevated; // esi
  int v9; // eax
  void *v10; // rdi
  void *v11; // rbx
  void *v12; // rbp
  void *v13; // r14
  char IsParentOfChildAppContainer; // al
  __int128 Buf2; // [rsp+20h] [rbp-48h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-38h] BYREF
  char v18; // [rsp+70h] [rbp+8h] BYREF
  bool v19; // [rsp+78h] [rbp+10h] BYREF
  char v20; // [rsp+80h] [rbp+18h] BYREF
  int v21; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  *a4 = 0;
  Buf1 = 0LL;
  Buf2 = 0LL;
  if ( a3 < 2 )
    return 0LL;
  if ( *(_DWORD *)(a2 + 24) == 998 && !*(_DWORD *)(a2 + 28) )
  {
    if ( (*(_DWORD *)(Token + 200) & 0x4000) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
        return 3221225569LL;
      v10 = *(void **)(a2 + 784);
      v11 = *(void **)(Token + 784);
      if ( !RtlEqualSid(v11, v10) && !(unsigned __int8)RtlIsParentOfChildAppContainer(v11, v10) )
        return 3221225569LL;
    }
    return 0LL;
  }
  result = RtlSidDominatesForTrust(*(_QWORD *)(Token + 1104), *(_QWORD *)(a2 + 1104), &v18);
  if ( (int)result < 0 )
    return result;
  if ( !v18 )
    *v7 = 1;
  if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) == 0 )
  {
    SepAcquireOrderedReadLocks(Token, a2);
    SepCopyTokenIntegrity(Token, (__int64)&Buf1);
    SepCopyTokenIntegrity(a2, (__int64)&Buf2);
    IsElevated = RtlSidDominates((_DWORD *)Buf1, (_DWORD *)Buf2, &v19);
    if ( IsElevated >= 0 )
    {
      if ( !v19 )
        goto LABEL_38;
      if ( (unsigned __int8)SepIsImpersonationAllowedDueToCapability((PACCESS_TOKEN)Token)
        || *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
      {
        IsElevated = 0;
        goto LABEL_24;
      }
      if ( !RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
      {
LABEL_38:
        IsElevated = -1073741727;
        goto LABEL_24;
      }
      if ( (int)RtlQueryElevationFlags(&v21) < 0 || (v21 & 1) == 0 )
      {
LABEL_21:
        IsElevated = 0;
        if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
          || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
          && ((v12 = *(void **)(a2 + 784), v13 = *(void **)(Token + 784), RtlEqualSid(v13, v12))
           || (IsParentOfChildAppContainer = RtlIsParentOfChildAppContainer(v13, v12)) != 0) )
        {
          if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
            || SeTokenIsRestricted((PACCESS_TOKEN)a2)
            && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
          {
            v9 = *(_DWORD *)(a2 + 120);
            if ( *(_DWORD *)(Token + 120) == v9 || v9 )
              goto LABEL_24;
          }
        }
        goto LABEL_38;
      }
      IsElevated = SeTokenIsElevated(a2, &v20);
      if ( IsElevated >= 0 )
      {
        if ( v20 )
        {
          IsElevated = SeTokenIsElevated(Token, &v20);
          if ( IsElevated < 0 )
            goto LABEL_24;
          if ( !v20 && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0 )
            goto LABEL_38;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0
          && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 4) == 0 )
        {
          SepLogUnmatchedSessionFlagImpersonationAttempt(Token, a2);
          goto LABEL_38;
        }
        goto LABEL_21;
      }
    }
LABEL_24:
    SepReleaseOrderedReadLocks(Token, a2);
    return (unsigned int)IsElevated;
  }
  return 0LL;
}
