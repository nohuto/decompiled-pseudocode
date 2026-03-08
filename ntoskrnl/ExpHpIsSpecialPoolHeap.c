/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x14046327A
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     ExReturnPoolQuota @ 0x1403144E0 (ExReturnPoolQuota.c)
 *     ExQueryPoolBlockSize @ 0x1406055A0 (ExQueryPoolBlockSize.c)
 *     ExIsSpecialPoolAddress @ 0x14060CCD8 (ExIsSpecialPoolAddress.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140AAB128 (ExpAllocatePoolWithQuotaTag.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpHpIsSpecialPoolHeap(__int64 a1)
{
  unsigned int v1; // edx
  __int64 *v2; // rax

  v1 = 0;
  v2 = qword_140CF7680;
  while ( a1 != *v2 )
  {
    if ( (__int64)++v2 >= (__int64)qword_140CF76A0 )
      return v1;
  }
  return 1;
}
