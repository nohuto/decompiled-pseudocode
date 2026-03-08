/*
 * XREFs of ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C0222AF0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00647C8 (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

void __fastcall xxxUpdateWindowPositionsForDpiBoundaryChange(struct tagWLDBI *a1)
{
  struct tagWLDBI *v1; // rbx
  const struct tagWND *v2; // rax
  struct tagWND *v3; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)v1 + 1), 1);
      v3 = v2;
      if ( v2 && (*((_DWORD *)v1 + 7) || *((_DWORD *)v1 + 6) || IsChildWindowDpiBoundary(v2)) )
        xxxSetWindowPos(v3, 0LL, *((unsigned int *)v1 + 4), *((unsigned int *)v1 + 5), 0, 0, 21);
      v1 = *(struct tagWLDBI **)v1;
    }
    while ( v1 );
  }
}
