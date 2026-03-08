/*
 * XREFs of LZNT1CompressChunk @ 0x140A84DD0
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x140A84CD0 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 (__fastcall *a1)(char *, __int64),
        char *a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  char v9; // dl
  char *v10; // r15
  __int64 *v11; // r9
  __int64 (__fastcall *v12)(char *, __int64); // r8
  char *v13; // rcx
  void *v14; // r11
  char *v15; // rbx
  char *v16; // rdi
  unsigned int v17; // r10d
  int v18; // ebp
  int v19; // r14d
  char *v20; // rax
  int *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  char *v24; // rcx
  char *v25; // rax
  bool v26; // cf
  int v27; // edi
  char *v29; // rax
  int v30; // eax
  unsigned int v31; // esi
  __int64 *v32; // [rsp+20h] [rbp-68h]
  char *v33; // [rsp+28h] [rbp-60h]
  _WORD *v34; // [rsp+30h] [rbp-58h]
  char v36; // [rsp+98h] [rbp+10h]
  unsigned __int64 v37; // [rsp+A0h] [rbp+18h]

  v9 = 0;
  v10 = a4;
  v11 = &LZNT1Formats;
  v36 = 0;
  v12 = a1;
  v32 = &LZNT1Formats;
  if ( (unsigned __int64)(a2 + 4096) < a3 )
    a3 = (unsigned __int64)(a2 + 4096);
  v13 = (char *)a5;
  v14 = v10 + 2;
  v34 = v10 + 2;
  v15 = a2;
  v16 = v10 + 3;
  if ( (unsigned __int64)(v10 + 4095) < a5 )
    v13 = v10 + 4095;
  *(_QWORD *)a7 = a2;
  v17 = 0;
  v37 = (unsigned __int64)v13;
  LOBYTE(v18) = 0;
  *(_QWORD *)(a7 + 8) = a3;
  *(_DWORD *)(a7 + 16) = 4098;
  LOBYTE(v19) = 0;
  v20 = v10 + 2;
  if ( (unsigned __int64)a2 >= a3 )
    goto LABEL_17;
  v33 = v10 + 2;
  v21 = &dword_140AAADDC;
  while ( 1 )
  {
    if ( &a2[*v21] < v15 )
    {
      do
      {
        v30 = *((_DWORD *)v11 + 7);
        v11 = (__int64 *)((char *)v11 + 20);
        *(_DWORD *)(a7 + 16) = v30;
        v21 = (int *)v11 + 3;
      }
      while ( &a2[*((unsigned int *)v11 + 3)] < v15 );
      v32 = v11;
    }
    if ( (unsigned __int64)(v15 + 3) > a3 )
      goto LABEL_11;
    LODWORD(v22) = v12(v15, a7);
    if ( !(_DWORD)v22 )
    {
      v13 = (char *)v37;
      v9 = v36;
      v11 = v32;
LABEL_11:
      if ( v16 >= v13 )
        goto LABEL_16;
      v9 |= *v15;
      *v16 = *v15;
      v22 = 1LL;
      v23 = 1LL;
      v36 = v9;
      v18 = (unsigned __int8)v18 & ~(1 << v19);
      goto LABEL_13;
    }
    if ( (unsigned __int64)(v16 + 1) >= v37 )
      break;
    v11 = v32;
    v23 = 2LL;
    v22 = (int)v22;
    *(_WORD *)v16 = (v22 - 3) | (((_WORD)v15 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v32 + 16));
    v18 = (unsigned __int8)v18 | (1 << v19);
    v9 = v36;
LABEL_13:
    v24 = &v16[v23];
    v25 = &v15[v22];
    v16 = v24;
    v15 = v25;
    v19 = ((_BYTE)v19 + 1) & 7;
    if ( v19 )
    {
      v26 = (unsigned __int64)v25 < a3;
LABEL_15:
      v12 = a1;
      v13 = (char *)v37;
      if ( !v26 )
        goto LABEL_16;
    }
    else
    {
      v26 = (unsigned __int64)v25 < a3;
      if ( (unsigned __int64)v25 >= a3 )
        goto LABEL_15;
      v29 = v33;
      v16 = v24 + 1;
      v12 = a1;
      v11 = v32;
      v33 = v24;
      v13 = (char *)v37;
      *v29 = v18;
      LOBYTE(v18) = 0;
    }
  }
  v13 = (char *)v37;
LABEL_16:
  v9 = v36;
  v17 = 0;
  v20 = v33;
  v10 = a4;
  v14 = v34;
LABEL_17:
  if ( (unsigned __int64)v15 < a3 )
  {
    v31 = a3 - (_DWORD)a2;
    if ( (unsigned __int64)&v10[v31 + 2] > a5 )
    {
      return 3221225507LL;
    }
    else
    {
      memmove(v14, a2, v31);
      *a6 = v31 + 2;
      *(_WORD *)v10 = (v31 - 1) & 0xFFF | 0x3000;
      return 0LL;
    }
  }
  else
  {
    if ( v20 >= v13 )
      LODWORD(v16) = (_DWORD)v16 - 1;
    else
      *v20 = v18;
    v27 = (_DWORD)v16 - (_DWORD)v10;
    *a6 = v27;
    *(_WORD *)v10 = (v27 - 3) & 0xFFF | 0xB000;
    if ( !v9 )
      return 279;
    return v17;
  }
}
