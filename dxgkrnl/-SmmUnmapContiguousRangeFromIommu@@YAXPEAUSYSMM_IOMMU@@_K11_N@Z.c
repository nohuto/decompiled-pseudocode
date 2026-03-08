/*
 * XREFs of ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006EBA0
 * Callers:
 *     SmmMapExistingMemoryToDomain @ 0x1C006E778 (SmmMapExistingMemoryToDomain.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x1C006ECF0 (SmmUnmapNonPagedObjectFromIommu.c)
 *     ?SysMmUnmapIommuContiguousRange@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z @ 0x1C006EF90 (-SysMmUnmapIommuContiguousRange@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z.c)
 * Callees:
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C006ECC4 (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

void __fastcall SmmUnmapContiguousRangeFromIommu(
        struct SYSMM_IOMMU *a1,
        unsigned __int64 a2,
        struct _MDL *a3,
        SIZE_T a4,
        bool a5)
{
  SIZE_T v8; // rsi
  PMDL Mdl; // rax
  unsigned int v10; // ebx
  struct _MDL *v11; // rbp
  struct _MDL *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  struct _MDL v15; // [rsp+20h] [rbp-58h] BYREF
  struct _MDL *v16; // [rsp+50h] [rbp-28h]

  v8 = a4 >> 12;
  Mdl = MmCreateMdl(0LL, 0LL, a4);
  v10 = 0;
  v11 = Mdl;
  if ( Mdl )
  {
    v12 = Mdl + 1;
    if ( (_DWORD)v8 )
    {
      v13 = (unsigned int)v8;
      do
      {
        v12->Next = a3;
        a3 = (struct _MDL *)((char *)a3 + 1);
        v12 = (struct _MDL *)((char *)v12 + 8);
        --v13;
      }
      while ( v13 );
    }
    SmmUnmapMdlFromIommu(a1, a2, v11, a5);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v15.Next = 0LL;
    *(_DWORD *)&v15.Size = 56;
    v15.StartVa = 0LL;
    *(_QWORD *)&v15.ByteCount = 4096LL;
    if ( (_DWORD)v8 )
    {
      if ( a2 )
      {
        do
        {
          v16 = a3;
          SmmUnmapMdlFromIommu(a1, a2 + (v10++ << 12), &v15, a5);
          a3 = (struct _MDL *)((char *)a3 + 1);
        }
        while ( v10 < (unsigned int)v8 );
      }
      else
      {
        v14 = (unsigned int)v8;
        do
        {
          v16 = a3;
          SmmUnmapMdlFromIommu(a1, 0LL, &v15, a5);
          a3 = (struct _MDL *)((char *)a3 + 1);
          --v14;
        }
        while ( v14 );
      }
    }
  }
}
