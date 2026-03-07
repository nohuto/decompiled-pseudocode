void __fastcall CBaseExpression::ForceDependentAnimationsDirtied(CBaseExpression *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 SourceAnimationsForProperty; // rax
  __int64 v4; // rdi

  v1 = 0;
  if ( *((_QWORD *)this + 21) )
  {
    v2 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 21) = 0LL;
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 16) )
      {
        SourceAnimationsForProperty = CResource::GetSourceAnimationsForProperty(
                                        *(_QWORD *)(v2 + 16),
                                        *((_DWORD *)this + 48));
        v4 = SourceAnimationsForProperty;
        if ( SourceAnimationsForProperty )
        {
          if ( *(_DWORD *)(SourceAnimationsForProperty + 24) )
          {
            do
              CBaseExpression::ForceDependentAnimationsDirtied(*(CBaseExpression **)(*(_QWORD *)v4 + 8LL * v1++));
            while ( v1 < *(_DWORD *)(v4 + 24) );
          }
        }
      }
    }
  }
}
