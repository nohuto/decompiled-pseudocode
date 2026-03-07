char __fastcall NVMeGetCompletionQueueForAssignment(
        __int64 a1,
        unsigned int *a2,
        unsigned __int16 *a3,
        int *a4,
        _DWORD *a5)
{
  unsigned int v6; // r10d
  unsigned __int16 v9; // si
  unsigned int v10; // ebp
  int v11; // r11d
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // ebx
  unsigned int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ecx

  v6 = -1;
  v9 = 0;
  v10 = 0;
  v11 = 2;
  if ( !*(_WORD *)(a1 + 338) )
    return 0;
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 880) + 392LL * v10;
    if ( !g_HeteroSystem || !a5 || (*(_DWORD *)(v12 + 244) & 0xF) == *a5 )
      break;
LABEL_30:
    if ( ++v10 >= *(unsigned __int16 *)(a1 + 338) )
      goto LABEL_37;
  }
  v13 = *(_DWORD *)(v12 + 180);
  if ( v13 >= *(unsigned __int16 *)(v12 + 200) )
    *(_DWORD *)(v12 + 204) = -1;
  if ( v13 >= *(unsigned __int16 *)(v12 + 202) )
    *(_DWORD *)(v12 + 208) = -1;
  v14 = *(_DWORD *)(v12 + 212);
  if ( v14 >= *(unsigned __int16 *)(v12 + 232) )
    *(_DWORD *)(v12 + 236) = -1;
  if ( v14 >= *(unsigned __int16 *)(v12 + 234) )
    *(_DWORD *)(v12 + 240) = -1;
  v15 = *(_DWORD *)(v12 + 236);
  v16 = v15;
  v17 = *(_DWORD *)(v12 + 240);
  v18 = *(_DWORD *)(v12 + 208);
  if ( v15 >= v17 )
    v16 = *(_DWORD *)(v12 + 240);
  if ( v18 >= v16 )
  {
    v19 = *(_DWORD *)(v12 + 240);
    if ( v15 < v17 )
      v19 = *(_DWORD *)(v12 + 236);
  }
  else
  {
    v19 = *(_DWORD *)(v12 + 208);
  }
  v20 = *(_DWORD *)(v12 + 204);
  if ( v20 >= v19 )
  {
    if ( v18 >= v16 )
    {
      if ( v15 < v17 )
        v17 = *(_DWORD *)(v12 + 236);
    }
    else
    {
      v17 = *(_DWORD *)(v12 + 208);
    }
  }
  else
  {
    v17 = *(_DWORD *)(v12 + 204);
  }
  if ( v17 != *a2 )
  {
    if ( v17 < v6 )
    {
      v9 = *(_WORD *)(v12 + 168);
      v6 = v17;
      v11 = v17 != v20 && v17 != v18;
    }
    goto LABEL_30;
  }
  v9 = *(_WORD *)(v12 + 168);
  v6 = v17;
  v11 = v17 != v20 && v17 != v18;
LABEL_37:
  if ( v6 == -1 )
    return 0;
  *a2 = v6;
  *a4 = v11;
  *a3 = v9;
  v21 = *(_QWORD *)(a1 + 880) + 392LL * v9;
  if ( v11 )
  {
    v24 = *(_DWORD *)(v21 - 156);
    if ( v6 == v24 )
    {
      *(_DWORD *)(v21 - 156) = v24 + 1;
    }
    else
    {
      v25 = *(_DWORD *)(v21 - 152);
      if ( v6 == v25 )
        *(_DWORD *)(v21 - 152) = v25 + 1;
    }
  }
  else
  {
    v22 = *(_DWORD *)(v21 - 188);
    if ( v6 == v22 )
    {
      *(_DWORD *)(v21 - 188) = v22 + 1;
    }
    else
    {
      v23 = *(_DWORD *)(v21 - 184);
      if ( v6 == v23 )
        *(_DWORD *)(v21 - 184) = v23 + 1;
    }
  }
  return 1;
}
