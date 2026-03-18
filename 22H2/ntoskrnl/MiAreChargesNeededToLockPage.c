/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x1402CDF90
 * Callers:
 *     MiCanBatchHardFaultPages @ 0x1402CDC60 (MiCanBatchHardFaultPages.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402DBE30 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x1402DD200 (MiLockProtoPoolPage.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402E1B40 (MiFinishMdlForMappedFileFault.c)
 *     MiAddLockedPageCharge @ 0x1402EF368 (MiAddLockedPageCharge.c)
 *     MiReferenceDriverPage @ 0x1403259BC (MiReferenceDriverPage.c)
 *     MiMakeFaultPfnActive @ 0x140334D40 (MiMakeFaultPfnActive.c)
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
