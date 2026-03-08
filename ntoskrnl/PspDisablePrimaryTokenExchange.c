/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x1407ED630
 * Callers:
 *     PspSystemThreadStartup @ 0x140354CF0 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x1407ED430 (PspUserThreadStartup.c)
 *     PspSecureThreadStartup @ 0x1409AE950 (PspSecureThreadStartup.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MiDeleteProcessShadow @ 0x1402A5828 (MiDeleteProcessShadow.c)
 *     KeSynchronizeAddressPolicy @ 0x1402F550C (KeSynchronizeAddressPolicy.c)
 *     PspLockUnlockProcessExclusive @ 0x1402F6A6C (PspLockUnlockProcessExclusive.c)
 *     KeKvaShadowingActive @ 0x1402FE9A0 (KeKvaShadowingActive.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14070C414 (PspOneDirectionSecurityDomainCombine.c)
 *     SeTokenIsAdmin @ 0x1407819E0 (SeTokenIsAdmin.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1)
{
  __int64 v1; // rsi
  void *v2; // rbx
  BOOL v3; // edi
  BOOL v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 1120) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 1120), 0xFu);
    PspLockUnlockProcessExclusive(v1, a1);
  }
  if ( (*(_DWORD *)(v1 + 2172) & 0x400000) == 0 )
  {
    v2 = (void *)PsReferencePrimaryTokenWithTag(v1, 0x746C6644u);
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
        _InterlockedOr(v7, 0);
      }
      KeSynchronizeAddressPolicy(v1);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0xEu)
        && *(_BYTE *)(v1 + 912) == 1
        && (PEPROCESS)v1 != PsInitialSystemProcess )
      {
        MiDeleteProcessShadow(v1, 1LL, v5, v6);
      }
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0x16u) )
      PspOneDirectionSecurityDomainCombine(v1);
  }
  _InterlockedOr(v7, 0);
}
