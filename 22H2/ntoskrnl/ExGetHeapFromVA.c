/*
 * XREFs of ExGetHeapFromVA @ 0x14027B2FC
 * Callers:
 *     ExpHpCompactionRoutine @ 0x14027B0D0 (ExpHpCompactionRoutine.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1402D26C0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     ExReturnPoolQuota @ 0x14030631C (ExReturnPoolQuota.c)
 *     ExpResizeBigPageTable @ 0x140375AA0 (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x140389090 (ExPoolCleanupExpansionTable.c)
 *     ExQueryPoolBlockSize @ 0x1403CD600 (ExQueryPoolBlockSize.c)
 *     ExGetBigPoolInfo @ 0x1405B369C (ExGetBigPoolInfo.c)
 *     ExIsSpecialPoolAddress @ 0x1405BA000 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     RtlpHpGetOwnerHeap @ 0x14027B364 (RtlpHpGetOwnerHeap.c)
 *     MiDeterminePoolType @ 0x14027B41C (MiDeterminePoolType.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall ExGetHeapFromVA(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  int v3; // edx
  char v4; // al
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v2 = MiDeterminePoolType(BugCheckParameter3);
  v3 = 0;
  v6 = 0LL;
  if ( v2 != 32 )
    v3 = v2;
  *(_WORD *)((char *)&v6 + 1) = 1;
  v4 = 5;
  if ( v3 != 33 )
    v4 = 3;
  LOBYTE(v6) = v4;
  result = RtlpHpGetOwnerHeap(BugCheckParameter3, &v6);
  if ( !result )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  return result;
}
