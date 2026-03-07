__int64 __fastcall ApplyRelocations(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v7; // ebx
  unsigned int v8; // r11d
  int v9; // r10d
  int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v18; // ecx
  _DWORD *v19; // rax
  _DWORD *v20; // r8

  v7 = a2 - 1;
  v8 = a5 - a3;
  v9 = 0;
  while ( v7 >= v9 )
  {
    v13 = (v7 + v9) / 2;
    v14 = v13;
    v15 = *(_DWORD *)(a1 + 4LL * v13) & 0xFFFFFFF;
    if ( v8 >= v15 )
    {
      if ( v8 <= v15 )
        goto LABEL_6;
      v9 = v13 + 1;
    }
    else
    {
      v7 = v13 - 1;
    }
  }
  v14 = v9;
LABEL_6:
  while ( v14 < a2 )
  {
    v16 = *(_DWORD *)(a1 + 4LL * v14);
    if ( (v16 & 0xFFFFFFF) >= v8 + a7 )
      break;
    ++v14;
    v18 = v16 >> 28;
    v19 = (_DWORD *)(a3 + (v16 & 0xFFFFFFF));
    v20 = (_DWORD *)((char *)v19 + a6 - a5);
    if ( v18 )
    {
      if ( v18 == 3 )
      {
        *v20 = a4 + *v19;
      }
      else if ( v18 == 10 )
      {
        *(_QWORD *)v20 = a4 + *(_QWORD *)v19;
      }
    }
  }
  return 0LL;
}
