/*
 * XREFs of PfSnCleanupPrefetchSectionInfo @ 0x14075D4C8
 * Callers:
 *     PfSnSectionInfoCleanupWorkItem @ 0x14075C7D0 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x14075C890 (PfSnPopulateReadList.c)
 *     PfSnCleanupPrefetchHeader @ 0x14075D3C0 (PfSnCleanupPrefetchHeader.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PfpOpenHandleClose @ 0x14075D734 (PfpOpenHandleClose.c)
 */

void __fastcall PfSnCleanupPrefetchSectionInfo(__int64 a1, __int64 a2, char a3)
{
  int v5; // eax
  void *v6; // rcx
  void *v7; // rcx

  if ( a3 )
  {
    v5 = *(_DWORD *)(a1 + 48);
    if ( (v5 & 1) != 0 )
    {
      ObfDereferenceObject(*(PVOID *)(a1 + 32));
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_DWORD *)(a1 + 48) &= ~1u;
      v5 = *(_DWORD *)(a1 + 48);
    }
    if ( (v5 & 2) != 0 )
    {
      ObfDereferenceObject(*(PVOID *)(a1 + 40));
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_DWORD *)(a1 + 48) &= ~2u;
      v5 = *(_DWORD *)(a1 + 48);
    }
    if ( (v5 & 4) != 0 )
    {
      PfpOpenHandleClose(a1, *(_QWORD *)(a2 + 8));
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0x200000000LL;
      *(_DWORD *)(a1 + 48) &= ~4u;
    }
  }
  else
  {
    v6 = *(void **)(a1 + 32);
    if ( v6 )
      ObfDereferenceObject(v6);
    v7 = *(void **)(a1 + 40);
    if ( v7 )
      ObfDereferenceObject(v7);
    if ( _bittest64((const signed __int64 *)(a1 + 24), 0x22u) )
      PfpOpenHandleClose(a1, *(_QWORD *)(a2 + 8));
  }
}
