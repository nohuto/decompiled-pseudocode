__int64 __fastcall RFONTOBJ::bAllocateCache(RFONTOBJ *this, struct RFONTOBJ *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v7; // rbx
  unsigned int v8; // edi
  unsigned int v9; // r13d
  unsigned int *v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // r15
  char *v20; // r12
  __int64 v21; // r8
  __int64 v22; // r15
  unsigned __int16 *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  unsigned __int16 *v37; // rbp
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // [rsp+20h] [rbp-68h]
  size_t Size; // [rsp+30h] [rbp-58h]
  int v43; // [rsp+98h] [rbp+10h]
  unsigned int v44; // [rsp+A0h] [rbp+18h]
  int v45; // [rsp+A8h] [rbp+20h]

  v4 = *(_QWORD *)this;
  v5 = 0LL;
  v40 = 0LL;
  v7 = *(_QWORD *)this + 512LL;
  v8 = 2 * *(_DWORD *)(*(_QWORD *)this + 632LL);
  v43 = *(_DWORD *)(*(_QWORD *)this + 84LL) & 2;
  if ( v43 )
  {
    v40 = *(_QWORD *)(v4 + 472);
    v9 = *(_DWORD *)(v40 + 12);
    v10 = (unsigned int *)(v40 + 8);
  }
  else
  {
    v34 = *(_QWORD *)(v4 + 120);
    v5 = *(_QWORD *)(v34 + 72);
    if ( !v5 )
      return 0LL;
    v9 = *(_DWORD *)(v5 + 4);
    v10 = *(unsigned int **)(v34 + 72);
  }
  v11 = 16LL * v9;
  v45 = *v10;
  if ( v11 > 0xFFFFFFFF )
    return 0LL;
  v12 = 8LL * *v10;
  Size = v12;
  if ( v12 > 0xFFFFFFFF )
    return 0LL;
  v13 = v11 + 16;
  if ( (unsigned int)v11 >= 0xFFFFFFF0 )
    return 0LL;
  v14 = v13 + (unsigned int)v12;
  v44 = v14;
  if ( (unsigned int)v14 < v13 )
    return 0LL;
  v15 = v14 + (*(_DWORD *)(v4 + 640) != 0 ? 768 : 2048);
  if ( v15 + 8 > 0xC00 )
  {
    v15 = (v14 + 4095) & 0xFFFFF000;
    if ( v15 - (unsigned int)v14 < 0x80 )
      v15 += 4096;
  }
  if ( !v15 )
  {
    v17 = v4;
    goto LABEL_47;
  }
  v16 = Win32AllocPool(v15, 1667326791LL, v14, a4);
  v17 = *(_QWORD *)this;
  v18 = v16;
  if ( !v16 )
  {
LABEL_47:
    *(_DWORD *)(v17 + 84) |= 8u;
    return 0LL;
  }
  *(_QWORD *)(v17 + 480) = v16;
  v19 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  v20 = (char *)(v19 + v11 + 16);
  *(_QWORD *)(v19 + 8) = 0LL;
  *(_DWORD *)v19 = v9;
  memset_0(v20, 0, Size);
  if ( v43 )
  {
    if ( v9 )
    {
      v21 = v9;
      v22 = v19 - v40;
      v23 = (unsigned __int16 *)(v40 + 18);
      do
      {
        *(_QWORD *)((char *)v23 + v22 + 6) = v20;
        *(_DWORD *)((char *)v23 + v22 - 2) = *(v23 - 1);
        v24 = *v23;
        *(_DWORD *)((char *)v23 + v22 + 2) = v24;
        v23 += 8;
        v20 += 8 * v24;
        --v21;
      }
      while ( v21 );
    }
  }
  else if ( v9 )
  {
    v35 = v9;
    v36 = v19 + 20;
    v37 = (unsigned __int16 *)(v5 + 8);
    do
    {
      *(_QWORD *)(v36 + 4) = v20;
      v38 = *v37;
      v37 += 2;
      *(_DWORD *)(v36 - 4) = v38;
      v39 = *(v37 - 1);
      *(_DWORD *)v36 = v39;
      v36 += 16LL;
      v20 += 8 * v39;
      --v35;
    }
    while ( v35 );
  }
  v25 = (_QWORD *)(v18 + v44);
  *(_QWORD *)(v7 + 24) = v25;
  *v25 = 0LL;
  v26 = v18 + v15;
  *(_QWORD *)v7 = *(_QWORD *)(v7 + 24) + 16LL;
  *(_QWORD *)(v7 + 16) = v26;
  *(_QWORD *)(v7 + 8) = v26;
  v27 = *(_DWORD *)(*(_QWORD *)this + 88LL);
  if ( !v27 || (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) != 0 )
    goto LABEL_27;
  if ( v27 != 2 )
  {
    v28 = *(_DWORD *)(v7 + 120);
    v8 = 16 * v28;
    v29 = (16 * v28 + 4095) & 0xFFFFF000;
    if ( v29 <= 0x2000 )
    {
      if ( v8 >= 0xC00 )
        v8 = (v8 + 4095) & 0xFFFFF000;
      goto LABEL_26;
    }
    if ( (unsigned int)(8 * v28) <= 0x2000 )
    {
      v8 = 0x2000;
      v29 = 0x2000;
      goto LABEL_26;
    }
    v8 = 0x10000;
    if ( ((8 * v28 + 4095) & 0xFFFFF000) < 0x10000 )
      v8 = (8 * v28 + 4095) & 0xFFFFF000;
  }
  v29 = v8;
LABEL_26:
  *(_DWORD *)(v7 + 40) = v29;
  *(_DWORD *)(v7 + 36) = v8;
  *(_DWORD *)(v7 + 44) = ((unsigned int)(v45 + 1023) >> 10 << 16) / *(_DWORD *)(v7 + 40);
LABEL_27:
  v30 = **(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( v30 > 0xC8 )
  {
    v32 = v30 - 1;
    *(_DWORD *)(v7 + 92) = v32;
    if ( (((_WORD)v30 - 1) & 0xF000) != 0 )
    {
      v33 = (unsigned int)*((unsigned __int8 *)&acBits + ((v32 >> 12) & 0xF)) + 12;
    }
    else if ( (((_WORD)v30 - 1) & 0xF00) != 0 )
    {
      v33 = (unsigned int)*((unsigned __int8 *)&acBits + (((__int64)(int)v32 >> 8) & 0xF)) + 8;
    }
    else if ( (((_BYTE)v30 - 1) & 0xF0) != 0 )
    {
      v33 = (unsigned int)*((unsigned __int8 *)&acBits + (((__int64)(int)v32 >> 4) & 0xF)) + 4;
    }
    else
    {
      v33 = *((unsigned __int8 *)&acBits + (((_BYTE)v30 - 1) & 0xF));
    }
    *(_DWORD *)(v7 + 100) = v33;
    *(_DWORD *)(v7 + 96) = *((_DWORD *)&aiStart + v33);
  }
  else
  {
    *(_DWORD *)(v7 + 92) = 0;
  }
  return 1LL;
}
