/*
 * XREFs of MiRescanPageFileBitmapPortion @ 0x1402DF480
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x14020B47C (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPagefileBitmaps @ 0x140392140 (MiRescanPagefileBitmaps.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     RtlFindNextClearRunUlong @ 0x1402DF69C (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiRescanPageFileBitmapPortion(__int64 a1, __int64 a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned __int64 *v5; // r13
  int v7; // r15d
  unsigned __int64 v8; // rbx
  int v9; // r12d
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // r14d
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 *v16; // rsi
  unsigned __int64 v17; // rdx
  bool v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  bool v21; // r8
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  _DWORD v25[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-30h]
  int v27; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v27 = 0;
  v25[1] = 0;
  v7 = a3 & 0x1F;
  v8 = *a5;
  v9 = a3 - v7;
  v26 = *(_QWORD *)(a2 + 8) + 4 * ((unsigned __int64)(unsigned int)(a3 - v7) >> 5);
  v25[0] = v7 + a4;
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong((unsigned int)v25, v7, a3, -1, (__int64)&v27);
    v11 = result;
    if ( !(_DWORD)result )
      break;
    v7 = v27 + result;
    v12 = *(_DWORD *)(v8 + 52);
    v13 = v9 + v27;
    if ( v11 <= v12 )
    {
      if ( *(_DWORD *)(a1 + 140) > v11 )
        v11 = *(_DWORD *)(a1 + 140);
      *(_DWORD *)(a1 + 140) = v11;
    }
    else
    {
      if ( v12 )
      {
        v16 = (unsigned __int64 *)(a1 + 144);
        RtlRbRemoveNode((unsigned __int64 *)(a1 + 144), v8);
        RtlRbRemoveNode((unsigned __int64 *)(a1 + 160), v8 + 24);
        v23 = *(_DWORD *)(a1 + 140);
        if ( v23 <= *(_DWORD *)(v8 + 52) )
          v23 = *(_DWORD *)(v8 + 52);
        *(_DWORD *)(a1 + 140) = v23;
      }
      else
      {
        v14 = *(_QWORD *)v8;
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v15 = *(_QWORD **)(v8 + 8), *v15 != v8) )
          __fastfail(3u);
        *v15 = v14;
        v16 = (unsigned __int64 *)(a1 + 144);
        *(_QWORD *)(v14 + 8) = v15;
      }
      *(_DWORD *)(v8 + 52) = v11;
      *(_DWORD *)(v8 + 48) = v13;
      v17 = *v16;
      if ( (v16[1] & 1) != 0 && v17 )
        v17 ^= (unsigned __int64)v16;
      v18 = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          if ( __PAIR64__(v11, v13) < *(_QWORD *)(v17 + 48) )
          {
            v19 = *(_QWORD *)v17;
            if ( (v16[1] & 1) != 0 )
            {
              if ( !v19 )
                break;
              v19 ^= v17;
            }
            if ( !v19 )
              break;
          }
          else
          {
            v19 = *(_QWORD *)(v17 + 8);
            if ( (v16[1] & 1) != 0 )
            {
              if ( !v19 )
                goto LABEL_21;
              v19 ^= v17;
            }
            if ( !v19 )
            {
LABEL_21:
              v18 = 1;
              break;
            }
          }
          v17 = v19;
        }
      }
      RtlRbInsertNodeEx(v16, v17, v18, v8);
      v20 = *(_QWORD *)(a1 + 160);
      if ( (*(_BYTE *)(a1 + 168) & 1) != 0 && v20 )
        v20 ^= a1 + 160;
      v21 = 0;
      if ( v20 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v8 + 48) >= *(_DWORD *)(v20 + 24) )
          {
            v22 = *(_QWORD *)(v20 + 8);
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_36;
              v22 ^= v20;
            }
            if ( !v22 )
            {
LABEL_36:
              v21 = 1;
              break;
            }
          }
          else
          {
            v22 = *(_QWORD *)v20;
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_38;
              v22 ^= v20;
            }
            if ( !v22 )
            {
LABEL_38:
              v21 = 0;
              break;
            }
          }
          v20 = v22;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 160), v20, v21, v8 + 24);
      ++*(_DWORD *)(a1 + 128);
      v8 = *(_QWORD *)(a1 + 176);
      if ( v8 == a1 + 176 )
      {
        v24 = v16[1];
        if ( (v24 & 1) != 0 )
        {
          if ( v24 == 1 )
            v8 = 0LL;
          else
            v8 = v24 ^ ((unsigned __int64)v16 | 1);
        }
        else
        {
          v8 = v16[1];
        }
      }
    }
  }
  *v5 = v8;
  return result;
}
