/*
 * XREFs of ObCreateSymbolicLink @ 0x14068F21C
 * Callers:
 *     NtCreateSymbolicLinkObject @ 0x14068EF10 (NtCreateSymbolicLinkObject.c)
 *     MiCreateMemoryEvent @ 0x1407A0C30 (MiCreateMemoryEvent.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 *     RtlIsSandboxedToken @ 0x140652B50 (RtlIsSandboxedToken.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObCreateSymbolicLink(__int64 *a1, ACCESS_MASK a2, int a3, __int64 a4, char a5)
{
  int inserted; // esi
  PADAPTER_OBJECT v9; // rbx
  PVOID PoolWithTag; // rax
  char *v12; // [rsp+20h] [rbp-48h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF

  v14 = 0LL;
  DmaAdapter = 0LL;
  inserted = ObCreateObjectEx(a5, ObpSymbolicLinkObjectType, a3, a5, v12, 40, 0, 0, &DmaAdapter, 0LL);
  if ( inserted < 0 )
  {
    v9 = DmaAdapter;
  }
  else
  {
    v9 = DmaAdapter;
    *(_QWORD *)&DmaAdapter->Version = MEMORY[0xFFFFF78000000014];
    LODWORD(v9[1].DmaOperations) = 0;
    HIDWORD(v9[1].DmaOperations) = 0;
    if ( (*(_DWORD *)a4 & 1) != 0 )
    {
      HIDWORD(v9[1].DmaOperations) = 16;
      v9->DmaOperations = *(_DMA_OPERATIONS **)(a4 + 8);
      *(_QWORD *)&v9[1].Version = *(_QWORD *)(a4 + 16);
    }
    else
    {
      WORD1(v9->DmaOperations) = *(_WORD *)(a4 + 10);
      LOWORD(v9->DmaOperations) = *(_WORD *)(a4 + 8);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a4 + 10), 0x746D7953u);
      *(_QWORD *)&v9[1].Version = PoolWithTag;
      if ( !PoolWithTag )
      {
        inserted = -1073741801;
        goto LABEL_9;
      }
      memmove(PoolWithTag, *(const void **)(a4 + 16), *(unsigned __int16 *)(a4 + 10));
    }
    if ( RtlIsSandboxedToken(0LL, a5) )
      HIDWORD(v9[1].DmaOperations) |= 2u;
    inserted = ObInsertObjectEx(v9, 0LL, a2, 0, 0, 0LL, (unsigned __int64 *)&v14);
    v9 = 0LL;
    DmaAdapter = 0LL;
    if ( inserted >= 0 )
    {
      *a1 = v14;
      inserted = 0;
    }
  }
LABEL_9:
  if ( v9 )
    HalPutDmaAdapter(v9);
  return (unsigned int)inserted;
}
