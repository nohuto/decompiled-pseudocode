struct _KPRCB *__fastcall EtwpCCSwapTrace(__int64 a1, __int64 a2, unsigned int a3, struct _KPRCB **a4)
{
  struct _KPRCB *result; // rax
  unsigned int v5; // ebp
  unsigned int v6; // r11d
  __int64 v10; // r12
  _QWORD *EtwSupport; // r15
  unsigned int *v12; // rdi
  _DWORD *v13; // r10
  struct _KPRCB *v14; // r8
  unsigned int *v15; // r9
  __int64 v16; // r8
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  unsigned int *v19; // rax
  char v20; // r9
  unsigned int v21; // eax
  int v22; // r8d
  char v23; // al
  int v24; // eax
  unsigned int v25; // ebx
  int v26; // eax
  int v27; // r9d
  char v28; // al
  unsigned int v29; // eax
  struct _KPRCB *v30; // rcx
  unsigned int v31; // eax
  unsigned int *v32; // rdx
  _DWORD *v33; // rax
  int v34; // eax
  __int64 Src; // [rsp+20h] [rbp-48h] BYREF
  void *v36; // [rsp+28h] [rbp-40h]
  unsigned int *v37; // [rsp+30h] [rbp-38h]
  struct _KPRCB **v38; // [rsp+38h] [rbp-30h]

  result = KeGetCurrentPrcb();
  v5 = 0;
  v6 = a3;
  Src = 0LL;
  v10 = a3;
  EtwSupport = result->EtwSupport;
  v12 = (unsigned int *)EtwSupport[a3 + 49];
  if ( v12 )
  {
    v13 = v12 + 1;
    v14 = *a4;
    v15 = v12 + 6;
    v36 = v12 + 6;
    v38 = (struct _KPRCB **)(v12 + 4);
    v37 = v12 + 1;
    if ( *v12 )
    {
      v16 = (__int64)v14 - *((_QWORD *)v12 + 1);
    }
    else
    {
      v34 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v12 + 1) = v14;
      *((_QWORD *)v12 + 2) = v14;
      *v13 = v34;
      *v12 = 104;
      memset(v12 + 6, 0, 0x40uLL);
      v6 = a3;
      v15 = v12 + 6;
      v13 = v12 + 1;
      v36 = v12 + 6;
      v37 = v12 + 1;
      v16 = 0LL;
      v38 = (struct _KPRCB **)(v12 + 4);
    }
    v17 = *(_DWORD *)(a1 + 1232);
    v18 = 0;
    if ( v17 )
    {
      v19 = v15;
      while ( *v19 != v17 )
      {
        if ( !*v19 )
        {
          v12[v18 + 6] = v17;
          *((_BYTE *)v12 + v18 + 88) = *(_BYTE *)(a1 + 563);
          break;
        }
        ++v18;
        ++v19;
        if ( v18 >= 0x10 )
          break;
      }
    }
    if ( v18 == 16
      || (unsigned int)(MEMORY[0xFFFFF78000000320] - *v13) > 0x1F4
      || (unsigned __int64)*v12 + 8 > 0x400
      || v16 > 0x40000000
      || *((_BYTE *)EtwSupport + v10 + 384) )
    {
      EtwpCCSwapFlush(v12, v6, v16, v15, Src);
      v30 = *a4;
      v31 = MEMORY[0xFFFFF78000000320];
      v32 = v37;
      *((_QWORD *)v12 + 1) = *a4;
      *v12 = 104;
      *v32 = v31;
      *v38 = v30;
      memset(v36, 0, 0x40uLL);
      v33 = v36;
      v16 = 0LL;
      *((_BYTE *)EtwSupport + v10 + 384) = 0;
      v18 = 0;
      *v33 = v17;
    }
    if ( v17 )
    {
      if ( *(_DWORD *)(a2 + 1232) )
        v5 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
      v20 = *(_BYTE *)(a1 + 195);
      v21 = v20 - *((char *)v12 + v18 + 88);
      if ( v5 > 1 || v21 > 7 || v16 >= 0x20000 )
      {
        LODWORD(Src) = (4 * v16) | 3;
        v26 = 0x1FFFF;
        if ( v5 < 0x1FFFF )
          v26 = v5;
        v27 = (32 * v26) | v20 & 0x1F;
        v28 = *(_BYTE *)(a1 + 388);
        HIDWORD(Src) = (WORD2(Src) ^ ((unsigned __int8)v18 ^ BYTE4(Src)) & 0xF) & 0x3FF | (v27 << 10);
        if ( v28 == 5 )
          v29 = (WORD2(Src) ^ (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 643))) & 0x3F0 ^ HIDWORD(Src);
        else
          v29 = (16 * *(unsigned __int8 *)(a1 + 388) - 337) & 0x3F0 | HIDWORD(Src) & 0xFFFFFC0F;
        HIDWORD(Src) = v29;
        v25 = 8;
      }
      else
      {
        v22 = v21 & 7 | ((_DWORD)v16 << 9);
        v23 = *(_BYTE *)(a1 + 388);
        LODWORD(Src) = (4 * (v18 & 0xF | (16 * v22))) | 2;
        if ( v23 == 5 )
          v24 = ((unsigned __int16)Src ^ (unsigned __int16)(*(unsigned __int8 *)(a1 + 643) << 9)) & 0x7E00 ^ Src;
        else
          v24 = ((*(unsigned __int8 *)(a1 + 388) << 9) - 10753) & 0x7E00 | Src & 0xFFFF81FF;
        LODWORD(Src) = v24;
        v25 = 4;
      }
    }
    else if ( v16 >= 0x4000 )
    {
      v25 = 4;
      LODWORD(Src) = (4 * v16) | 1;
    }
    else
    {
      v25 = 2;
      LOWORD(Src) = 4 * v16;
    }
    memmove((char *)v12 + *v12, &Src, v25);
    *v12 += v25;
    result = *a4;
    *((_QWORD *)v12 + 1) = *a4;
  }
  return result;
}
