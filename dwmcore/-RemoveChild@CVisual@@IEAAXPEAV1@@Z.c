void __fastcall CVisual::RemoveChild(CVisual *this, struct CVisual *a2)
{
  char v4; // cl
  int v5; // r8d
  int v6; // edx
  int v7; // r8d

  if ( CPtrArrayBase::Remove((CVisual *)((char *)this + 80), (unsigned __int64)a2) )
  {
    if ( (*((_BYTE *)a2 + 103) & 1) != 0 )
    {
      CVisual::DirtyForInvisibleChild(this, a2);
      v4 = *((_BYTE *)a2 + 272);
      v5 = *((_DWORD *)a2 + 67) + 1;
      if ( (v4 & 4) == 0 )
        v5 = *((_DWORD *)a2 + 67);
      v6 = *((_DWORD *)a2 + 66) + 1;
      v7 = -v5;
      if ( (v4 & 1) == 0 )
        v6 = *((_DWORD *)a2 + 66);
      CVisual::PropagateBackdropUpdates(this, -v6, v7);
    }
    *((_QWORD *)a2 + 11) = 0LL;
    (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 16LL))(a2);
  }
}
