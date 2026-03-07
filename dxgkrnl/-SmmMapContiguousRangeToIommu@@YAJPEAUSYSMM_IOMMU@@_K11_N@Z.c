__int64 __fastcall SmmMapContiguousRangeToIommu(
        struct SYSMM_IOMMU *a1,
        __int64 a2,
        struct _MDL *a3,
        SIZE_T a4,
        bool a5)
{
  SIZE_T v8; // rsi
  int v9; // r14d
  PMDL Mdl; // rax
  struct _MDL *v11; // rbx
  struct _MDL *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned int i; // esi
  unsigned __int64 v17; // rdx
  struct _MDL v19; // [rsp+20h] [rbp-58h] BYREF
  struct _MDL *v20; // [rsp+50h] [rbp-28h]

  v8 = a4 >> 12;
  v9 = 0;
  Mdl = MmCreateMdl(0LL, 0LL, a4);
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
    v9 = SmmMapMdlToIommu(a1, a2, v11, a5);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v19.Next = 0LL;
    v14 = 0;
    *(_DWORD *)&v19.Size = 56;
    v19.StartVa = 0LL;
    *(_QWORD *)&v19.ByteCount = 4096LL;
    if ( (_DWORD)v8 )
    {
      while ( 1 )
      {
        v20 = (struct _MDL *)((char *)a3 + v14);
        v15 = a2 ? a2 + (v14 << 12) : 0LL;
        v9 = SmmMapMdlToIommu(a1, v15, &v19, a5);
        if ( v9 < 0 )
          break;
        if ( ++v14 >= (unsigned int)v8 )
          return (unsigned int)v9;
      }
      for ( i = 0; i < v14; a3 = (struct _MDL *)((char *)a3 + 1) )
      {
        v20 = a3;
        if ( a2 )
          v17 = a2 + (i << 12);
        else
          v17 = 0LL;
        SmmUnmapMdlFromIommu(a1, v17, &v19, a5);
        ++i;
      }
    }
  }
  return (unsigned int)v9;
}
