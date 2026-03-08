/*
 * XREFs of RtlFindNextClearRunUlong @ 0x1402DF69C
 * Callers:
 *     MiRescanPageFileBitmapPortion @ 0x1402DF480 (MiRescanPageFileBitmapPortion.c)
 *     MiRescanPagefileBitmaps @ 0x140392140 (MiRescanPagefileBitmaps.c)
 *     MiFindFreePageFileSpaceForward @ 0x1406373A0 (MiFindFreePageFileSpaceForward.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextClearRunUlong(unsigned int *a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  char v7; // r13
  __int64 v8; // r12
  unsigned __int64 v9; // rcx
  int v10; // edi
  _DWORD *v11; // r9
  unsigned __int64 v12; // r15
  unsigned int v13; // r10d
  int v14; // r11d
  char v15; // dl
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rbp
  unsigned int v19; // r8d
  int v20; // ecx
  char v21; // si
  _DWORD *v22; // rcx
  _DWORD *v23; // rax
  char v24; // dl
  __int64 v25; // rcx
  unsigned int v26; // r8d

  v5 = a4;
  if ( a4 < 0x20 )
    return 0LL;
  v6 = *a1;
  v7 = *a1;
  if ( *a1 < 0x20 || a2 > v6 - 32 )
    return 0LL;
  v8 = *((_QWORD *)a1 + 1);
  v9 = (unsigned __int64)(v6 - 1) >> 5;
  v10 = v6 & 0x1F;
  v11 = (_DWORD *)(v8 + 4 * ((unsigned __int64)a2 >> 5));
  v12 = v8 + 4 * v9 - 4;
  if ( !v10 )
    v12 = v8 + 4 * v9;
  v13 = *v11 | *((_DWORD *)qword_140016150 + (a2 & 0x1F));
  v14 = 0;
  do
  {
    while ( 1 )
    {
      if ( v13 != -1 )
      {
        v14 = 32 * (((__int64)v11 - v8) >> 2);
        if ( !v13 )
          goto LABEL_13;
        v15 = -1;
        v16 = !_BitScanReverse64((unsigned __int64 *)&v17, v13);
        if ( !v16 )
          v15 = v17;
        if ( v15 != 31 )
          break;
      }
      v26 = 0;
      if ( (unsigned __int64)v11 >= v12 )
        goto LABEL_30;
      v13 = *++v11;
    }
    v14 += v15 + 1;
LABEL_13:
    v18 = v14 & 0x1F;
    v19 = 0;
    v20 = v13 & ~*((_DWORD *)qword_140016150 + v18);
    v13 = v20;
    if ( (unsigned __int64)v11 > v12 )
    {
      v22 = v11;
LABEL_19:
      v21 = 1;
      if ( v10 )
      {
        if ( v19 )
        {
          v23 = v11 + 1;
          v13 = v11[1];
        }
        else
        {
          v23 = v22 + 1;
        }
        if ( !v19 )
          v23 = v11;
        v11 = v23;
        v13 |= ~*((_DWORD *)qword_140016150 + (v7 & 0x1F));
LABEL_25:
        v24 = -1;
        v16 = !_BitScanForward64((unsigned __int64 *)&v25, v13);
        if ( !v16 )
          v24 = v25;
        v19 += v24;
      }
    }
    else
    {
      v21 = 0;
      if ( v20 )
        goto LABEL_25;
      while ( 1 )
      {
        v19 += 32;
        v22 = v11;
        if ( v19 >= v5 && v19 - (unsigned int)v18 >= v5 )
          break;
        if ( v11 == (_DWORD *)v12 )
          goto LABEL_19;
        v13 = *++v11;
        if ( *v11 )
          goto LABEL_25;
      }
    }
    v26 = v19 - v18;
    if ( v26 > v5 )
      goto LABEL_33;
    if ( v26 >= 0x20 )
      break;
    v26 = 0;
  }
  while ( !v21 );
LABEL_30:
  if ( v26 > v5 )
    v26 = v5;
  v5 = v26;
LABEL_33:
  *a5 = v14;
  return v5;
}
