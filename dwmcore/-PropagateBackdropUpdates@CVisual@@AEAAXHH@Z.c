void __fastcall CVisual::PropagateBackdropUpdates(CVisual *this, int a2, int a3)
{
  CVisual *v3; // rax

  if ( a2 || a3 )
  {
    v3 = this;
    do
    {
      *((_DWORD *)this + 66) += a2;
      *((_DWORD *)this + 67) += a3;
      this = (CVisual *)*((_QWORD *)this + 11);
      if ( v3 )
      {
        v3 = (CVisual *)*((_QWORD *)v3 + 11);
        if ( v3 )
          v3 = (CVisual *)*((_QWORD *)v3 + 11);
      }
    }
    while ( this != v3 );
  }
}
