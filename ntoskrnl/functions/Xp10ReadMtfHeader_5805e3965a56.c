__int64 __fastcall Xp10ReadMtfHeader(_WORD *a1, int *a2, __int64 a3)
{
  unsigned int v3; // ebp
  int *v5; // r14
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // esi
  unsigned __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  unsigned int v20; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v5 = a2;
  *(_OWORD *)a2 = 0LL;
  while ( 1 )
  {
    v20 = 0;
    v7 = 5;
    if ( !*(_QWORD *)a3 )
      break;
    if ( *(_QWORD *)a3 < 5uLL )
      v7 = *(_QWORD *)a3;
    v8 = *(_DWORD *)(a3 + 16);
    if ( v8 < v7 )
    {
      v9 = Xp10ScatteredReadBytes(a3 + 24, &v20, 4LL);
      v10 = *(_DWORD *)(a3 + 16);
      *(_QWORD *)(a3 + 8) |= (unsigned __int64)v20 << v10;
      v8 = v10 + 8 * v9;
      if ( v8 < v7 )
        v7 = v8;
    }
    *(_DWORD *)(a3 + 16) = v8 - v7;
    v11 = *(_DWORD *)(a3 + 8) & ((1LL << v7) - 1);
    *(_QWORD *)(a3 + 8) >>= v7;
    *(_QWORD *)a3 -= v7;
    v12 = *(_QWORD *)a3;
    if ( v7 < 5 || v11 > (*a1 & 0x1Fu) )
      break;
    if ( v11 )
    {
      v20 = 0;
      v14 = v11;
      if ( v12 )
      {
        if ( v11 > v12 )
          v14 = v12;
        v15 = *(_DWORD *)(a3 + 16);
        if ( v15 < v14 )
        {
          v16 = Xp10ScatteredReadBytes(a3 + 24, &v20, 4LL);
          v17 = *(_DWORD *)(a3 + 16);
          *(_QWORD *)(a3 + 8) |= (unsigned __int64)v20 << v17;
          v15 = v17 + 8 * v16;
          if ( v15 < v14 )
            v14 = v15;
        }
        v18 = *(_DWORD *)(a3 + 8) & ((1LL << v14) - 1);
        *(_QWORD *)(a3 + 8) >>= v14;
        *(_QWORD *)a3 -= v14;
        *(_DWORD *)(a3 + 16) = v15 - v14;
      }
      else
      {
        v18 = 0;
        v14 = 0;
      }
      if ( v14 < v11 )
        return 3221226050LL;
      v13 = v18 + (1 << v11);
    }
    else
    {
      v13 = 1;
    }
    *v5 = v13;
    ++v3;
    ++v5;
    if ( v3 >= 4 )
      return 0LL;
  }
  return 3221226050LL;
}
