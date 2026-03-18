/*
 * XREFs of ?blueloop@@YAHH@Z @ 0x1C00DB4F0
 * Callers:
 *     ?greenloop@@YAHH@Z @ 0x1C00DAFC0 (-greenloop@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall blueloop(int a1)
{
  unsigned int v1; // r15d
  int v2; // esi
  int v3; // ebx
  int v4; // r11d
  int v5; // ebp
  __int64 v6; // r13
  int v7; // r12d
  __int64 v8; // rdi
  unsigned int *v9; // rax
  int v10; // r10d
  _BYTE *v11; // r9
  int v12; // r14d
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // r8d
  int v16; // edx
  unsigned int v17; // r10d
  int v18; // eax
  unsigned int *v19; // rcx
  _BYTE *v20; // r8
  bool v21; // cc
  char v23; // di

  v1 = 0;
  if ( a1 )
  {
    v2 = dword_1C033600C;
    v3 = 0;
    v5 = dword_1C0336024;
    v4 = 31;
    dword_1C03363F4 = 0;
    dword_1C03363F8 = 31;
    dword_1C03363F0 = dword_1C033600C;
    dword_1C03363FC = dword_1C0336024;
    dword_1C0336400 = 32;
    dword_1C0336404 = 0;
  }
  else
  {
    v2 = dword_1C03363F0;
    v3 = dword_1C03363F4;
    v4 = dword_1C03363F8;
    v5 = dword_1C03363FC;
  }
  v6 = qword_1C0336030;
  v7 = v3;
  v8 = qword_1C0336048;
  v9 = (unsigned int *)qword_1C0336030;
  v10 = dword_1C0336018;
  v11 = (_BYTE *)qword_1C0336048;
  v12 = v4;
  v13 = v2;
  v14 = dword_1C0336018;
  v15 = v5;
  if ( v2 > v4 )
    goto LABEL_33;
  while ( *v9 <= v14 )
  {
    v14 += v15;
    ++v13;
    v15 += 128;
    ++v9;
    ++v11;
    if ( v13 > v4 )
    {
      v16 = v5 - 128;
      v17 = dword_1C0336018 - (v5 - 128);
      v18 = v2 - 1;
      v19 = (unsigned int *)(qword_1C0336030 - 4);
      v20 = (_BYTE *)(qword_1C0336048 - 1);
      goto LABEL_7;
    }
  }
  if ( v13 > v2 )
  {
    v2 = v13;
    dword_1C03363F0 = v13;
    v6 = (__int64)v9;
    qword_1C0336030 = (__int64)v9;
    v8 = (__int64)v11;
    qword_1C0336048 = (__int64)v11;
    v10 = v14;
    dword_1C0336018 = v14;
    v5 = v15;
    dword_1C03363FC = v15;
    v7 = v13;
  }
  v1 = 1;
  if ( v13 > v4 )
  {
LABEL_33:
    v16 = v5 - 128;
    v17 = v10 - (v5 - 128);
    v18 = v2 - 1;
    v19 = (unsigned int *)(v6 - 4);
    v20 = (_BYTE *)(v8 - 1);
    if ( !v1 )
    {
LABEL_7:
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
      dword_1C03363F0 = v18;
      v12 = v18;
      qword_1C0336030 = (__int64)v19;
      v1 = 1;
      qword_1C0336048 = (__int64)v20;
      dword_1C0336018 = v17;
      dword_1C03363FC = v16;
    }
    v23 = dword_1C0336074;
  }
  else
  {
    v23 = dword_1C0336074;
    while ( *v9 > v14 )
    {
      *v9 = v14;
      ++v13;
      v14 += v15;
      *v11++ = v23;
      v15 += 128;
      ++v9;
      if ( v13 > v4 )
      {
        v16 = v5 - 128;
        v17 = v10 - (v5 - 128);
        v18 = v2 - 1;
        v20 = (_BYTE *)(qword_1C0336048 - 1);
        v19 = (unsigned int *)(v6 - 4);
        goto LABEL_26;
      }
    }
    v12 = v13 - 1;
    v16 = v5 - 128;
    v17 = v10 - (v5 - 128);
    v18 = v2 - 1;
    v20 = (_BYTE *)(qword_1C0336048 - 1);
    v19 = (unsigned int *)(v6 - 4);
  }
LABEL_26:
  if ( v18 >= v3 )
  {
    while ( *v19 > v17 )
    {
      *v19 = v17;
      v16 -= 128;
      *v20 = v23;
      v17 -= v16;
      --v20;
      --v18;
      --v19;
      if ( v18 < v3 )
        goto LABEL_12;
    }
    v7 = v18 + 1;
  }
LABEL_12:
  v21 = v12 < dword_1C0336404;
  dword_1C0336404 = v12;
  if ( v21 )
    v4 = v12;
  dword_1C03363F8 = v4;
  if ( v7 > dword_1C0336400 )
    v3 = v7;
  dword_1C0336400 = v7;
  dword_1C03363F4 = v3;
  return v1;
}
