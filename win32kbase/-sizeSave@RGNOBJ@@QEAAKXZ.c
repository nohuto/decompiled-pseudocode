__int64 __fastcall RGNOBJ::sizeSave(RGNOBJ *this)
{
  int v1; // r8d
  int v2; // r9d
  _DWORD *i; // r10

  v1 = 0;
  v2 = *(_DWORD *)(*(_QWORD *)this + 52LL);
  for ( i = *(_DWORD **)(*(_QWORD *)this + 32LL); v2; --v2 )
  {
    v1 += *i >> 1;
    i = (_DWORD *)((char *)i + (unsigned int)(4 * *i + 16));
  }
  return (unsigned int)(16 * v1);
}
