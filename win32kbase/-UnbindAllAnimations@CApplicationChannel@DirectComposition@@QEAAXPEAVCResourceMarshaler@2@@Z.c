void __fastcall DirectComposition::CApplicationChannel::UnbindAllAnimations(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rsi
  DirectComposition::CAnimationBinding *i; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx

  if ( *((int *)this + 6) > 2 )
  {
    for ( i = (DirectComposition::CAnimationBinding *)*((_QWORD *)a2 + 5);
          i;
          i = (DirectComposition::CAnimationBinding *)*((_QWORD *)a2 + 5) )
    {
      DirectComposition::CAnimationBinding::DetachAndDelete(i, this);
    }
  }
  else
  {
    v4 = *((_QWORD *)a2 + 5);
    if ( v4 )
    {
      do
      {
        v5 = *(_DWORD *)(v4 + 8);
        v6 = *(_QWORD *)(v4 + 32);
        if ( (v5 & 2) != 0 )
        {
          v8 = (_QWORD *)((char *)this + 448);
          while ( 1 )
          {
            v9 = (_QWORD *)*v8;
            if ( !*v8 )
              break;
            if ( (struct DirectComposition::CResourceMarshaler *)v9[2] == a2 )
            {
              *v8 = *v9;
              *v9 = 0LL;
            }
            else
            {
              v8 = (_QWORD *)*v8;
            }
          }
          DirectComposition::CAnimationBinding::DetachAndDelete((DirectComposition::CAnimationBinding *)v4, this);
        }
        else if ( (v5 & 1) != 0 )
        {
          DirectComposition::CApplicationChannel::NewRemovingBinding(
            this,
            (struct DirectComposition::CAnimationBinding *)v4);
        }
        v4 = v6;
      }
      while ( v6 );
    }
  }
}
