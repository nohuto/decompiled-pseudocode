/*
 * XREFs of RtlQuerySecurityObject @ 0x1800D6F60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A4340 (memmove.c)
 *     RtlpFilterSacl @ 0x1800E87C0 (RtlpFilterSacl.c)
 */

__int64 __fastcall RtlQuerySecurityObject(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v6; // ecx
  unsigned int v8; // esi
  unsigned int v9; // r12d
  unsigned int v10; // r10d
  unsigned __int16 *v11; // rbp
  __int64 v12; // rbx
  unsigned __int8 *v13; // r15
  unsigned __int8 *v14; // r13
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  char *v17; // rsi
  __int16 v18; // dx
  __int16 v19; // dx
  __int16 v20; // ax
  __int16 v21; // ax
  int v22; // eax
  __int16 v23; // ax
  __int64 v24; // rbx
  int v25; // eax
  unsigned int v27; // [rsp+20h] [rbp-58h]
  unsigned int v28; // [rsp+24h] [rbp-54h]
  int v29; // [rsp+28h] [rbp-50h]
  int v30; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v31; // [rsp+80h] [rbp+8h] BYREF
  int v32; // [rsp+88h] [rbp+10h]
  size_t Size; // [rsp+90h] [rbp+18h]
  unsigned int v34; // [rsp+98h] [rbp+20h]

  v34 = a4;
  v32 = a2;
  v31 = 0;
  v6 = 0;
  v27 = 0;
  LODWORD(Size) = 0;
  v30 = a2 & 2;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v13 = *(unsigned __int8 **)(a1 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 8) )
        goto LABEL_8;
      v13 = (unsigned __int8 *)(a1 + *(unsigned int *)(a1 + 8));
    }
    if ( v13 )
    {
      v8 = (4 * v13[1] + 11) & 0xFFFFFFFC;
      v27 = v8;
    }
  }
LABEL_8:
  v29 = a2 & 4;
  if ( (a2 & 4) != 0 && (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v11 = *(unsigned __int16 **)(a1 + 32);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 16) )
        goto LABEL_16;
      v11 = (unsigned __int16 *)(a1 + *(unsigned int *)(a1 + 16));
    }
    if ( v11 )
      v9 = (v11[1] + 3) & 0xFFFFFFFC;
  }
LABEL_16:
  v15 = a2 & 0x1F8;
  v28 = v15;
  if ( (a2 & 0x1F8) != 0 && (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v12 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 12) )
        goto LABEL_24;
      v12 = a1 + *(unsigned int *)(a1 + 12);
    }
    if ( v12 )
    {
      RtlpFilterSacl(v12, 0LL, &v31, a2 & 0x1F8);
      v10 = v31;
      v6 = 0;
      v15 = v28;
      LOBYTE(a2) = v32;
      a4 = v34;
    }
  }
LABEL_24:
  v32 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v14 = *(unsigned __int8 **)(a1 + 8);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 4) )
      {
        v14 = 0LL;
        goto LABEL_32;
      }
      v14 = (unsigned __int8 *)(a1 + *(unsigned int *)(a1 + 4));
    }
    if ( v14 )
    {
      v6 = (4 * v14[1] + 11) & 0xFFFFFFFC;
      LODWORD(Size) = v6;
    }
  }
LABEL_32:
  v16 = v8 + v9 + v10 + v6 + 20;
  *a5 = v16;
  if ( v16 > a4 || !a3 )
    return 3221225507LL;
  v17 = (char *)(a3 + 20);
  *(_OWORD *)a3 = 0LL;
  *(_DWORD *)(a3 + 16) = 0;
  v18 = *(_WORD *)(a3 + 2);
  *(_BYTE *)a3 = 1;
  v19 = v18 | 0x8000;
  *(_WORD *)(a3 + 2) = v19;
  if ( v15 )
  {
    v20 = v19;
    if ( v10 )
    {
      RtlpFilterSacl(v12, a3 + 20, &v31, v15);
      *(_DWORD *)(a3 + 12) = 20;
      v17 += v31;
      v20 = *(_WORD *)(a3 + 2);
    }
    v19 = v20 | *(_WORD *)(a1 + 2) & 0x2830;
    *(_WORD *)(a3 + 2) = v19;
  }
  if ( v29 )
  {
    v21 = v19;
    if ( v9 )
    {
      memmove(v17, v11, v9);
      v22 = (int)v17;
      v17 += v9;
      *(_DWORD *)(a3 + 16) = v22 - a3;
      v21 = *(_WORD *)(a3 + 2);
    }
    v19 = v21 | *(_WORD *)(a1 + 2) & 0x140C;
    *(_WORD *)(a3 + 2) = v19;
  }
  if ( v32 )
  {
    v23 = v19;
    if ( (_DWORD)Size )
    {
      v24 = (unsigned int)Size;
      memmove(v17, v14, (unsigned int)Size);
      v25 = (int)v17;
      v17 += v24;
      *(_DWORD *)(a3 + 4) = v25 - a3;
      v23 = *(_WORD *)(a3 + 2);
    }
    v19 = v23 | *(_WORD *)(a1 + 2) & 1;
    *(_WORD *)(a3 + 2) = v19;
  }
  if ( v30 )
  {
    if ( v27 )
    {
      memmove(v17, v13, v27);
      v19 = *(_WORD *)(a3 + 2);
      *(_DWORD *)(a3 + 8) = (_DWORD)v17 - a3;
    }
    *(_WORD *)(a3 + 2) = v19 | *(_WORD *)(a1 + 2) & 2;
  }
  return 0LL;
}
