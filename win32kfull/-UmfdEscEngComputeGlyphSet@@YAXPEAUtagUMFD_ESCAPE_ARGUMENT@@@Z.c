void __fastcall UmfdEscEngComputeGlyphSet(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  char *v1; // rbx
  FD_GLYPHSET *v2; // rax
  FD_GLYPHSET *v3; // rdi
  struct _FD_GLYPHSET *v4; // rcx

  v1 = (char *)a1 + 8;
  ProbeForWrite(*((volatile void **)a1 + 3), *((_QWORD *)a1 + 4), 4u);
  v2 = EngComputeGlyphSet(*(_DWORD *)v1, *((_DWORD *)v1 + 1), *((_DWORD *)v1 + 2));
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)v1 = v2->cjThis;
    v4 = (struct _FD_GLYPHSET *)*((_QWORD *)v1 + 2);
    if ( !v4 )
    {
LABEL_6:
      EngFreeMem(v3);
      return;
    }
    if ( (unsigned __int64)v2->cjThis <= *((_QWORD *)v1 + 3) )
    {
      if ( !(unsigned int)WriteFD_GLYPHSET(v4, v2, v2->cjThis) )
        *(_DWORD *)v1 = 0;
      goto LABEL_6;
    }
    EngFreeMem(v2);
  }
  *(_DWORD *)v1 = 0;
}
