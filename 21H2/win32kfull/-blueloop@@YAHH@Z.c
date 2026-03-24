/*
 * XREFs of ?blueloop@@YAHH@Z @ 0x1C00D4D90
 * Callers:
 *     ?greenloop@@YAHH@Z @ 0x1C00D4880 (-greenloop@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall blueloop(int a1)
{
  unsigned int v1; // ebp
  int v2; // edi
  int v3; // ebx
  int v4; // r11d
  int v5; // esi
  __int64 v6; // r13
  int v7; // r15d
  __int64 v8; // r12
  unsigned int *v9; // rax
  int v10; // r10d
  _BYTE *v11; // r9
  char v12; // r14
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // r8d
  int v16; // r8d
  unsigned int v17; // r10d
  int v18; // ecx
  unsigned int *v19; // rdx
  _BYTE *v20; // r9
  int v21; // eax
  bool v22; // cc
  int v24; // [rsp+30h] [rbp+8h]

  v1 = 0;
  if ( a1 )
  {
    v2 = dword_1C033AE4C;
    v3 = 0;
    v5 = dword_1C033AE64;
    v4 = 31;
    dword_1C033B144 = 0;
    dword_1C033B148 = 31;
    dword_1C033B140 = dword_1C033AE4C;
    dword_1C033B14C = dword_1C033AE64;
    dword_1C033B150 = 32;
    dword_1C033B154 = 0;
  }
  else
  {
    v2 = dword_1C033B140;
    v3 = dword_1C033B144;
    v4 = dword_1C033B148;
    v5 = dword_1C033B14C;
  }
  v6 = qword_1C033AE70;
  v7 = v4;
  v8 = qword_1C033AE88;
  v9 = (unsigned int *)qword_1C033AE70;
  v10 = dword_1C033AE58;
  v11 = (_BYTE *)qword_1C033AE88;
  v12 = dword_1C033AEB4;
  v13 = v2;
  v24 = v3;
  v14 = dword_1C033AE58;
  v15 = v5;
  if ( v2 <= v4 )
  {
    while ( *v9 <= v14 )
    {
      v14 += v15;
      ++v13;
      v15 += 128;
      ++v9;
      ++v11;
      if ( v13 > v4 )
        goto LABEL_6;
    }
    if ( v13 > v2 )
    {
      v2 = v13;
      dword_1C033B140 = v13;
      v6 = (__int64)v9;
      qword_1C033AE70 = (__int64)v9;
      v8 = (__int64)v11;
      qword_1C033AE88 = (__int64)v11;
      v10 = v14;
      dword_1C033AE58 = v14;
      v5 = v15;
      dword_1C033B14C = v15;
      v24 = v13;
    }
    v1 = 1;
    if ( v13 <= v4 )
    {
      while ( *v9 > v14 )
      {
        *v9 = v14;
        ++v13;
        v14 += v15;
        *v11++ = v12;
        v15 += 128;
        ++v9;
        if ( v13 > v4 )
          goto LABEL_6;
      }
      v7 = v13 - 1;
    }
  }
LABEL_6:
  v16 = v5 - 128;
  v17 = v10 - (v5 - 128);
  v18 = v2 - 1;
  v19 = (unsigned int *)(v6 - 4);
  v20 = (_BYTE *)(v8 - 1);
  if ( !v1 )
  {
    if ( v18 < v3 )
      return v1;
    while ( *v19 <= v17 )
    {
      v16 -= 128;
      --v18;
      v17 -= v16;
      --v19;
      --v20;
      if ( v18 < v3 )
        return v1;
    }
    dword_1C033B140 = v18;
    v7 = v18;
    qword_1C033AE70 = (__int64)v19;
    v1 = 1;
    qword_1C033AE88 = (__int64)v20;
    dword_1C033AE58 = v17;
    dword_1C033B14C = v16;
  }
  if ( v18 < v3 )
  {
LABEL_22:
    v21 = v24;
  }
  else
  {
    while ( *v19 > v17 )
    {
      *v19 = v17;
      v16 -= 128;
      *v20 = v12;
      v17 -= v16;
      --v20;
      --v18;
      --v19;
      if ( v18 < v3 )
        goto LABEL_22;
    }
    v21 = v18 + 1;
  }
  v22 = v7 < dword_1C033B154;
  dword_1C033B154 = v7;
  if ( v22 )
    v4 = v7;
  dword_1C033B148 = v4;
  if ( v21 > dword_1C033B150 )
    v3 = v21;
  dword_1C033B150 = v21;
  dword_1C033B144 = v3;
  return v1;
}
