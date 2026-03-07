void __fastcall CExcludeVisualReference::Hide(CExcludeVisualReference *this)
{
  struct CVisual *Visual; // rax
  __int64 v2; // rcx
  char v3; // dl

  Visual = CExcludeVisualReference::GetVisual(this);
  if ( Visual )
  {
    v3 = *((_BYTE *)Visual + 102);
    *((_BYTE *)Visual + 102) = v3 | 2;
    *(_BYTE *)(v2 + 20) = (v3 & 2) != 0;
    *(_DWORD *)(v2 + 16) = 2;
  }
}
