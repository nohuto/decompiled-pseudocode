char __fastcall RtlDetermineHotPatchUndoExtent(__int64 a1, int a2, unsigned int a3, int *a4, unsigned int *a5)
{
  __int64 v5; // rax
  int v6; // ecx

  if ( a2 )
  {
    v5 = 2 * a3;
    if ( *(_DWORD *)(a1 + 4 * v5) )
    {
      v6 = *(_DWORD *)(a1 + 4 * v5 + 4);
LABEL_4:
      *a4 = v6 >> 12;
      *a5 = (unsigned int)(v6 + 1) >> 12;
      return 1;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 6LL * a3);
    if ( v6 )
      goto LABEL_4;
  }
  return 0;
}
