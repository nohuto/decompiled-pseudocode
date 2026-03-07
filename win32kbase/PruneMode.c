__int64 __fastcall PruneMode(_DWORD *a1, __int64 a2, int a3, unsigned int *a4, int a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // r10d
  BOOL v7; // ebx
  __int64 v8; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // r8d
  int v16; // r9d
  _DWORD *v17; // rdx
  int v18; // r9d
  unsigned int v19; // r10d
  int v20; // r11d
  _DWORD v22[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+2Ch] [rbp-1Ch]
  int v24; // [rsp+34h] [rbp-14h]

  v5 = 0;
  v6 = a1[46];
  v7 = 0;
  v8 = a3;
  if ( (a1[18] & 0x80u) != 0 )
    v7 = ((a1[21] - 1) & 0xFFFFFFFD) == 0;
  if ( v6 > 1 && a5 < 0 )
  {
    if ( v6 < *a4 || v6 > a4[1] && v6 > 0x3D )
      return 1LL;
    v11 = a1[44];
    v12 = v6 * v11;
    if ( v6 * v11 < a4[2] && v6 < 0x3C )
      return 1LL;
    if ( v12 > a4[3] && v6 > 0x3D || a1[43] * v12 > a4[5] )
      return 1LL;
    v13 = 107;
    if ( v11 <= 0x258 )
      v13 = 105;
    v5 = v12 * v13 / 0x64;
  }
  if ( v7 )
  {
    v14 = a1[44];
    v15 = a1[43];
  }
  else
  {
    v14 = a1[43];
    v15 = a1[44];
  }
  v22[0] = v14;
  v22[1] = v15;
  v22[2] = v6;
  v23 = 0LL;
  v24 = 0;
  if ( (_DWORD)v8 && (a5 & 0x40000000) != 0 && v15 > *(_DWORD *)(a2 + 24 * v8 - 20) )
    return 1LL;
  v16 = 0;
  if ( (int)v8 <= 0 )
    return 1LL;
  while ( 1 )
  {
    v20 = compModeCap(v22, a2 + 24LL * v16);
    if ( v20 <= 0 )
      break;
    if ( v18 >= (int)v8 - 1 )
    {
      if ( (a5 & 0x40000000) != 0 )
        return 1LL;
      break;
    }
    v16 = v18 + 1;
    if ( v16 >= (int)v8 )
      return 1LL;
  }
  if ( v19 > 1 && a5 < 0 )
  {
    if ( v20 && v18 )
      v17 = (_DWORD *)(a2 + 24LL * (v18 - 1));
    if ( v19 > v17[2] && v19 > 0x3D && (!v20 || v18 > 0)
      || v19 < v17[3]
      || v5 < v17[4] && v19 < 0x3C
      || v5 > v17[5] && v19 > 0x3D )
    {
      return 1LL;
    }
  }
  return 0LL;
}
