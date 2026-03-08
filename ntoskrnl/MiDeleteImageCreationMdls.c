/*
 * XREFs of MiDeleteImageCreationMdls @ 0x14077E610
 * Callers:
 *     MiCreateNewSection @ 0x1406A6414 (MiCreateNewSection.c)
 *     MiCreateImageFileMap @ 0x1407F1C28 (MiCreateImageFileMap.c)
 *     MiCreateMdl @ 0x1407F223C (MiCreateMdl.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MiReturnPfnReferenceCount @ 0x1402EDD4C (MiReturnPfnReferenceCount.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageCreationMdls(PMDL MemoryDescriptorList, int a2)
{
  PMDL v3; // rbx
  CSHORT MdlFlags; // ax
  struct _MDL *Next; // rbp
  struct _MDL *v6; // rsi
  unsigned __int64 i; // rdi

  if ( MemoryDescriptorList )
  {
    v3 = MemoryDescriptorList;
    do
    {
      MdlFlags = v3->MdlFlags;
      Next = v3->Next;
      if ( (MdlFlags & 4) != 0 )
      {
        ExFreePoolWithTag(v3->StartVa, 0);
      }
      else if ( (MdlFlags & 2) != 0 )
      {
        if ( (MdlFlags & 1) != 0 )
          MmUnmapLockedPages(v3->MappedSystemVa, v3);
        if ( a2 )
        {
          v6 = v3 + 1;
          for ( i = (unsigned __int64)v3->ByteCount >> 12; i; --i )
          {
            if ( v6->Next != (struct _MDL *)-1LL )
              MiReturnPfnReferenceCount(48 * (__int64)v6->Next - 0x220000000000LL);
            v6 = (struct _MDL *)((char *)v6 + 8);
          }
        }
      }
      IoFreeMdl(v3);
      v3 = Next;
    }
    while ( Next );
  }
}
