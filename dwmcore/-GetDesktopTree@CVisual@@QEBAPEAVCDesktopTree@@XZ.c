struct CDesktopTree *__fastcall CVisual::GetDesktopTree(CVisual *this)
{
  __int64 v1; // rbx
  CVisual *v2; // rdi
  struct CVisualTree *VisualTreeNoRef; // rax
  struct CVisualTree *v4; // rsi

  v1 = 0LL;
  v2 = this;
  if ( this )
  {
    while ( 1 )
    {
      VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v2);
      v4 = VisualTreeNoRef;
      if ( VisualTreeNoRef )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)VisualTreeNoRef + 184LL))(VisualTreeNoRef) )
          break;
      }
      v2 = (CVisual *)*((_QWORD *)v2 + 11);
      if ( !v2 )
        return (struct CDesktopTree *)v1;
    }
    return v4;
  }
  return (struct CDesktopTree *)v1;
}
