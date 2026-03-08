/*
 * XREFs of HvFreeUnreconciledData @ 0x14078B7A4
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     HvFoldBackUnreconciledData @ 0x140A1DE3C (HvFoldBackUnreconciledData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeUnreconciledData(__int64 a1)
{
  void *v2; // rcx
  __int64 i; // rdi
  void *v4; // rcx

  v2 = *(void **)(a1 + 1776);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 1776) = 0LL;
    *(_BYTE *)(a1 + 1732) = 0;
  }
  if ( *(_QWORD *)(a1 + 1744) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 1768); i = (unsigned int)(i + 1) )
    {
      v4 = *(void **)(*(_QWORD *)(a1 + 1760) + 24 * i + 8);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1760), 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1744), 0);
    *(_QWORD *)(a1 + 1760) = 0LL;
    *(_DWORD *)(a1 + 1768) = 0;
    *(_DWORD *)(a1 + 1736) = 0;
    *(_QWORD *)(a1 + 1744) = 0LL;
  }
}
