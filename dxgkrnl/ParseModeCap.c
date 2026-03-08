/*
 * XREFs of ParseModeCap @ 0x1C01FF3DC
 * Callers:
 *     ParseResolutionKeyName @ 0x1C01FEAE0 (ParseResolutionKeyName.c)
 *     ParseFreqRangeValue @ 0x1C03CA574 (ParseFreqRangeValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     xwcschr @ 0x1C01FF4E4 (xwcschr.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1C01FF51C (-xwtol@@YAKPEBG@Z.c)
 */

char __fastcall ParseModeCap(_WORD *a1, char a2, _DWORD *a3, int *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // r11
  int v7; // esi
  int v9; // eax
  int v10; // ecx
  __int64 v13; // r8
  unsigned int v14; // edi
  _WORD *v15; // rax
  const unsigned __int16 *v16; // r10
  _WORD *v17; // rbx
  unsigned int v18; // r9d
  __int64 v19; // rax
  int v20; // ecx
  unsigned int v22; // ebx
  _WORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r10
  _WORD *v26; // rdi
  _WORD *v27; // rax
  const unsigned __int16 *v28; // r10
  unsigned int v29; // eax
  __int64 v30; // r9
  unsigned int v31; // r9d
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-20h]
  int v34; // [rsp+24h] [rbp-1Ch]
  int v35; // [rsp+28h] [rbp-18h]
  int v36; // [rsp+2Ch] [rbp-14h]

  v6 = a6;
  v7 = -1;
  v33 = 0;
  v34 = -1;
  v9 = 0;
  v35 = 0;
  v10 = -1;
  v36 = -1;
  v13 = 0LL;
  if ( a2 )
  {
    v22 = 0;
    if ( a1 )
    {
      do
      {
        if ( v22 >= 4 )
          break;
        v23 = (_WORD *)xwcschr(a1, 44LL, v13);
        v26 = v23;
        if ( v23 )
          *v23 = 0;
        v27 = (_WORD *)xwcschr(v25, 45LL, v24);
        if ( v27 )
        {
          *v27 = 0;
          v29 = xwtol(v28);
          v28 = (const unsigned __int16 *)(v30 + 2);
        }
        else
        {
          v29 = 0;
        }
        *(&v33 + v22) = v29;
        v31 = xwtol(v28);
        a1 = v26 + 1;
        v32 = v22 + 1;
        v22 += 2;
        *(&v33 + v32) = v31;
      }
      while ( v26 );
      v10 = v36;
      v9 = v35;
      v7 = v34;
      LODWORD(v13) = v33;
    }
    if ( a3 )
      *a3 = v9;
    if ( a4 )
      *a4 = v10;
    if ( a5 )
      *a5 = 1000 * v13;
    if ( v6 )
      *v6 = 1000 * v7;
    return 1;
  }
  v14 = 0;
  if ( a1 )
  {
    do
    {
      if ( v14 >= 4 )
        break;
      v15 = (_WORD *)xwcschr(a1, 44LL, v13);
      v17 = v15;
      if ( v15 )
        *v15 = 0;
      v18 = xwtol(v16);
      a1 = v17 + 1;
      v19 = v14++;
      *(&v33 + v19) = v18;
    }
    while ( v17 );
    if ( v33 )
    {
      v20 = v34;
      if ( v34 != -1 )
      {
        if ( a3 )
          *a3 = v33;
        if ( a4 )
          *a4 = v20;
        if ( a5 )
          *a5 = v35;
        if ( v6 )
          *v6 = 0;
        return 1;
      }
    }
  }
  return 0;
}
