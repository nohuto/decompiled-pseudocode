/*
 * XREFs of RtlpLocateRelatedBlocks @ 0x140593BEC
 * Callers:
 *     RtlpHpHeapHandleError @ 0x140593B5C (RtlpHpHeapHandleError.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLocateRelatedBlocks(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // rsi
  unsigned __int64 *v7; // r8
  unsigned __int64 i; // rdx
  _QWORD *v9; // r11
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r9
  int v17; // edx
  int v18; // eax
  unsigned __int16 v19; // ax
  unsigned __int64 j; // rcx
  unsigned __int16 v21; // ax
  int v22; // ecx
  unsigned __int16 v23; // r10
  int v24; // eax
  unsigned __int16 v25; // cx
  __int64 v26; // rdx
  int v27; // ecx
  unsigned __int16 v28; // ax
  int v29; // ecx
  int v30; // [rsp+8h] [rbp-48h]
  int v31; // [rsp+18h] [rbp-38h]
  int v32; // [rsp+28h] [rbp-28h]
  int v33; // [rsp+38h] [rbp-18h]
  int v34; // [rsp+48h] [rbp-8h]

  v4 = (__int64 *)(a1 + 288);
  for ( result = *v4; ; result = *(_QWORD *)result )
  {
    if ( (__int64 *)result == v4 )
    {
      v7 = (unsigned __int64 *)(a1 + 272);
      for ( i = *v7; (unsigned __int64 *)i != v7; i = *(_QWORD *)i )
      {
        if ( (i & 0xFFFFFFFFFFFF0000uLL) <= a2 && *(_QWORD *)(i + 40) + (i & 0xFFFFFFFFFFFF0000uLL) > a2 )
          dword_140C11918 = 5;
      }
      return result;
    }
    v6 = (_QWORD *)(result - 24);
    if ( *(_QWORD *)(result + 24) <= a2 && *(_QWORD *)(result + 48) > a2 )
      break;
  }
  v9 = (_QWORD *)(result + 72);
  v10 = *(_QWORD **)(result + 72);
  v11 = 0LL;
  v12 = 0LL;
  while ( v10 != v9 )
  {
    v13 = v10[2];
    v14 = v13 + v10[3];
    if ( v14 < a2 && v14 > v11 )
      v11 = v13 + v10[3];
    if ( v13 > a2 && (!v12 || v13 < v12[4]) )
      v12 = v10 - 2;
    v10 = (_QWORD *)*v10;
  }
  v15 = 0LL;
  v16 = 0LL;
  if ( !v11 )
    v11 = (unsigned __int64)v6;
  if ( v11 < a2 )
  {
    v17 = *(_DWORD *)(a1 + 124);
    do
    {
      v16 = v11;
      if ( v17 )
      {
        v18 = *(_DWORD *)(v11 + 8);
        v17 = *(_DWORD *)(a1 + 124);
        LOWORD(v30) = v18;
        if ( (v17 & v18) != 0 )
          v30 = *(_DWORD *)(a1 + 136) ^ v18;
        v19 = v30;
      }
      else
      {
        v19 = *(_WORD *)(v11 + 8);
      }
      if ( !v19 )
        break;
      v11 += 16LL * v19;
    }
    while ( v11 < a2 );
  }
  for ( j = (unsigned __int64)(v12 - 2); j > a2; j += -16LL * v21 )
  {
    v15 = j;
    v21 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(j + 12);
    if ( !v21 )
      break;
  }
  qword_140C11948 = v16;
  qword_140C11950 = v15;
  if ( !v16 || !v15 )
    goto LABEL_70;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v22 = *(_DWORD *)(v16 + 8);
    LOWORD(v31) = v22;
    if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
      v31 = *(_DWORD *)(a1 + 136) ^ v22;
    v23 = v31;
  }
  else
  {
    v23 = *(_WORD *)(v16 + 8);
  }
  result = v16 + 16LL * v23;
  if ( result != v15 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v15 + 12)) )
  {
    dword_140C11918 = 4;
  }
  else
  {
LABEL_70:
    if ( *(_DWORD *)(a1 + 124) )
    {
      v32 = *(_DWORD *)(v16 + 8);
      v24 = *(_DWORD *)(a1 + 124);
      if ( (v24 & v32) != 0 )
        v32 ^= *(_DWORD *)(a1 + 136);
      v25 = v32;
    }
    else
    {
      v25 = *(_WORD *)(v16 + 8);
      v24 = 0;
    }
    v26 = 2LL * v25;
    if ( v15 )
    {
      qword_140C11958 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v15 + 12);
      v24 = *(_DWORD *)(a1 + 124);
    }
    if ( v16 )
    {
      if ( v24 )
      {
        v27 = *(_DWORD *)(v16 + 8);
        LOWORD(v33) = v27;
        if ( (v27 & *(_DWORD *)(a1 + 124)) != 0 )
          v33 = *(_DWORD *)(a1 + 136) ^ v27;
        v28 = v33;
      }
      else
      {
        v28 = *(_WORD *)(v16 + 8);
      }
      qword_140C11960 = v28;
      v24 = *(_DWORD *)(a1 + 124);
    }
    if ( v24 )
    {
      v29 = *(_DWORD *)(v16 + 8 * v26 + 8);
      LOWORD(v34) = v29;
      if ( (v29 & *(_DWORD *)(a1 + 124)) != 0 )
        v34 = *(_DWORD *)(a1 + 136) ^ v29;
      LOWORD(result) = v34;
    }
    else
    {
      LOWORD(result) = *(_WORD *)(v16 + 8 * v26 + 8);
    }
    result = (unsigned __int16)result;
    if ( qword_140C11958 == (unsigned __int16)result )
    {
      result = *(unsigned __int16 *)(a1 + 140);
      if ( qword_140C11960 != (result ^ *(unsigned __int16 *)(v16 + 8 * v26 + 12)) )
        dword_140C11918 = 7;
    }
    else
    {
      dword_140C11918 = 6;
    }
  }
  return result;
}
