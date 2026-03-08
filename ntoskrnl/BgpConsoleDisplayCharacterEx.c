/*
 * XREFs of BgpConsoleDisplayCharacterEx @ 0x140AEE5D4
 * Callers:
 *     BgpConsoleDisplayString @ 0x140AEE870 (BgpConsoleDisplayString.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14066F654 (BgpDisplayCharacterEx.c)
 *     BgpConsoleScrollScreen @ 0x140AEEAC0 (BgpConsoleScrollScreen.c)
 */

__int64 BgpConsoleDisplayCharacterEx(unsigned __int16 a1, unsigned int a2, unsigned int a3, int a4, int a5, ...)
{
  int v5; // esi
  __int64 v7; // rdx
  int *v8; // rbx
  _DWORD *v9; // r15
  _DWORD *v10; // r12
  int v11; // ebp
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // r14d
  unsigned int v15; // r8d
  unsigned int v16; // eax
  int v17; // r13d
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // rax
  int v21; // r14d
  int v22; // r8d
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned __int64 v26; // [rsp+40h] [rbp-38h]
  int v27; // [rsp+88h] [rbp+10h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va, a5);
  v5 = a1;
  if ( a2 > 0x50 )
    return 3221225485LL;
  v7 = qword_140CF7760;
  if ( a3 > *(_DWORD *)(qword_140CF7760 + 4) )
    return 3221225485LL;
  v8 = (int *)(qword_140CF7760 + 68);
  v9 = (_DWORD *)(qword_140CF7760 + 60);
  v10 = (_DWORD *)(qword_140CF7760 + 48);
  v11 = 0;
  v12 = (unsigned int)a1 - 8;
  if ( v5 == 8 )
  {
    if ( !*v8 )
      goto LABEL_20;
    v21 = a5;
    v22 = *v8 - 1;
    *v8 = v22;
    v11 = BgpDisplayCharacterEx(
            0x20u,
            *(__int64 **)(v7 + 40),
            *v9 + *v10 * v22,
            v9[1] + *(_DWORD *)(v7 + 72) * *(_DWORD *)(v7 + 52),
            v21,
            a4,
            (int *)va,
            &v27,
            v26);
    if ( v11 >= 0 )
    {
      v7 = qword_140CF7760;
      v12 = (unsigned int)v8[1] + 25LL * (unsigned int)*v8;
      v23 = 3 * v12;
      *(_WORD *)(qword_140CF7760 + 4 * v23 + 88) = 32;
      *(_DWORD *)(v7 + 4 * v23 + 80) = a4;
      *(_DWORD *)(v7 + 4 * v23 + 84) = v21;
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v12 = (unsigned int)(v13 - 1);
    if ( !(_DWORD)v12 )
    {
LABEL_21:
      ++v8[1];
      goto LABEL_22;
    }
    if ( (_DWORD)v12 == 3 )
    {
LABEL_22:
      *v8 = 0;
      goto LABEL_23;
    }
    v14 = a5;
    v11 = BgpDisplayCharacterEx(
            v5,
            *(__int64 **)(qword_140CF7760 + 40),
            *(_DWORD *)(qword_140CF7760 + 60) + *v8 * *v10,
            *(_DWORD *)(qword_140CF7760 + 64) + *(_DWORD *)(qword_140CF7760 + 72) * *(_DWORD *)(qword_140CF7760 + 52),
            a5,
            a4,
            (int *)va,
            &v27,
            v26);
    if ( v11 >= 0 )
    {
      v12 = 3 * ((unsigned int)v8[1] + 25LL * (unsigned int)*v8);
      v7 = qword_140CF7760;
      *(_WORD *)(qword_140CF7760 + 4 * v12 + 88) = v5;
      *(_DWORD *)(v7 + 4 * v12 + 80) = a4;
      *(_DWORD *)(v7 + 4 * v12 + 84) = v14;
      ++*v8;
      goto LABEL_20;
    }
LABEL_19:
    v7 = qword_140CF7760;
    goto LABEL_20;
  }
  v15 = *v8;
  v16 = 80 - *v8;
  LODWORD(v12) = 5;
  if ( v16 >= 5 || (v12 = v16) != 0 )
  {
    v17 = a5;
    v18 = (unsigned int)v12;
    do
    {
      v19 = BgpDisplayCharacterEx(
              0x20u,
              *(__int64 **)(v7 + 40),
              *v9 + *v10 * v15,
              v9[1] + v10[1] * v8[1],
              v17,
              a4,
              (int *)va,
              &v27,
              v26);
      v7 = qword_140CF7760;
      v11 = v19;
      if ( v19 >= 0 )
      {
        v12 = (unsigned int)v8[1] + 25LL * (unsigned int)*v8;
        v20 = 3 * v12;
        *(_WORD *)(qword_140CF7760 + 4 * v20 + 88) = 32;
        *(_DWORD *)(v7 + 4 * v20 + 80) = a4;
        *(_DWORD *)(v7 + 4 * v20 + 84) = v17;
      }
      v15 = ++*v8;
      --v18;
    }
    while ( v18 );
  }
LABEL_20:
  if ( (unsigned int)*v8 >= 0x50 )
    goto LABEL_21;
LABEL_23:
  v24 = v8[1];
  if ( v24 >= *(_DWORD *)(v7 + 4) )
  {
    v8[1] = v24 - 1;
    BgpConsoleScrollScreen(v12);
  }
  return (unsigned int)v11;
}
