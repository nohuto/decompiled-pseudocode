/*
 * XREFs of MiCreateCombineAnchor @ 0x14034A2A4
 * Callers:
 *     MiConvertStandbyToProto @ 0x14029ED24 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14034A20C (MiConvertPrivateToProto.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateCombineBlock @ 0x140229F50 (MiLocateCombineBlock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiIncrementCombinedPte @ 0x14034A354 (MiIncrementCombinedPte.c)
 */

__int64 __fastcall MiCreateCombineAnchor(__int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v8; // rbp
  _QWORD *CombineBlock; // rax
  _QWORD *v10; // rbx

  v3 = 0;
  v4 = *a1;
  v5 = a1[14];
  v8 = *a1 + 16LL * (*(_DWORD *)(a2 + 8) & 0xF);
  *a3 = 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v8 + 104));
  CombineBlock = MiLocateCombineBlock(v4, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 32), 1, (_QWORD *)(a2 + 24));
  v10 = CombineBlock;
  if ( CombineBlock )
  {
    if ( (unsigned int)MiIncrementCombinedPte(v5, CombineBlock + 4) )
    {
      v3 = -1073741302;
      *a3 = v10;
    }
    else
    {
      v3 = -1073741670;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 104));
  return v3;
}
