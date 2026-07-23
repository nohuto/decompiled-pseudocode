/*
 * XREFs of PspApiSetCopyToSystemSpace @ 0x140905E88
 * Callers:
 *     PspSiloLoadApiSets @ 0x140906E74 (PspSiloLoadApiSets.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MmMapViewInSystemSpace @ 0x14061E6F0 (MmMapViewInSystemSpace.c)
 *     MmCreateSection @ 0x1406AB960 (MmCreateSection.c)
 */

__int64 __fastcall PspApiSetCopyToSystemSpace(void *Src, size_t Size, struct _DMA_ADAPTER **a3, _QWORD *a4)
{
  int v8; // eax
  struct _DMA_ADAPTER *v9; // rsi
  NTSTATUS v10; // edi
  size_t v11; // r8
  PVOID v12; // rbx
  PVOID MappedBase; // [rsp+40h] [rbp-38h] BYREF
  size_t v15; // [rsp+48h] [rbp-30h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+50h] [rbp-28h] BYREF
  PVOID Section; // [rsp+88h] [rbp+10h] BYREF

  MappedBase = 0LL;
  Section = 0LL;
  ViewSize[0] = 0LL;
  v15 = Size;
  v8 = MmCreateSection((int)&Section, 983071LL, 0, &v15, 4, 0x8000000, 0LL, 0LL);
  v9 = (struct _DMA_ADAPTER *)Section;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v10 = MmMapViewInSystemSpace(Section, &MappedBase, ViewSize);
    if ( v10 >= 0 )
    {
      v11 = Size;
      v12 = MappedBase;
      memmove(MappedBase, Src, v11);
      *a3 = v9;
      *a4 = v12;
    }
  }
  if ( v9 && v10 < 0 )
    HalPutDmaAdapter(v9);
  return (unsigned int)v10;
}
