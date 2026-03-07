__int64 __fastcall PnpiCmResourceRemoveSidebandResources(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6)
{
  __int64 v6; // rbp
  __int64 v10; // r11
  __int64 result; // rax
  unsigned int *v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // r13d
  __int64 v15; // r12
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  char v20; // r8
  unsigned int v21; // r10d
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  char v27; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0LL;
  v10 = a1;
  if ( !*(_DWORD *)a2 )
    return 3221225524LL;
  if ( *(_DWORD *)a2 != 1 || *(_DWORD *)a3 != 1 || *(_DWORD *)(a2 + 16) != *(_DWORD *)(a3 + 16) )
    return 3221225473LL;
  v12 = a6;
  v13 = a5;
  v14 = *a6;
  if ( *a6 >= 0x28 )
  {
    *(_OWORD *)a4 = *(_OWORD *)a2;
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a4 + 32) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a4 + 16) = 0;
    *(_OWORD *)v13 = *(_OWORD *)a3;
    *(_OWORD *)(v13 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(a3 + 32);
    *(_DWORD *)(v13 + 16) = 0;
  }
  v15 = 0LL;
  v16 = 20;
  if ( *(_DWORD *)(a2 + 16) )
  {
    while ( 1 )
    {
      v17 = 5 * v15;
      v27 = 0;
      v18 = a2 + 20 + 20 * v15;
      if ( *(_BYTE *)v18 == 2 )
      {
        v21 = *(_DWORD *)(v10 + 4);
        v20 = 0;
        v22 = 0;
        if ( v21 )
        {
          while ( 1 )
          {
            v23 = 32LL * v22;
            if ( *(_BYTE *)(v23 + v10 + 9) == 2 && *(_DWORD *)(v23 + v10 + 16) == *(_DWORD *)(v18 + 8) )
              break;
            if ( ++v22 >= v21 )
              goto LABEL_20;
          }
          v20 = 1;
        }
      }
      else
      {
        if ( *(_BYTE *)v18 != 0x84 )
          goto LABEL_22;
        result = PnpiCmResourceSidebandConnection(v10, a2 + 20 + 20 * v15, &v27);
        if ( (int)result < 0 )
          return result;
        v20 = v27;
        v18 = v19;
        v10 = a1;
      }
LABEL_20:
      if ( !v20 )
      {
        v17 = 5 * v15;
LABEL_22:
        v16 += 20;
        if ( v14 >= v16 )
        {
          v24 = 5 * v6;
          *(_OWORD *)(a4 + 4 * v24 + 20) = *(_OWORD *)v18;
          *(_DWORD *)(a4 + 4 * v24 + 36) = *(_DWORD *)(v18 + 16);
          ++*(_DWORD *)(a4 + 16);
          *(_OWORD *)(v13 + 4 * v24 + 20) = *(_OWORD *)(a3 + 4 * v17 + 20);
          *(_DWORD *)(v13 + 4 * v24 + 36) = *(_DWORD *)(a3 + 4 * v17 + 36);
          ++*(_DWORD *)(v13 + 16);
        }
        v6 = (unsigned int)(v6 + 1);
      }
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= *(_DWORD *)(a2 + 16) )
      {
        v12 = a6;
        break;
      }
    }
  }
  v25 = v16 + 20;
  if ( (_DWORD)v6 )
    v25 = v16;
  if ( (_DWORD)v6 == *(_DWORD *)(a2 + 16) )
    return 3221225524LL;
  if ( v25 <= v14 )
    return 0LL;
  *v12 = v25;
  return 3221225507LL;
}
