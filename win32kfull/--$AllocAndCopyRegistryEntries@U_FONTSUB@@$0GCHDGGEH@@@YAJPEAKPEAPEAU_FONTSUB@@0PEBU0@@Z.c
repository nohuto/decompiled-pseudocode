__int64 __fastcall AllocAndCopyRegistryEntries<_FONTSUB,1651729991>(
        unsigned int *a1,
        void **a2,
        _DWORD *a3,
        _OWORD *a4)
{
  int v4; // eax
  _OWORD *v9; // rdx
  __int128 v10; // xmm0
  _OWORD *v11; // rbx
  int v13; // esi
  __int64 v14; // r8
  char *v15; // rax

  v4 = *a1;
  if ( *a1 < *a3 )
    goto LABEL_2;
  v13 = v4 + 32;
  v14 = (unsigned int)(196 * (v4 + 32));
  if ( *a2 )
  {
    v15 = PREALLOCMEM2(*a2, 196 * v4, v14, 1651729991LL);
  }
  else
  {
    if ( !(_DWORD)v14 )
      return 3221225495LL;
    v15 = (char *)Win32AllocPoolZInit((unsigned int)v14, 1651729991LL);
  }
  if ( v15 )
  {
    *a2 = v15;
    *a3 = v13;
LABEL_2:
    v9 = (char *)*a2 + 196 * *a1;
    *v9 = *a4;
    v9[1] = a4[1];
    v9[2] = a4[2];
    v9[3] = a4[3];
    v9[4] = a4[4];
    v9[5] = a4[5];
    v9[6] = a4[6];
    v9 += 8;
    v10 = a4[7];
    v11 = a4 + 8;
    *(v9 - 1) = v10;
    *v9 = *v11;
    v9[1] = v11[1];
    v9[2] = v11[2];
    v9[3] = v11[3];
    *((_DWORD *)v9 + 16) = *((_DWORD *)v11 + 16);
    ++*a1;
    return 0LL;
  }
  return 3221225495LL;
}
