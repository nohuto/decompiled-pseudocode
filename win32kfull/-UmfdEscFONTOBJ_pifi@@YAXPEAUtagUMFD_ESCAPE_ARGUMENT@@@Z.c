void __fastcall UmfdEscFONTOBJ_pifi(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  struct UmfdTls *v2; // rax
  __int64 v3; // rbx
  FONTOBJ *v4; // rcx
  IFIMETRICS *v5; // rax

  v2 = UmfdTls::EnsureTls();
  v3 = 0LL;
  if ( v2 )
  {
    v4 = (FONTOBJ *)*((_QWORD *)v2 + 5);
    if ( v4 )
    {
      v5 = FONTOBJ_pifi(v4);
      if ( v5 )
        v3 = *(_QWORD *)&v5[-1].panose.bMidline;
    }
  }
  *((_QWORD *)a1 + 1) = v3;
}
