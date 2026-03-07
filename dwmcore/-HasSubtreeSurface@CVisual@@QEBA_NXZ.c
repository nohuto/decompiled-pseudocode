bool __fastcall CVisual::HasSubtreeSurface(CVisual *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this);
  if ( v1 )
    LOBYTE(v1) = *(_QWORD *)(v1 + 8) != 0LL;
  return v1;
}
