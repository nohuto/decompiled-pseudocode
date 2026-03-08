/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x140284D60
 * Callers:
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140283EB0 (MiCheckProtoPtePageState.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiCanBatchHardFaultPages @ 0x140284A30 (MiCanBatchHardFaultPages.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14028BD60 (MiFinishMdlForMappedFileFault.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiMakeFaultPfnActive @ 0x1402CD4A0 (MiMakeFaultPfnActive.c)
 *     MiReferenceDriverPage @ 0x1402E1DD4 (MiReferenceDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // r8
  __int64 v3; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 0x10000000000LL) != 0 || (v1 & 0x20000000000000LL) != 0 )
    return 0LL;
  v2 = *(_WORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  result = 0LL;
  if ( !v2 )
    return 1LL;
  if ( v2 == 1 )
  {
    if ( v3 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
      return 1LL;
  }
  else if ( v2 == 2 && v3 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
  {
    return 1LL;
  }
  return result;
}
