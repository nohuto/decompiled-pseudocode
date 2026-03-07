bool __fastcall CMergedRectBase<4>::GetRects(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // r15
  unsigned int v7; // esi
  _BYTE *v8; // rbp
  unsigned int i; // edi

  v3 = a2;
  LOBYTE(a2) = 1;
  CMergedRectBase<4>::Optimize(a1, a2);
  if ( (unsigned int)(*(_DWORD *)(a1 + 80) - 2) <= 1 )
  {
    v7 = 0;
    v8 = (_BYTE *)(a1 + 72);
    for ( i = 0; i < 4; ++i )
    {
      if ( *v8 )
      {
        if ( i != v7 )
          CMergedRectBase<4>::SwapExisting(a1, v7, i);
        ++v7;
      }
      ++v8;
    }
  }
  *v3 = *(_DWORD *)(a1 + 80);
  *a3 = a1 + 8;
  return *(_DWORD *)(a1 + 80) != 0;
}
