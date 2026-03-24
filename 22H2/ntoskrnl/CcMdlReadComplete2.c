/*
 * XREFs of CcMdlReadComplete2 @ 0x1407028C8
 * Callers:
 *     FsRtlMdlReadCompleteDev @ 0x14035AB40 (FsRtlMdlReadCompleteDev.c)
 *     CcMdlReadComplete @ 0x14069F2D0 (CcMdlReadComplete.c)
 * Callees:
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 */

void __fastcall CcMdlReadComplete2(__int64 a1, struct _MDL *a2)
{
  struct _MDL *v2; // rdi
  struct _MDL *Next; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      Next = v2->Next;
      MmUnlockPages(v2);
      IoFreeMdl(v2);
      v2 = Next;
    }
    while ( Next );
  }
}
