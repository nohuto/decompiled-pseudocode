char __fastcall PnpBiosScanForWakeInterrupt(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  char v5; // r8
  char v6; // r10
  char v7; // si
  char v8; // r11
  unsigned __int8 v9; // dl
  unsigned __int16 v10; // r9
  unsigned __int64 v11; // r9
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  bool v16; // zf

  v2 = a2;
  v3 = a1;
  if ( a2 < 5 )
    return 0;
  v5 = 1;
  v6 = 0;
  v7 = 1;
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_BYTE *)a1;
    if ( *(char *)a1 < 0 )
    {
      v10 = *(_WORD *)(a1 + 1) + 3;
    }
    else
    {
      v10 = (v9 & 7) + 1;
      v9 &= 0x78u;
    }
    if ( v9 == 120 )
      break;
    v11 = a1 + v10;
    if ( v11 >= v3 + v2 )
      goto LABEL_27;
    v12 = v9 - 32;
    if ( v12 )
    {
      v13 = v12 - 16;
      if ( !v13 )
      {
        v6 = 0;
        goto LABEL_25;
      }
      v14 = v13 - 8;
      if ( !v14 )
      {
        v7 = 0;
        goto LABEL_25;
      }
      v15 = v14 - 81;
      if ( !v15 )
      {
        v16 = (*(_BYTE *)(a1 + 3) & 0x10) == 0;
LABEL_16:
        if ( !v16 )
          v6 = 1;
        goto LABEL_25;
      }
      if ( v15 == 3 && !*(_BYTE *)(a1 + 4) )
      {
        v16 = (*(_BYTE *)(a1 + 7) & 0x10) == 0;
        goto LABEL_16;
      }
    }
    else if ( (*(_BYTE *)a1 & 7) == 3 && (*(_BYTE *)(a1 + 3) & 0x20) != 0 )
    {
      v6 = 1;
    }
LABEL_25:
    a1 = v11;
  }
  v8 = 1;
  if ( !v6 )
    return 0;
LABEL_27:
  if ( !v7 || !v8 )
    return 0;
  return v5;
}
