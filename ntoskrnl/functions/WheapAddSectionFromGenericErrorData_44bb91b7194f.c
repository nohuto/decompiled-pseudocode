__int64 __fastcall WheapAddSectionFromGenericErrorData(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        size_t Size,
        char a6)
{
  unsigned int v6; // r10d
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  unsigned int *v11; // rdx
  __int64 v12; // r11
  unsigned int v13; // r10d
  unsigned int *v14; // rdx
  size_t v15; // r8
  const GUID *v16; // rcx

  v6 = *(_DWORD *)(a1 + 24);
  v7 = 0;
  v8 = *(unsigned __int16 *)(a2 + 10);
  if ( v8 >= v6 )
  {
    if ( (*(_BYTE *)(a4 + 23) & 1) == 0 || !(_WORD)v8 )
      return (unsigned int)-1073741789;
    LOWORD(v8) = v8 - 1;
    *(_WORD *)(a2 + 10) = v8;
  }
  v11 = (unsigned int *)(a2 + 128);
  v12 = 72LL;
  if ( (_WORD)v8 )
  {
    v14 = &v11[18 * (unsigned __int16)v8 - 18];
    v13 = *v14 + v14[1];
    v11 = v14 + 18;
  }
  else
  {
    v13 = 72 * v6 + 128;
  }
  if ( a6 )
  {
    v15 = *(unsigned int *)(a4 + 24);
    v16 = (const GUID *)a4;
    if ( *(_WORD *)(a4 + 20) != 768 )
      v12 = 64LL;
  }
  else
  {
    v15 = (unsigned int)Size;
    v16 = &GENERIC_SECTION_GUID;
    v12 = 0LL;
  }
  if ( a3 - v13 >= (unsigned int)v15 )
  {
    *v11 = v13;
    v11[1] = v15;
    *((_WORD *)v11 + 4) = 768;
    *((_BYTE *)v11 + 10) = *(_BYTE *)(a4 + 22);
    v11[3] = *(unsigned __int8 *)(a4 + 23);
    *((GUID *)v11 + 1) = *v16;
    *((_OWORD *)v11 + 2) = *(_OWORD *)(a4 + 28);
    v11[12] = *(_DWORD *)(a4 + 16);
    *(_OWORD *)(v11 + 13) = *(_OWORD *)(a4 + 44);
    v11[17] = *(_DWORD *)(a4 + 60);
    memmove((void *)(a2 + v13), (const void *)(v12 + a4), v15);
    ++*(_WORD *)(a2 + 10);
    return v7;
  }
  return (unsigned int)-1073741789;
}
