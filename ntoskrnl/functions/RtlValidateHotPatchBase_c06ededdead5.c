char __fastcall RtlValidateHotPatchBase(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned int HotPatchSize; // r9d
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  int v14; // edi
  int v15; // esi
  unsigned int v16; // r8d
  unsigned int v17; // eax
  int v18; // r12d
  unsigned int v19; // ecx
  unsigned int v21; // [rsp+30h] [rbp-48h]
  unsigned int v22; // [rsp+34h] [rbp-44h]
  unsigned int v23; // [rsp+38h] [rbp-40h]
  unsigned int v24; // [rsp+3Ch] [rbp-3Ch] BYREF
  char *v25; // [rsp+40h] [rbp-38h]

  a5 = 0;
  if ( a6 == 0x8664 || a6 == 0xAA64 )
  {
    v6 = 8;
  }
  else
  {
    if ( a6 != 332 )
      return 0;
    v6 = 4;
  }
  v7 = *(unsigned int *)(a2 + 24);
  v8 = (unsigned int)a1[1];
  if ( (unsigned int)v7 < (unsigned int)v8 )
  {
    v9 = (_DWORD *)((char *)a1 + v7);
    v25 = (char *)a1 + v8;
    HotPatchSize = RtlGetHotPatchSize(a1);
    v23 = HotPatchSize;
    do
    {
LABEL_29:
      if ( !*v9 )
        return 1;
      if ( (unsigned __int64)v9 >= v10 )
        return 0;
      v14 = *v9;
      if ( (*v9 & 0x3FF03000) != 0 )
        return 0;
      if ( (v14 & 0x40000000) != 0 )
        return 0;
      v15 = v14 & 0xFC000;
      if ( v14 >= 0 && v15 != 114688 )
        return 0;
      v16 = v13;
      v17 = v12;
      if ( v14 >= 0 )
      {
        v16 = v12;
        v17 = v13;
      }
      ++v9;
      v22 = v16;
      v21 = v17;
      v18 = v14 & 0xFFF;
    }
    while ( (v14 & 0xFFF) == 0 );
    while ( 1 )
    {
      if ( (v14 & 0x4000) != 0 )
      {
        v19 = v6 + v9[1];
        if ( v19 < v6 || v19 > v16 )
          break;
      }
      if ( v15 == 376832 && v14 >= 0 )
        break;
      if ( (v14 & 0x8000) != 0 )
      {
        if ( !RtlDetermineHotPatchExtent((unsigned int)v14, *v9, a6, &v24, &a5) || a5 > v21 >> 12 )
          return 0;
        v16 = v22;
        HotPatchSize = v23;
      }
      if ( v15 == 491520 && v9[1] == -1 )
        return 0;
      v9 += HotPatchSize;
      if ( !--v18 )
      {
        v10 = (unsigned __int64)v25;
        v12 = a4;
        v13 = a3;
        goto LABEL_29;
      }
    }
  }
  return 0;
}
