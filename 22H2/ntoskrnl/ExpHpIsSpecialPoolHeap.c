/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x14046B17A
 * Callers:
 *     ExReturnPoolQuota @ 0x1402ACCB0 (ExReturnPoolQuota.c)
 *     ExFreeHeapPool @ 0x140322ED0 (ExFreeHeapPool.c)
 *     ExQueryPoolBlockSize @ 0x1406079F0 (ExQueryPoolBlockSize.c)
 *     ExIsSpecialPoolAddress @ 0x14060F0F8 (ExIsSpecialPoolAddress.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140AAF008 (ExpAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpHpIsSpecialPoolHeap(__int64 a1)
{
  unsigned int v1; // edx
  __int64 *v2; // rax

  v1 = 0;
  v2 = qword_140CF7AC0;
  while ( a1 != *v2 )
  {
    if ( (__int64)++v2 >= (__int64)qword_140CF7AE0 )
      return v1;
  }
  return 1;
}
