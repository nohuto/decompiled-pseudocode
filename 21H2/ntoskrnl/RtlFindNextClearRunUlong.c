/*
 * XREFs of RtlFindNextClearRunUlong @ 0x140236608
 * Callers:
 *     MiFindFreePageFileSpaceForward @ 0x1402362BC (MiFindFreePageFileSpaceForward.c)
 *     MiRescanPageFileBitmapPortion @ 0x1402363F8 (MiRescanPageFileBitmapPortion.c)
 *     MiRescanPagefileBitmaps @ 0x1403BFDE4 (MiRescanPagefileBitmaps.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextClearRunUlong(unsigned int *a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // edi
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned int *v9; // r10
  unsigned __int64 v10; // r14
  unsigned int v11; // r9d
  int v12; // r11d
  unsigned int v13; // r8d
  char v14; // dl
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // r8d
  int v19; // ecx
  char v20; // bp
  unsigned int *v21; // rax
  char v22; // dl
  __int64 v23; // rcx
  __int64 result; // rax

  if ( a4 < 0x20 )
    return 0LL;
  v6 = *a1;
  if ( *a1 < 0x20 || a2 > v6 - 32 )
    return 0LL;
  v7 = *((_QWORD *)a1 + 1);
  v8 = (unsigned __int64)(v6 - 1) >> 5;
  v9 = (unsigned int *)(v7 + 4 * ((unsigned __int64)a2 >> 5));
  v10 = v7 + 4 * v8 - 4;
  if ( (v6 & 0x1F) == 0 )
    v10 = v7 + 4 * v8;
  v11 = *v9 | *((_DWORD *)qword_140012120 + (a2 & 0x1F));
  v12 = 0;
  do
  {
    while ( 1 )
    {
      if ( v11 == -1 )
        goto LABEL_8;
      v12 = 32 * (((__int64)v9 - v7) >> 2);
      if ( !v11 )
        break;
      v14 = -1;
      v15 = !_BitScanReverse64((unsigned __int64 *)&v16, v11);
      if ( !v15 )
        v14 = v16;
      if ( v14 != 31 )
      {
        v12 += v14 + 1;
        break;
      }
LABEL_8:
      v13 = 0;
      if ( (unsigned __int64)v9 >= v10 )
        goto LABEL_32;
      v11 = *++v9;
    }
    v17 = v12 & 0x1F;
    v18 = 0;
    v19 = v11 & ~*((_DWORD *)qword_140012120 + v17);
    v11 = v19;
    if ( (unsigned __int64)v9 > v10 )
    {
LABEL_21:
      v20 = 1;
      if ( (v6 & 0x1F) == 0 )
        goto LABEL_29;
      v21 = v9 + 1;
      if ( v18 )
        v11 = *v21;
      else
        v21 = v9;
      v9 = v21;
      v11 |= ~*((_DWORD *)qword_140012120 + (v6 & 0x1F));
LABEL_26:
      v22 = -1;
      v15 = !_BitScanForward64((unsigned __int64 *)&v23, v11);
      if ( !v15 )
        v22 = v23;
      v18 += v22;
      goto LABEL_29;
    }
    v20 = 0;
    if ( v19 )
      goto LABEL_26;
    while ( 1 )
    {
      v18 += 32;
      if ( v18 >= a4 && v18 - (unsigned int)v17 >= a4 )
        break;
      if ( v9 == (unsigned int *)v10 )
        goto LABEL_21;
      v11 = *++v9;
      if ( *v9 )
        goto LABEL_26;
    }
LABEL_29:
    v13 = v18 - v17;
    if ( v13 > a4 )
      v13 = a4;
    if ( v13 >= 0x20 )
      break;
    v13 = 0;
  }
  while ( !v20 );
LABEL_32:
  if ( v13 > a4 )
    v13 = a4;
  result = v13;
  *a5 = v12;
  return result;
}
