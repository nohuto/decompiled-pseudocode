/*
 * XREFs of MiCreateSpecialPurposeMemoryPageFile @ 0x140A444FC
 * Callers:
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 * Callees:
 *     MiCreatePagefile @ 0x140835934 (MiCreatePagefile.c)
 *     MiInsertPageFileInList @ 0x140835F30 (MiInsertPageFileInList.c)
 *     MiDeletePagefile @ 0x140A2FB40 (MiDeletePagefile.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A44298 (MiCreatePagefileMemoryExtents.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateSpecialPurposeMemoryPageFile(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        UNICODE_STRING *a4)
{
  int PagefileMemoryExtents; // ebx
  char *Pagefile; // rax
  __int64 v7; // rdx
  char *v8; // rdi

  if ( (((unsigned __int16)a3 | (unsigned __int16)a2) & 0x1FF) != 0 )
  {
    PagefileMemoryExtents = -1073741811;
LABEL_11:
    if ( a4 )
      ExFreePoolWithTag(a4->Buffer, 0);
    return (unsigned int)PagefileMemoryExtents;
  }
  if ( a2 != a3 )
  {
    PagefileMemoryExtents = -1073741637;
    goto LABEL_11;
  }
  Pagefile = MiCreatePagefile(a1, 0LL, 0LL, a2, a3, a4, 0, 4);
  v8 = Pagefile;
  if ( Pagefile )
  {
    PagefileMemoryExtents = MiCreatePagefileMemoryExtents((__int64)Pagefile, v7, a2);
    if ( PagefileMemoryExtents < 0
      || (PagefileMemoryExtents = MiInsertPageFileInList((__int64)v8), PagefileMemoryExtents < 0) )
    {
      MiDeletePagefile(v8, 1);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)PagefileMemoryExtents;
}
