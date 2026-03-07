void *__fastcall DirectComposition::CLinearObjectTableBase::EnumerateObjects(
        DirectComposition::CLinearObjectTableBase *this,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // r10
  __int64 v5; // r11
  _QWORD *v6; // r8
  unsigned __int64 v7; // rdx

  v2 = *a2;
  v4 = *((_QWORD *)this + 3);
  if ( *a2 >= v4 )
    return 0LL;
  v5 = *((_QWORD *)this + 4);
  v6 = (_QWORD *)(*(_QWORD *)this + v2 * v5);
  while ( 1 )
  {
    v7 = v2++;
    if ( *v6 )
      break;
    v6 = (_QWORD *)((char *)v6 + v5);
    if ( v2 >= v4 )
      return 0LL;
  }
  *a2 = v2;
  return *(void **)(v5 * v7 + *(_QWORD *)this);
}
