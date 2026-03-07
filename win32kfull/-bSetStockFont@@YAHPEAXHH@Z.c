__int64 __fastcall bSetStockFont(Gre::Base *a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  struct Gre::Base::SESSION_GLOBALS *v7; // rax

  v3 = 0;
  v4 = a2;
  if ( a1 )
  {
    v7 = Gre::Base::Globals(a1);
    if ( a3 )
      *(_QWORD *)(*((_QWORD *)v7 + 397) + 8 * v4) = a1;
    else
      *(_QWORD *)(*((_QWORD *)v7 + 396) + 8 * v4) = a1;
  }
  LOBYTE(v3) = a1 != 0LL;
  return v3;
}
