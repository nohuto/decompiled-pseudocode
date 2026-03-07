struct tagSIZE __fastcall ComputeMaxTrackSize(struct tagRECT *a1, unsigned __int16 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rbp
  int v5; // edi
  __int64 v6; // r14
  __int64 v7; // r10
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // r10
  int v11; // edi
  __int64 v12; // r14
  __int64 v13; // r10
  int v14; // eax
  __int64 v16; // [rsp+40h] [rbp+8h]

  v2 = a2;
  v4 = 120LL * (int)GetDpiCacheSlot(a2);
  v5 = *(_DWORD *)(gpsi + v4 + 2340);
  if ( v5 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(v2);
    v5 = *(_DWORD *)(gpsi + v4 + 2340);
    if ( v5 == -1 )
      v5 = 0;
  }
  v6 = 120 * ((int)GetDpiCacheSlot(v2) + 20LL);
  v8 = *(_DWORD *)(v6 + v7);
  if ( v8 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(v2);
    v8 = *(_DWORD *)(gpsi + v6);
    if ( v8 == -1 )
      v8 = 0;
  }
  LODWORD(v16) = a1->right + 2 * (v5 + v8 + 2) - a1->left;
  v9 = 120LL * (int)GetDpiCacheSlot(v2);
  v11 = *(_DWORD *)(v10 + v9 + 2344);
  if ( v11 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(v2);
    v11 = *(_DWORD *)(gpsi + v9 + 2344);
    if ( v11 == -1 )
      v11 = 0;
  }
  v12 = 120 * ((int)GetDpiCacheSlot(v2) + 20LL);
  v14 = *(_DWORD *)(v12 + v13);
  if ( v14 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(v2);
    v14 = *(_DWORD *)(v12 + gpsi);
    if ( v14 == -1 )
      v14 = 0;
  }
  HIDWORD(v16) = a1->bottom + 2 * (v11 + v14) + 4 - a1->top;
  return (struct tagSIZE)v16;
}
