struct _LIST_ENTRY *__fastcall CVisual::GetTreeDataListHead(CVisual *this)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // rdx
  _BYTE *v4; // r9
  unsigned int i; // eax

  v1 = *((_QWORD *)this + 29);
  v2 = 0LL;
  if ( *(int *)v1 >= 0 )
    return 0LL;
  v3 = *(unsigned int *)(v1 + 4);
  v4 = (_BYTE *)(v1 + 8);
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 1 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v3 )
    v2 = v3 + 15 + v1 + 8LL * i - (((_BYTE)v3 + 15) & 7);
  return *(struct _LIST_ENTRY **)v2;
}
