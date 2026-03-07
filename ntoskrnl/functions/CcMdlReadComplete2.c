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
