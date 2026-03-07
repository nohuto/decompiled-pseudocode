struct _DRIVER_INFO_2W *__fastcall CaptureDriverInfo2W(struct _DRIVER_INFO_2W *a1)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  ULONGLONG v5; // rbx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r11
  ULONGLONG v8; // rdi
  __int64 v9; // r10
  __int64 v10; // r11
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r10
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  size_t v15; // r13
  unsigned __int64 v16; // rdi
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  size_t v19; // r8
  void *v20; // rcx
  size_t v21; // rdi
  void *v22; // rcx
  ULONGLONG pullResult; // [rsp+60h] [rbp+8h] BYREF
  void *v25; // [rsp+68h] [rbp+10h]
  size_t Size; // [rsp+70h] [rbp+18h]
  size_t v27; // [rsp+78h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 1);
  if ( !v2 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 3);
  if ( !v3 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 4);
  if ( !v4 )
    return 0LL;
  if ( (v2 & 1) != 0 )
    goto LABEL_49;
  if ( v2 + 2 > MmUserProbeAddress || v2 + 2 < v2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (v3 & 1) != 0 )
    goto LABEL_49;
  if ( v3 + 2 > MmUserProbeAddress || v3 + 2 < v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v5 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(v2 + 2 * v6) );
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(v3 + 2 * v7) );
  if ( v6 + 1 < v6 )
    return 0LL;
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
    return 0LL;
  if ( ULongLongMult(v6 + 1, 2uLL, &pullResult) < 0 )
    return 0LL;
  if ( ULongLongMult(v8, 2uLL, &pullResult) < 0 )
    return 0LL;
  Size = 2 * v9;
  v11 = 2 * v9 + 50;
  if ( v11 < 0x30 )
    return 0LL;
  v27 = 2 * v10;
  if ( v11 + 2 * v10 + 2 < 2 * v9 + 50 )
    return 0LL;
  if ( (v4 & 1) != 0 )
LABEL_49:
    ExRaiseDatatypeMisalignment();
  if ( v4 + 2 > MmUserProbeAddress || v4 + 2 < v4 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(v4 + 2 * v12) );
  if ( v12 + 1 >= v12 )
    v5 = v12 + 1;
  pullResult = v5;
  if ( v12 + 1 < v12 )
    return 0LL;
  if ( ULongLongMult(v12 + 1, 2uLL, &pullResult) < 0 )
    return 0LL;
  v15 = 2 * v13;
  v16 = v14 + 2 * v13 + 2;
  if ( v16 < v14 || v16 - 48 > 0x270FFD0 )
    return 0LL;
  v17 = 0LL;
  v25 = 0LL;
  if ( (_DWORD)v16 )
  {
    v18 = (_QWORD *)AllocThreadBufferWithTag(v16, 0x706D7447u, 0);
    v17 = v18;
    v25 = v18;
    if ( v18 )
      memset(v18, 0, (unsigned int)v16);
  }
  if ( v17 )
  {
    *(_DWORD *)v17 = *(_DWORD *)a1;
    v17[5] = 0LL;
    v17[2] = 0LL;
    v17[1] = v17 + 6;
    v19 = Size;
    v17[3] = (char *)v17 + Size + 50;
    if ( v19 + v2 < v2 || v19 + v2 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v17 + 6, (const void *)v2, v19);
    v20 = (void *)v17[3];
    v21 = v27;
    if ( v27 + v3 < v3 || v27 + v3 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v20, (const void *)v3, v21);
    v22 = (void *)(v21 + v17[3] + 2LL);
    v17[4] = v22;
    if ( v4 + v15 < v4 || v4 + v15 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v22, (const void *)v4, v15);
  }
  return (struct _DRIVER_INFO_2W *)v17;
}
