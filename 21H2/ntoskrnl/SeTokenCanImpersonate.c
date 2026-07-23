/*
 * XREFs of SeTokenCanImpersonate @ 0x140650240
 * Callers:
 *     PsImpersonateClient @ 0x14064FCC0 (PsImpersonateClient.c)
 * Callees:
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     RtlSidDominatesForTrust @ 0x14026BD80 (RtlSidDominatesForTrust.c)
 *     RtlSidDominates @ 0x140285740 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14028584C (SepCopyTokenIntegrity.c)
 *     SeTokenIsRestricted @ 0x1402A4F20 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x1402A4F40 (SeTokenIsWriteRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x1402A4F54 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x1402A4F88 (SepAcquireOrderedReadLocks.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1405974E8 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405FBE44 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsElevated @ 0x140601774 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x140605060 (RtlQueryElevationFlags.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406687C4 (RtlIsParentOfChildAppContainer.c)
 */

NTSTATUS __fastcall SeTokenCanImpersonate(_DWORD *Token, _DWORD *a2, int a3, _BYTE *a4)
{
  NTSTATUS result; // eax
  void *v7; // rbx
  void *v8; // rdi
  _BYTE *v9; // r11
  int IsElevated; // ebx
  void *v11; // rbp
  void *v12; // r14
  int v13; // eax
  BOOLEAN DominatesTrust; // [rsp+70h] [rbp+8h] BYREF
  BOOLEAN Dominates; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+88h] [rbp+20h] BYREF

  Dominates = 0;
  DominatesTrust = 0;
  v16 = 0;
  Flags.Flags = 0;
  *a4 = 0;
  if ( a3 < 2 )
    return 0;
  if ( a2[6] == 998 && !a2[7] )
  {
    if ( (Token[50] & 0x4000) != 0 )
    {
      if ( (a2[50] & 0x4000) == 0 )
        return -1073741727;
      v7 = (void *)*((_QWORD *)a2 + 98);
      v8 = (void *)*((_QWORD *)Token + 98);
      if ( !RtlEqualSid(v8, v7) && !RtlIsParentOfChildAppContainer(v8, v7) )
        return -1073741727;
    }
    return 0;
  }
  result = RtlSidDominatesForTrust(*((PSID *)Token + 138), *((PSID *)a2 + 138), &DominatesTrust);
  if ( result < 0 )
    return result;
  if ( !DominatesTrust )
    *v9 = 1;
  if ( (Token[16] & Token[18] & 0x20000000) != 0 )
    return 0;
  SepAcquireOrderedReadLocks((unsigned __int64)Token, (unsigned __int64)a2);
  SepCopyTokenIntegrity();
  SepCopyTokenIntegrity();
  IsElevated = RtlSidDominates(0LL, 0LL, &Dominates);
  if ( IsElevated >= 0 )
  {
    if ( !Dominates )
      goto LABEL_42;
    if ( SepIsImpersonationAllowedDueToCapability((char *)Token, (__int64)a2)
      || Token[6] == a2[56] && Token[7] == a2[57] )
    {
      IsElevated = 0;
      goto LABEL_43;
    }
    if ( !RtlEqualSid(**((PSID **)Token + 19), **((PSID **)a2 + 19)) )
    {
LABEL_42:
      IsElevated = -1073741727;
      goto LABEL_43;
    }
    if ( RtlQueryElevationFlags(&Flags) < 0 || (Flags.Flags & 1) == 0 )
      goto LABEL_32;
    IsElevated = SeTokenIsElevated(a2, &v16);
    if ( IsElevated >= 0 )
    {
      if ( !v16 )
        goto LABEL_29;
      IsElevated = SeTokenIsElevated(Token, &v16);
      if ( IsElevated >= 0 )
      {
        if ( !v16 && (*(_DWORD *)(*((_QWORD *)Token + 27) + 32LL) & 4) != 0 )
          goto LABEL_42;
LABEL_29:
        if ( (*(_DWORD *)(*((_QWORD *)Token + 27) + 32LL) & 4) != 0
          && (*(_DWORD *)(*((_QWORD *)a2 + 27) + 32LL) & 4) == 0 )
        {
          SepLogUnmatchedSessionFlagImpersonationAttempt((__int64)Token, (__int64)a2);
          goto LABEL_42;
        }
LABEL_32:
        IsElevated = 0;
        if ( (Token[50] & 0x4000) == 0
          || (a2[50] & 0x4000) != 0
          && ((v11 = (void *)*((_QWORD *)a2 + 98), v12 = (void *)*((_QWORD *)Token + 98), RtlEqualSid(v12, v11))
           || RtlIsParentOfChildAppContainer(v12, v11)) )
        {
          if ( !SeTokenIsRestricted(Token)
            || SeTokenIsRestricted(a2) && (SeTokenIsWriteRestricted(Token) || !SeTokenIsWriteRestricted(a2)) )
          {
            v13 = a2[30];
            if ( Token[30] == v13 || v13 )
              goto LABEL_43;
          }
        }
        goto LABEL_42;
      }
    }
  }
LABEL_43:
  SepReleaseOrderedReadLocks((__int64)Token, (__int64)a2);
  return IsElevated;
}
