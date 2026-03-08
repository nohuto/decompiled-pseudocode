/*
 * XREFs of BgpConsoleScrollScreen @ 0x140AEEAC0
 * Callers:
 *     BgpConsoleDisplayCharacterEx @ 0x140AEE5D4 (BgpConsoleDisplayCharacterEx.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14066F654 (BgpDisplayCharacterEx.c)
 */

__int64 BgpConsoleScrollScreen()
{
  __int64 v0; // r10
  unsigned int v1; // edi
  __int64 v2; // rsi
  _DWORD *v3; // r11
  _DWORD *v4; // rcx
  unsigned int v5; // r9d
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int16 v9; // r14
  int v10; // r12d
  int v11; // r13d
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // ebp
  unsigned int v15; // edi
  int v16; // r14d
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 result; // rax
  unsigned __int64 v22; // [rsp+40h] [rbp-58h]
  int v23; // [rsp+A0h] [rbp+8h] BYREF
  int v24; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+18h]
  __int64 v26; // [rsp+B8h] [rbp+20h]

  v0 = qword_140CF7760;
  v1 = 0;
  v2 = 0LL;
  v3 = (_DWORD *)(qword_140CF7760 + 60);
  v4 = (_DWORD *)(qword_140CF7760 + 48);
  v26 = qword_140CF7760 + 60;
  v25 = qword_140CF7760 + 48;
  do
  {
    v5 = 0;
    if ( *(_DWORD *)(v0 + 4) != 1 )
    {
      while ( 1 )
      {
        v6 = v5 + 1;
        v7 = v2 + v5;
        v8 = v2 + v5 + 1;
        v9 = *(_WORD *)(v0 + 12 * v8 + 88);
        if ( *(_WORD *)(v0 + 12 * v7 + 88) != v9 || *(_DWORD *)(v0 + 12 * v7 + 80) != *(_DWORD *)(v0 + 12 * v8 + 80) )
          goto LABEL_7;
        if ( *(_DWORD *)(v0 + 12 * v7 + 84) != *(_DWORD *)(v0 + 12 * v8 + 84) )
          break;
LABEL_9:
        v5 = v6;
        v4 = (_DWORD *)v25;
        if ( v6 >= *(_DWORD *)(v0 + 4) - 1 )
          goto LABEL_10;
      }
      v4 = (_DWORD *)v25;
LABEL_7:
      v10 = *(_DWORD *)(v0 + 12 * v8 + 80);
      v11 = *(_DWORD *)(v0 + 12 * v8 + 84);
      v12 = BgpDisplayCharacterEx(
              v9,
              *(__int64 **)(v0 + 40),
              *v3 + *v4 * v1,
              v3[1] + v4[1] * v5,
              v11,
              v10,
              &v24,
              &v23,
              v22);
      v0 = qword_140CF7760;
      v3 = (_DWORD *)v26;
      if ( v12 >= 0 )
      {
        *(_WORD *)(qword_140CF7760 + 12 * v7 + 88) = v9;
        *(_DWORD *)(v0 + 12 * v7 + 84) = v11;
        *(_DWORD *)(v0 + 12 * v7 + 80) = v10;
      }
      goto LABEL_9;
    }
LABEL_10:
    ++v1;
    v2 += 25LL;
  }
  while ( v1 < 0x50 );
  v13 = 0;
  v14 = *(_DWORD *)(v0 + 16);
  v15 = *(_DWORD *)(v0 + 4) - 1;
  v16 = *(_DWORD *)(v0 + 12);
  v17 = 0LL;
  do
  {
    v18 = BgpDisplayCharacterEx(
            0x20u,
            *(__int64 **)(v0 + 40),
            *v3 + *v4 * v13,
            v3[1] + v4[1] * v15,
            v14,
            v16,
            &v24,
            &v23,
            v22);
    v0 = qword_140CF7760;
    if ( v18 >= 0 )
    {
      v19 = v17 + v15;
      v20 = 3 * v19;
      *(_WORD *)(qword_140CF7760 + 4 * v20 + 88) = 32;
      *(_DWORD *)(v0 + 12 * v19 + 84) = v14;
      *(_DWORD *)(v0 + 4 * v20 + 80) = v16;
    }
    v3 = (_DWORD *)v26;
    ++v13;
    v4 = (_DWORD *)v25;
    v17 += 25LL;
  }
  while ( v13 < 0x50 );
  *(_DWORD *)(v0 + 68) = 0;
  result = (unsigned int)(*(_DWORD *)(v0 + 4) - 1);
  *(_DWORD *)(v0 + 72) = result;
  return result;
}
