const struct CShape *__fastcall CScopedClipStack::GetTopCpuClipInScope(
        CScopedClipStack *this,
        enum D2D1_ANTIALIAS_MODE *a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // r9
  _QWORD *v5; // r8

  if ( !CScopedClipStack::HasCpuClipsInScope(this) )
    return 0LL;
  v5 = (_QWORD *)(v2 + 1872);
  if ( v3 )
    *v3 = *(_DWORD *)(*v5 - 8LL);
  return *(const struct CShape **)(*v5 - 40LL);
}
