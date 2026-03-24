/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x1406C068C
 * Callers:
 *     PspSystemThreadStartup @ 0x14035D690 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x1406BFC00 (PspUserThreadStartup.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x140285DE8 (MiDeleteProcessShadow.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeSynchronizeAddressPolicy @ 0x14031B76C (KeSynchronizeAddressPolicy.c)
 *     PspLockUnlockProcessExclusive @ 0x14031C374 (PspLockUnlockProcessExclusive.c)
 *     KeKvaShadowingActive @ 0x1403289B8 (KeKvaShadowingActive.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140607670 (PspOneDirectionSecurityDomainCombine.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 *     SeTokenIsAdmin @ 0x14070E6D0 (SeTokenIsAdmin.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1)
{
  __int64 v1; // rsi
  struct _DMA_ADAPTER *v2; // rbx
  BOOL v3; // edi
  BOOL v4; // ebx
  __int64 v5; // r8
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 1120) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 1120), 0xFu);
    PspLockUnlockProcessExclusive(v1, a1);
  }
  if ( (*(_DWORD *)(v1 + 2172) & 0x400000) == 0 )
  {
    v2 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)v1);
    v3 = SeTokenIsAdmin(v2) != 0;
    HalPutDmaAdapter(v2);
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
        _InterlockedOr(v6, 0);
      }
      KeSynchronizeAddressPolicy(v1);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0xEu)
        && *(_BYTE *)(v1 + 912) == 1
        && (PEPROCESS)v1 != PsInitialSystemProcess )
      {
        MiDeleteProcessShadow(v1, 1, v5);
      }
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0x16u) )
      PspOneDirectionSecurityDomainCombine(v1);
  }
  _InterlockedOr(v6, 0);
}
