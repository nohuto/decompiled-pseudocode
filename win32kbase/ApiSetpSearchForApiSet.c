__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  SIZE_T v3; // r11
  unsigned int v6; // edi
  const WCHAR *v7; // r8
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  __int64 v12; // r10
  int v14; // ebx
  SIZE_T v15; // r10
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx

  v3 = a3;
  v6 = 0;
  v7 = a2;
  if ( (_WORD)v3 )
  {
    v14 = a1[6];
    v15 = v3;
    do
    {
      v16 = *v7++;
      v17 = v16 + 32;
      if ( (unsigned __int16)(v16 - 65) > 0x19u )
        v17 = v16;
      v6 = v17 + v14 * v6;
      --v15;
    }
    while ( v15 );
  }
  v8 = 0LL;
  v9 = a1[3] - 1;
  v10 = 0;
  if ( v9 < 0 )
    return v8;
  while ( 1 )
  {
    v11 = (v10 + v9) >> 1;
    v12 = (unsigned int)a1[5] + 8LL * v11;
    if ( v6 >= *(_DWORD *)((char *)a1 + v12) )
      break;
    v9 = v11 - 1;
LABEL_5:
    if ( v10 > v9 )
      return v8;
  }
  if ( v6 > *(_DWORD *)((char *)a1 + v12) )
  {
    v10 = v11 + 1;
    goto LABEL_5;
  }
  v8 = (__int64)&a1[6 * *(_DWORD *)((char *)a1 + v12 + 4)] + (unsigned int)a1[4];
  if ( !v8
    || !RtlCompareUnicodeStrings(a2, v3, (PCWCH)((char *)a1 + *(unsigned int *)(v8 + 4)), *(_DWORD *)(v8 + 12) >> 1, 1u) )
  {
    return v8;
  }
  return 0LL;
}
