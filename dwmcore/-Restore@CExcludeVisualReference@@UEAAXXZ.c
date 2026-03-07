void __fastcall CExcludeVisualReference::Restore(CExcludeVisualReference *this)
{
  struct CVisual *Visual; // rax
  __int64 v2; // rcx
  __int64 v3; // r8

  Visual = CExcludeVisualReference::GetVisual(this);
  if ( Visual )
  {
    if ( *(_DWORD *)(v2 + 16) )
    {
      *((_BYTE *)Visual + 102) ^= (*((_BYTE *)Visual + 102) ^ (2 * *(_BYTE *)(v2 + 20))) & 2;
      *(_DWORD *)(v3 + 16) = 0;
    }
  }
}
