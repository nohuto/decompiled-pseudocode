/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x140333BF0
 * Callers:
 *     MiGatherPagefilePages @ 0x1403318B4 (MiGatherPagefilePages.c)
 *     MiFindFreePageFileSpace @ 0x140333724 (MiFindFreePageFileSpace.c)
 *     MiAttemptPageFileReductionApc @ 0x140542A10 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x140331318 (MiBitmapsCachedEntryLengthChanged.c)
 */

void __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  BOOLEAN v5; // bl
  int v8; // r8d
  int v9; // ecx
  unsigned __int64 *v10; // rdx
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // r8d
  unsigned int v16; // ecx
  __int64 v17; // rax
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  _QWORD *v23; // r9
  __int64 *v24; // r14
  __int64 v25; // r8
  _RTL_RB_TREE *v26; // rcx
  unsigned __int64 v27; // rdx
  BOOLEAN v28; // r8
  unsigned __int64 v29; // rax
  _RTL_RB_TREE *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // eax

  v5 = 0;
  if ( a4 )
  {
LABEL_2:
    v8 = *(_DWORD *)(a4 + 48);
    if ( v8 == a2 || (v18 = a2 + a3, v19 = v8 + *(_DWORD *)(a4 + 52), a2 + a3 == v19) )
    {
      v9 = *(_DWORD *)(a4 + 52) - a3;
      *(_DWORD *)(a4 + 52) = v9;
      if ( v8 == a2 )
        *(_DWORD *)(a4 + 48) = v8 + a3;
      v10 = (unsigned __int64 *)a4;
      if ( !v9 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)a4);
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)(a4 + 24));
        v11 = a1 + 176;
        v12 = *(_QWORD **)(v11 + 8);
        if ( *v12 == v11 )
        {
          *(_QWORD *)a4 = v11;
          *(_QWORD *)(a4 + 8) = v12;
          *v12 = a4;
          *(_QWORD *)(v11 + 8) = a4;
          return;
        }
        goto LABEL_72;
      }
    }
    else
    {
      v20 = v19 - a2;
      v21 = a2 - v8;
      v22 = v20 - a3;
      v23 = (_QWORD *)(a1 + 176);
      v24 = *(__int64 **)(a1 + 176);
      if ( v24 != (__int64 *)(a1 + 176) )
      {
        if ( (_QWORD *)v24[1] == v23 )
        {
          v25 = *v24;
          if ( *(__int64 **)(*v24 + 8) == v24 )
          {
            *v23 = v25;
            *(_QWORD *)(v25 + 8) = v23;
            *((_DWORD *)v24 + 13) = v22;
            *((_DWORD *)v24 + 12) = v18;
            *(_DWORD *)(a4 + 52) = v21;
            MiBitmapsCachedEntryLengthChanged(a1, (unsigned __int64 *)a4, 0);
            v26 = (_RTL_RB_TREE *)(a1 + 144);
            v27 = *(_QWORD *)(a1 + 144);
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( v27 )
                v27 ^= (unsigned __int64)v26;
              else
                v27 = 0LL;
            }
            v28 = 0;
            if ( v27 )
            {
              while ( 1 )
              {
                if ( (unsigned __int64)v24[6] < *(_QWORD *)(v27 + 48) )
                {
                  v29 = *(_QWORD *)v27;
                  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
                  {
                    if ( !v29 )
                      goto LABEL_61;
                    v29 ^= v27;
                  }
                  if ( !v29 )
                  {
LABEL_61:
                    v28 = 0;
                    break;
                  }
                }
                else
                {
                  v29 = *(_QWORD *)(v27 + 8);
                  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
                  {
                    if ( !v29 )
                      goto LABEL_60;
                    v29 ^= v27;
                  }
                  if ( !v29 )
                  {
LABEL_60:
                    v28 = 1;
                    break;
                  }
                }
                v27 = v29;
              }
            }
            RtlRbInsertNodeEx(v26, (PRTL_BALANCED_NODE)v27, v28, (PRTL_BALANCED_NODE)v24);
            v30 = (_RTL_RB_TREE *)(a1 + 160);
            v31 = *(_QWORD *)(a1 + 160);
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( v31 )
                v31 ^= (unsigned __int64)v30;
              else
                v31 = 0LL;
            }
            if ( v31 )
            {
              while ( 1 )
              {
                if ( *((_DWORD *)v24 + 12) < *(_DWORD *)(v31 + 24) )
                {
                  v32 = *(_QWORD *)v31;
                  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
                  {
                    if ( !v32 )
                      break;
                    v32 ^= v31;
                  }
                  if ( !v32 )
                    break;
                }
                else
                {
                  v32 = *(_QWORD *)(v31 + 8);
                  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
                  {
                    if ( !v32 )
                      goto LABEL_56;
                    v32 ^= v31;
                  }
                  if ( !v32 )
                  {
LABEL_56:
                    v5 = 1;
                    break;
                  }
                }
                v31 = v32;
              }
            }
            RtlRbInsertNodeEx(v30, (PRTL_BALANCED_NODE)v31, v5, (PRTL_BALANCED_NODE)v24 + 1);
            return;
          }
        }
LABEL_72:
        __fastfail(3u);
      }
      if ( v21 <= v22 )
      {
        *(_DWORD *)(a4 + 48) = v18;
        *(_DWORD *)(a4 + 52) = v22;
        v33 = *(_DWORD *)(a1 + 140);
        if ( v33 <= v21 )
          v33 = v21;
      }
      else
      {
        *(_DWORD *)(a4 + 52) = v21;
        v33 = *(_DWORD *)(a1 + 140);
        if ( v33 <= v22 )
          v33 = v22;
      }
      *(_DWORD *)(a1 + 140) = v33;
      v10 = (unsigned __int64 *)a4;
    }
    MiBitmapsCachedEntryLengthChanged(a1, v10, 0);
    return;
  }
  v13 = a1 + 160;
  v14 = *(_QWORD *)v13;
  if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
  {
    if ( v14 )
      v14 ^= v13;
    else
      v14 = 0LL;
  }
  v15 = *(_BYTE *)(v13 + 8) & 1;
  while ( v14 )
  {
    v16 = *(_DWORD *)(v14 + 24);
    if ( a2 + a3 > v16 )
    {
      if ( a2 < *(_DWORD *)(v14 + 28) + v16 )
      {
        a4 = v14 - 24;
        goto LABEL_2;
      }
      v17 = *(_QWORD *)(v14 + 8);
    }
    else
    {
      v17 = *(_QWORD *)v14;
    }
    if ( v15 && v17 )
      v14 ^= v17;
    else
      v14 = v17;
  }
}
