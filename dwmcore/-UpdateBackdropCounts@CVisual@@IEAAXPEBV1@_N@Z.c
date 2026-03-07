void __fastcall CVisual::UpdateBackdropCounts(CVisual *this, const struct CVisual *a2, char a3)
{
  char v3; // r9
  int v4; // r10d
  int v5; // eax
  int v6; // edx
  int v7; // eax

  v3 = *((_BYTE *)a2 + 272);
  v4 = *((_DWORD *)a2 + 67);
  v5 = *((_DWORD *)a2 + 66);
  v6 = v5 + 1;
  if ( (v3 & 1) == 0 )
    v6 = v5;
  v7 = v4 + 1;
  if ( (v3 & 4) == 0 )
    v7 = v4;
  if ( !a3 )
  {
    v7 = -v7;
    v6 = -v6;
  }
  CVisual::PropagateBackdropUpdates(this, v6, v7);
}
