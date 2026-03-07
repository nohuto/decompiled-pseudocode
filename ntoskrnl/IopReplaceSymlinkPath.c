NTSTATUS __fastcall IopReplaceSymlinkPath(
        const wchar_t *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int16 a6,
        __int16 a7)
{
  unsigned __int16 v7; // bx
  size_t v9; // r13
  unsigned int v11; // esi
  wchar_t *v12; // rdi
  WCHAR *v13; // r14
  wchar_t *v14; // rcx
  const void *v15; // rdx
  WCHAR *v16; // rdi
  USHORT v17; // ax
  __int16 v18; // r15
  _WORD *v19; // rdx
  __int64 v20; // rax
  NTSTATUS result; // eax
  wchar_t *v22; // rcx
  unsigned __int16 v23; // r8
  unsigned __int16 v24; // dx
  __int16 v25; // cx
  __int16 v26; // r9
  unsigned __int16 v27; // r11
  __int64 v28; // r14
  wchar_t v29; // r15
  wchar_t v30; // r8
  _WORD *Src; // [rsp+20h] [rbp-48h]
  __int16 v32; // [rsp+70h] [rbp+8h]
  USHORT NewLength; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int16 v34; // [rsp+88h] [rbp+20h]

  v7 = a4[5];
  v9 = a4[3];
  LOWORD(v11) = 0;
  NewLength = 0;
  v34 = v7;
  v12 = (wchar_t *)&a1[a2];
  v13 = (WCHAR *)&a1[a5];
  if ( a2 < a5 )
    return -1073741192;
  Src = (unsigned __int16 *)((char *)a4 + a4[4] + 20);
  if ( *Src == 92 )
  {
    if ( wcsnicmp(a1, L"\\Device\\Mup", 0xBuLL) )
      goto LABEL_9;
    v23 = *(_WORD *)(a3 + 88);
    v24 = 0;
    v32 = **(_WORD **)(a3 + 96);
    v25 = v32;
    v26 = (v32 != 59) + 3;
    if ( (v23 & 0xFFFE) != 0 )
    {
      v27 = *(_WORD *)(a3 + 88);
      do
      {
        v28 = *(_QWORD *)(a3 + 96);
        v23 = v27;
        v29 = *(_WORD *)(v28 + 2LL * v24);
        if ( v29 == 92 )
        {
          --v26;
          if ( v25 != 59 && v26 == 2 )
          {
            if ( (unsigned __int16)(v24 + 1) < (unsigned __int16)(v27 >> 1) && *(_WORD *)(v28 + 2LL * v24 + 2) != 59 )
              goto LABEL_37;
            v25 = v32;
          }
          if ( !v26 )
            goto LABEL_37;
        }
        *v12 = v29;
        ++v24;
        v23 = *(_WORD *)(a3 + 88);
        ++v12;
        v27 = v23;
      }
      while ( v24 < (unsigned __int16)(v23 >> 1) );
    }
    if ( !v26 )
    {
LABEL_37:
      if ( v24 < (unsigned __int16)(v23 >> 1) )
      {
        v30 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v24);
        do
        {
          *v12 = v30;
          ++v24;
          ++v12;
          v30 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v24);
        }
        while ( v30 != 92 && v24 < (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) );
      }
      v7 = v34;
      v18 = 2 * v24 + a6;
      v13 = (WCHAR *)&a1[a5 + v24];
      goto LABEL_10;
    }
    return -1073741192;
  }
  v14 = (wchar_t *)&a1[a2];
  v15 = *(const void **)(a3 + 96);
  NewLength = *(_WORD *)(a3 + 88) - v9;
  v11 = NewLength;
  memmove(v14, v15, NewLength);
  v16 = &v12[(unsigned __int64)v11 >> 1];
  if ( v16 != v13 )
  {
    v17 = v11;
    do
    {
      if ( *v16 == 92 )
        break;
      v17 -= 2;
      *v16-- = 0;
      NewLength = v17;
      LOWORD(v11) = v17;
    }
    while ( v16 != v13 );
    if ( v16 < v13 )
      return -1073741192;
  }
  v12 = v16 + 1;
LABEL_9:
  v18 = a6;
LABEL_10:
  if ( v7 )
  {
    memmove(v12, Src, v7);
    LOWORD(v11) = v34 + v11;
    NewLength = v11;
    v12 += (unsigned __int64)v7 >> 1;
  }
  if ( (_WORD)v9 )
  {
    v19 = (_WORD *)(*(_QWORD *)(a3 + 96) + *(unsigned __int16 *)(a3 + 88) - v9);
    if ( *(v12 - 1) == 92 && *v19 == 92 )
    {
      *v12-- = 0;
      LOWORD(v11) = v11 - 2;
    }
    memmove(v12, v19, v9);
    NewLength = v9 + v11;
    v12 += v9 >> 1;
  }
  *v12 = 0;
  v20 = -1LL;
  do
    ++v20;
  while ( v13[v20] );
  result = FsRtlRemoveDotsFromPath(v13, 2 * v20, &NewLength);
  if ( result >= 0 )
  {
    v22 = *(wchar_t **)(a3 + 96);
    *(_WORD *)(a3 + 88) = v18 + NewLength;
    *(_WORD *)(a3 + 90) = a7;
    if ( a1 != v22 )
    {
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      *(_QWORD *)(a3 + 96) = a1;
    }
    return 0;
  }
  return result;
}
