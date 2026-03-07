bool __fastcall CPtrArrayBase::Contains(CPtrArrayBase *this)
{
  unsigned __int64 Count; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  unsigned __int64 v5; // rcx

  Count = CPtrArrayBase::GetCount(this);
  if ( !Count )
    return 0;
  if ( Count == 1 )
    return v2 == (*v3 & 0xFFFFFFFFFFFFFFFCuLL);
  v5 = *v3 & 0xFFFFFFFFFFFFFFFCuLL;
  while ( 1 )
  {
    --Count;
    if ( v2 == *(_QWORD *)(v5 + 8 * Count + 16) )
      break;
    if ( !Count )
      return 0;
  }
  return 1;
}
