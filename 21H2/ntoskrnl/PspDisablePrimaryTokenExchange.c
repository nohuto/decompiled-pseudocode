/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x140702AF8
 * Callers:
 *     PspSystemThreadStartup @ 0x1402513D0 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x140702420 (PspUserThreadStartup.c)
 * Callees:
 *     KeSynchronizeAddressPolicy @ 0x14024AC78 (KeSynchronizeAddressPolicy.c)
 *     PspLockUnlockProcessExclusive @ 0x14024BA3C (PspLockUnlockProcessExclusive.c)
 *     KeKvaShadowingActive @ 0x1402581D0 (KeKvaShadowingActive.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14066CC94 (PspOneDirectionSecurityDomainCombine.c)
 *     SeTokenIsAdmin @ 0x140695DA0 (SeTokenIsAdmin.c)
 *     MmSynchronizeAddressPolicy @ 0x1406DFF40 (MmSynchronizeAddressPolicy.c)
 *     PsReferencePrimaryToken @ 0x1407AFED0 (PsReferencePrimaryToken.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1)
{
  __int64 v1; // rsi
  PACCESS_TOKEN v2; // rbx
  BOOL v3; // edi
  BOOL v4; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 1120) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 1120), 0xFu);
    PspLockUnlockProcessExclusive(v1, a1);
  }
  if ( (*(_DWORD *)(v1 + 2172) & 0x400000) == 0 )
  {
    v2 = PsReferencePrimaryToken((PEPROCESS)v1);
    v3 = SeTokenIsAdmin(v2) != 0;
    ObfDereferenceObject(v2);
    if ( (*(_BYTE *)(v1 + 992) & 1) != 0 )
      v3 = 1;
    v4 = 0;
    if ( (*(_DWORD *)(v1 + 2172) & 0x800000) == 0 )
      v4 = v3;
    if ( v4 )
    {
      *(_QWORD *)(v1 + 2528) = 0LL;
      *(_QWORD *)(v1 + 2536) = 0LL;
    }
    if ( !(unsigned int)KeKvaShadowingActive() || (*(_DWORD *)(v1 + 2172) & 0x4000) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0xEu);
    }
    else
    {
      if ( v4 )
      {
        *(_BYTE *)(v1 + 912) = 1;
        _InterlockedOr(v5, 0);
      }
      KeSynchronizeAddressPolicy(v1);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0xEu) && *(_BYTE *)(v1 + 912) == 1 )
        MmSynchronizeAddressPolicy((struct _KPROCESS *)v1);
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0x16u) )
      PspOneDirectionSecurityDomainCombine(v1);
  }
  _InterlockedOr(v5, 0);
}
