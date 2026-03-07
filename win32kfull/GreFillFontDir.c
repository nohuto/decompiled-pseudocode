__int64 __fastcall GreFillFontDir(__int64 a1, int a2, __int64 a3)
{
  unsigned int CurrentThreadId; // eax
  char v7; // al
  char v8; // al
  __int16 v9; // cx
  _BYTE *v10; // r8
  __int16 v11; // ax
  __int16 v12; // ax
  CHAR *v13; // rdi
  _BYTE *v14; // r8
  const WCHAR *v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r14
  int v19; // r14d
  CHAR *v20; // rdi
  __int64 v21; // rax
  const WCHAR *v22; // r9
  __int64 v23; // rbp
  int v24; // ebp
  CHAR *v25; // rdi
  __int64 v26; // rax
  const WCHAR *v27; // r9

  *(_QWORD *)a3 = 0x95020000000001LL;
  *(_WORD *)(a3 + 8) = 0;
  strcpy((char *)(a3 + 10), "Windows! Windows! Windows!");
  if ( a2 )
  {
    if ( a2 == 2 )
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    else
      CurrentThreadId = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    *(_DWORD *)(a3 + 10) = CurrentThreadId;
  }
  *(_OWORD *)(a3 + 37) = 0LL;
  *(_OWORD *)(a3 + 53) = 0LL;
  *(_BYTE *)(a3 + 69) = 0;
  *(_DWORD *)(a3 + 37) = 16843536;
  v7 = 67;
  if ( a2 != 2 )
    v7 = 3;
  *(_BYTE *)(a3 + 70) = v7 | (a2 != 0 ? 0x80 : 0);
  *(_BYTE *)(a3 + 71) = *(_BYTE *)(a1 + 52);
  *(_BYTE *)(a3 + 72) = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(a3 + 73) = *(_BYTE *)(a1 + 57);
  *(_WORD *)(a3 + 74) = 72;
  *(_WORD *)(a3 + 76) = 72;
  *(_BYTE *)(a3 + 78) = *(_BYTE *)(a1 + 60);
  *(_BYTE *)(a3 + 79) = *(_BYTE *)(a1 + 61);
  *(_WORD *)(a3 + 80) = *(_WORD *)(a1 + 60) + *(_WORD *)(a1 + 62) - *(_WORD *)(a1 + 56);
  v8 = *(_BYTE *)(a1 + 64) + *(_BYTE *)(a1 + 68) - *(_BYTE *)(a1 + 62) - *(_BYTE *)(a1 + 66) - *(_BYTE *)(a1 + 60);
  if ( (__int16)(*(_WORD *)(a1 + 64)
               + *(_WORD *)(a1 + 68)
               - *(_WORD *)(a1 + 62)
               - *(_WORD *)(a1 + 66)
               - *(_WORD *)(a1 + 60)) <= 0 )
    v8 = 0;
  *(_BYTE *)(a3 + 82) = v8;
  v9 = *(_WORD *)(a1 + 64) + *(_WORD *)(a1 + 68) - *(_WORD *)(a1 + 62) - *(_WORD *)(a1 + 66) - *(_WORD *)(a1 + 60);
  if ( v9 <= 0 )
    HIBYTE(v9) = 0;
  *(_BYTE *)(a3 + 83) = HIBYTE(v9);
  *(_BYTE *)(a3 + 84) = -((*(_BYTE *)(a1 + 52) & 1) != 0);
  *(_BYTE *)(a3 + 85) = -((*(_BYTE *)(a1 + 52) & 2) != 0);
  *(_BYTE *)(a3 + 86) = -((*(_BYTE *)(a1 + 52) & 0x10) != 0);
  *(_BYTE *)(a3 + 87) = *(_BYTE *)(a1 + 46);
  *(_BYTE *)(a3 + 88) = *(_BYTE *)(a1 + 47);
  *(_BYTE *)(a3 + 89) = *(_BYTE *)(a1 + 44);
  *(_WORD *)(a3 + 90) = 0;
  *(_WORD *)(a3 + 92) = *(_WORD *)(a1 + 60) + *(_WORD *)(a1 + 62);
  *(_BYTE *)(a3 + 94) = *(_BYTE *)(a1 + 45) & 0xF0 | (*(_DWORD *)(a1 + 48) >> 1) & 2 | ((*(_DWORD *)(a1 + 48) & 1) != 0
                                                                                      ? 6
                                                                                      : 0) | ((*(_DWORD *)(a1 + 48) & 0x401000) == 0);
  v10 = (_BYTE *)(a3 + 95);
  v11 = *(_WORD *)(a1 + 76);
  if ( !v11 )
    v11 = *(__int16 *)(a1 + 78) / 2;
  *v10 = v11;
  v12 = *(_WORD *)(a1 + 76);
  if ( !v12 )
    v12 = *(__int16 *)(a1 + 78) / 2;
  v13 = (CHAR *)(a3 + 118);
  v10[1] = HIBYTE(v12);
  v14 = v10 + 2;
  *v14 = *(_BYTE *)(a1 + 78);
  v14[1] = *(_BYTE *)(a1 + 79);
  v14 += 2;
  *v14++ = *(_BYTE *)(a1 + 108);
  *v14++ = *(_BYTE *)(a1 + 109);
  *(_WORD *)v14 = 513;
  v14 += 2;
  *v14++ = 0;
  *v14++ = 0;
  *v14++ = 0;
  *v14++ = 0;
  *v14++ = 0;
  *v14++ = 0;
  *(_DWORD *)v14 = 118;
  v14[4] = *(_BYTE *)(a1 + 58);
  v14[5] = *(_BYTE *)(a1 + 59);
  v14[6] = *(_BYTE *)(a1 + 36);
  v14[7] = *(_BYTE *)(a1 + 37);
  v15 = (const WCHAR *)(a1 + *(int *)(a1 + 8));
  v16 = -1LL;
  v17 = -1LL;
  do
    ++v17;
  while ( v15[v17] );
  RtlUnicodeToMultiByteN(v13, 0x20u, 0LL, v15, 2 * v17 + 2);
  v13[31] = 0;
  v18 = -1LL;
  do
    ++v18;
  while ( v13[v18] );
  v19 = v18 + 1;
  v20 = &v13[v19];
  v21 = -1LL;
  v22 = (const WCHAR *)(a1 + *(int *)(a1 + 16));
  do
    ++v21;
  while ( v22[v21] );
  RtlUnicodeToMultiByteN(v20, 0x40u, 0LL, v22, 2 * v21 + 2);
  v20[63] = 0;
  v23 = -1LL;
  do
    ++v23;
  while ( v20[v23] );
  v24 = v23 + 1;
  v25 = &v20[v24];
  v26 = -1LL;
  v27 = (const WCHAR *)(a1 + *(int *)(a1 + 12));
  do
    ++v26;
  while ( v27[v26] );
  RtlUnicodeToMultiByteN(v25, 0x20u, 0LL, v27, 2 * v26 + 2);
  v25[31] = 0;
  do
    ++v16;
  while ( v25[v16] );
  return (unsigned int)(v24 + v16 + v19 + 119);
}
