char __fastcall CVisual::IsPreserve3D(CVisual *this, const struct CVisual *a2)
{
  char v2; // r8

  v2 = 1;
  if ( (!a2 || *((_DWORD *)a2 + 27) != 1)
    && (*((_DWORD *)this + 27) != 1 || !(unsigned int)CPtrArrayBase::GetCount((CVisual *)((char *)this + 80))) )
  {
    return 0;
  }
  return v2;
}
