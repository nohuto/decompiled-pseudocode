void __fastcall CManipulationContext::PropagateVisualManipulationNotificationFlag(
        struct CVisual **a1,
        char a2,
        _QWORD *a3,
        unsigned int a4)
{
  struct CVisual *v6; // rbx
  char v7; // al
  struct CVisual *v8; // rsi
  char v9; // bp
  _BYTE *v10; // rdx
  struct CVisual *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v11 = (struct CVisual *)a1;
    v6 = (struct CVisual *)a1;
    if ( a2 )
    {
      do
      {
        v7 = *((_BYTE *)v6 + 101);
        if ( (v7 & 0x40) != 0 )
          break;
        *((_BYTE *)v6 + 101) = v7 | 0x40;
        v6 = a1[11];
        a1 = (struct CVisual **)v6;
      }
      while ( v6 );
    }
    else
    {
      v8 = (struct CVisual *)a1;
      do
      {
        v9 = *((_BYTE *)v8 + 101);
        if ( (v9 & 0x40) == 0
          || CManipulationContext::VisualHasActiveInteraction(v6, a4)
          || CManipulationContext::VisualHasAnyChildFlagged(v6) )
        {
          break;
        }
        *((_BYTE *)v8 + 101) = v9 & 0xBF;
        if ( CVisual::GetInteractionInternal(v6) )
        {
          v10 = (_BYTE *)a3[1];
          if ( v10 == (_BYTE *)a3[2] )
          {
            std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>(a3, v10, &v11);
            v6 = v11;
          }
          else
          {
            *(_QWORD *)v10 = v6;
            a3[1] += 8LL;
          }
        }
        v6 = (struct CVisual *)*((_QWORD *)v6 + 11);
        v11 = v6;
        v8 = v6;
      }
      while ( v6 );
    }
  }
}
