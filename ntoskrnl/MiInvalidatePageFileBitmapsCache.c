/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x14020A3E4
 * Callers:
 *     MiFindFreePageFileSpace @ 0x140209F7C (MiFindFreePageFileSpace.c)
 *     MiAttemptPageFileReductionApc @ 0x140635960 (MiAttemptPageFileReductionApc.c)
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 * Callees:
 *     MiBitmapsCachedEntryLengthChanged @ 0x14020B884 (MiBitmapsCachedEntryLengthChanged.c)
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r14
  char v7; // bl
  int v11; // r8d
  unsigned int *v12; // rcx
  unsigned int v13; // edx
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // rsi
  int v20; // r11d
  int v21; // edx
  int v22; // edx
  unsigned int v23; // r9d
  _QWORD *v24; // r8
  unsigned int v25; // edx
  __int64 *v26; // r15
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v6 = a1 + 160;
  v7 = 0;
  if ( a4 )
  {
LABEL_2:
    v11 = *(_DWORD *)(a4 + 48);
    v12 = (unsigned int *)(a4 + 52);
    if ( v11 == a2 || (v20 = a2 + a3, v21 = v11 + *v12, a2 + a3 == v21) )
    {
      v13 = *v12 - a3;
      *v12 = v13;
      if ( v11 == a2 )
        *(_DWORD *)(a4 + 48) = v11 + a3;
      v14 = v13 == 0;
      v15 = a4;
      if ( !v14 )
        return MiBitmapsCachedEntryLengthChanged(a1, v15, 0LL);
      RtlRbRemoveNode(a1 + 144, a4);
      RtlRbRemoveNode(v6, a4 + 24);
      v19 = a1 + 176;
      result = *(_QWORD *)(v19 + 8);
      if ( *(_QWORD *)result == v19 )
      {
        *(_QWORD *)a4 = v19;
        *(_QWORD *)(a4 + 8) = result;
        *(_QWORD *)result = a4;
        *(_QWORD *)(v19 + 8) = a4;
        return result;
      }
    }
    else
    {
      v22 = v21 - a2;
      v23 = a2 - v11;
      v24 = (_QWORD *)(a1 + 176);
      v25 = v22 - a3;
      v26 = *(__int64 **)(a1 + 176);
      if ( v26 == (__int64 *)(a1 + 176) )
      {
        if ( v23 <= v25 )
        {
          *v12 = v25;
          *(_DWORD *)(a4 + 48) = v20;
          v27 = *(_DWORD *)(a1 + 140);
          if ( v27 <= v23 )
            v27 = v23;
        }
        else
        {
          *v12 = v23;
          v27 = *(_DWORD *)(a1 + 140);
          if ( v27 <= v25 )
            v27 = v25;
        }
        *(_DWORD *)(a1 + 140) = v27;
        v15 = a4;
        return MiBitmapsCachedEntryLengthChanged(a1, v15, 0LL);
      }
      if ( (_QWORD *)v26[1] == v24 )
      {
        v28 = *v26;
        if ( *(__int64 **)(*v26 + 8) == v26 )
        {
          *v24 = v28;
          *(_QWORD *)(v28 + 8) = v24;
          *((_DWORD *)v26 + 13) = v25;
          *((_DWORD *)v26 + 12) = v20;
          *v12 = v23;
          MiBitmapsCachedEntryLengthChanged(a1, a4, 0LL);
          v30 = a1 + 144;
          v31 = *(_QWORD *)(a1 + 144);
          if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v31 )
            v31 ^= v30;
          LOBYTE(v29) = 0;
          if ( v31 )
          {
            v29 = *((unsigned int *)v26 + 13);
            while ( 1 )
            {
              if ( (unsigned __int64)v26[6] < *(_QWORD *)(v31 + 48) )
              {
                v32 = *(_QWORD *)v31;
                if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
                {
                  if ( !v32 )
                    goto LABEL_53;
                  v32 ^= v31;
                }
                if ( !v32 )
                {
LABEL_53:
                  LOBYTE(v29) = 0;
                  break;
                }
              }
              else
              {
                v32 = *(_QWORD *)(v31 + 8);
                if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
                {
                  if ( !v32 )
                    goto LABEL_47;
                  v32 ^= v31;
                }
                if ( !v32 )
                {
LABEL_47:
                  LOBYTE(v29) = 1;
                  break;
                }
              }
              v31 = v32;
            }
          }
          RtlRbInsertNodeEx(v30, v31, v29, v26);
          v34 = *(_QWORD *)v6;
          if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && v34 )
            v34 ^= v6;
          if ( v34 )
          {
            v33 = *((unsigned int *)v26 + 12);
            while ( 1 )
            {
              if ( (unsigned int)v33 >= *(_DWORD *)(v34 + 24) )
              {
                v35 = *(_QWORD *)(v34 + 8);
                if ( (*(_BYTE *)(v6 + 8) & 1) != 0 )
                {
                  if ( !v35 )
                    goto LABEL_70;
                  v35 ^= v34;
                }
                if ( !v35 )
                {
LABEL_70:
                  v7 = 1;
                  break;
                }
              }
              else
              {
                v35 = *(_QWORD *)v34;
                if ( (*(_BYTE *)(v6 + 8) & 1) != 0 )
                {
                  if ( !v35 )
                    break;
                  v35 ^= v34;
                }
                if ( !v35 )
                  break;
              }
              v34 = v35;
            }
          }
          LOBYTE(v33) = v7;
          return RtlRbInsertNodeEx(v6, v34, v33, v26 + 3);
        }
      }
    }
    __fastfail(3u);
  }
  v16 = *(_QWORD *)v6;
  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 && v16 )
    v16 ^= v6;
  v17 = *(_BYTE *)(a1 + 168) & 1;
  if ( v16 )
  {
    do
    {
      v18 = *(_DWORD *)(v16 + 24);
      if ( a2 + a3 > v18 )
      {
        if ( a2 < *(_DWORD *)(v16 + 28) + v18 )
          break;
        result = *(_QWORD *)(v16 + 8);
      }
      else
      {
        result = *(_QWORD *)v16;
      }
      if ( v17 && result )
        v16 ^= result;
      else
        v16 = result;
    }
    while ( v16 );
    if ( v16 )
    {
      a4 = v16 - 24;
      goto LABEL_2;
    }
  }
  return result;
}
