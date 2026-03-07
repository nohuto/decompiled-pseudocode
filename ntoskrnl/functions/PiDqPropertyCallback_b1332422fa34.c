__int64 __fastcall PiDqPropertyCallback(__int64 a1, const wchar_t *a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  const wchar_t **v5; // r14
  const wchar_t *v8; // r15
  unsigned int v10; // edi
  unsigned int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // rcx
  const wchar_t *v14; // rcx
  int v16; // ecx
  __int64 v17; // r8
  int v18; // r10d
  int v19; // eax
  int PnpObjectType; // eax
  __int64 v21; // r9
  const wchar_t *v22; // rax
  __int64 v23; // rcx

  v5 = (const wchar_t **)(a1 + 16);
  v8 = a2;
  v10 = 0;
  v11 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
LABEL_11:
    v16 = *((_DWORD *)v8 + 5);
    if ( v16 )
    {
      if ( v16 != 1 )
        return (unsigned int)-1073741811;
      if ( !*(_QWORD *)a1 )
      {
        PnpObjectType = PiDqGetPnpObjectType(
                          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL) + 16LL),
                          a2,
                          0LL,
                          *(_QWORD *)(a1 + 40) + 32LL);
        v10 = PiDqOpenObjectRegKey(1, *(_QWORD *)(a1 + 32), PnpObjectType, 1, 0, v21, a1);
        if ( v10 == -1073741772 )
        {
          *(_QWORD *)a1 = -1LL;
          v10 = 0;
        }
      }
      v17 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 == -1LL )
      {
        v22 = *v5;
        v23 = 6LL * *(unsigned int *)(a1 + 24);
        *(_OWORD *)&v22[4 * v23] = *(_OWORD *)v8;
        *(_OWORD *)&v22[4 * v23 + 8] = *((_OWORD *)v8 + 1);
        ++*(_DWORD *)(a1 + 24);
        goto LABEL_30;
      }
      v18 = 0;
      if ( (v10 & 0x80000000) != 0 )
        return v10;
    }
    else
    {
      v18 = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL) + 16LL), a2, 0LL, a4);
    }
    v19 = PiDqPnPGetObjectProperty(
            *(_QWORD *)(a1 + 32),
            v18,
            v17,
            (int)v8,
            *((_DWORD *)v8 + 5),
            0LL,
            (__int64)&(*v5)[24 * *(unsigned int *)(a1 + 24)]);
    v10 = v19;
    if ( v19 != -1073741811 )
    {
      if ( v19 >= 0 )
      {
        *a3 = *(_DWORD *)&(*v5)[24 * *(unsigned int *)(a1 + 24) + 16];
        *a4 = *(_DWORD *)&(*v5)[24 * *(unsigned int *)(a1 + 24) + 18];
        *a5 = *(_QWORD *)&(*v5)[24 * (*(_DWORD *)(a1 + 24))++ + 20];
      }
      return v10;
    }
    v10 = 0;
LABEL_30:
    *a3 = 0;
    *a4 = 0;
    *a5 = 0LL;
    return v10;
  }
  while ( 1 )
  {
    a2 = *v5;
    v12 = 24LL * v11;
    if ( *((_DWORD *)v8 + 4) == *(_DWORD *)&(*v5)[v12 + 8] )
    {
      v13 = *(_QWORD *)v8 - *(_QWORD *)&a2[v12];
      if ( *(_QWORD *)v8 == *(_QWORD *)&a2[v12] )
        v13 = *((_QWORD *)v8 + 1) - *(_QWORD *)&a2[v12 + 4];
      if ( !v13 && *((_DWORD *)v8 + 5) == *(_DWORD *)&a2[v12 + 10] )
      {
        v14 = (const wchar_t *)*((_QWORD *)v8 + 3);
        a2 = *(const wchar_t **)&a2[v12 + 12];
        if ( v14 == a2 || v14 && a2 && !wcsicmp(v14, a2) )
          break;
      }
    }
    if ( ++v11 >= *(_DWORD *)(a1 + 24) )
      goto LABEL_11;
  }
  *a3 = *(_DWORD *)&(*v5)[v12 + 16];
  *a4 = *(_DWORD *)&(*v5)[v12 + 18];
  *a5 = *(_QWORD *)&(*v5)[v12 + 20];
  return v10;
}
