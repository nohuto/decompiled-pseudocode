char __fastcall CManipulationContext::VisualHasAnyChildFlagged(struct CVisual *a1)
{
  CPtrArrayBase *v1; // r10
  unsigned __int64 Count; // rax
  unsigned __int64 v3; // rdx
  __int64 *v4; // rcx
  char v5; // r8
  unsigned __int64 *v6; // rax

  v1 = (struct CVisual *)((char *)a1 + 80);
  while ( 1 )
  {
    Count = CPtrArrayBase::GetCount(v1);
    if ( v3 >= Count )
      break;
    v6 = CPtrArrayBase::operator[](v4, v3);
    if ( v6 && (*((_BYTE *)v6 + 101) & 0x40) != 0 )
      return 1;
  }
  return v5;
}
