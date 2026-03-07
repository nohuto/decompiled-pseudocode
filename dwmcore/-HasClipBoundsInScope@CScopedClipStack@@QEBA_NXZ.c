bool __fastcall CScopedClipStack::HasClipBoundsInScope(CScopedClipStack *this)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 != *(_QWORD *)this )
    return *(_QWORD *)(v1 - 168) != 0LL;
  return v2;
}
