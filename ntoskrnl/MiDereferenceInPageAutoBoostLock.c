/*
 * XREFs of MiDereferenceInPageAutoBoostLock @ 0x14020CA70
 * Callers:
 *     MiFreeInPageSupportBlock @ 0x140287B5C (MiFreeInPageSupportBlock.c)
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 *     MmPrefetchPagesEx @ 0x1406A387C (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x14078DBC4 (MiPrefetchControlArea.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceInPageAutoBoostLock(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
