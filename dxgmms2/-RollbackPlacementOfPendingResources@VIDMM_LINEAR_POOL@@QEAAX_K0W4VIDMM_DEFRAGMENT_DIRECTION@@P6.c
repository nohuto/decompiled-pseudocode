void __fastcall VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4)
{
  _QWORD *v4; // r12
  _QWORD *v8; // rdi
  unsigned __int64 *v9; // rbx
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // r15
  struct _VIDMM_GLOBAL_ALLOC *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 *v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // rcx
  unsigned __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp+10h]

  v24 = a2;
  v4 = a1 + 9;
  if ( a4 == 1 )
    v8 = (_QWORD *)*v4;
  else
    v8 = (_QWORD *)a1[10];
  v9 = 0LL;
  while ( v8 != v4 )
  {
    v10 = v8 - 5;
    if ( a4 == 1 )
      v8 = (_QWORD *)*v8;
    else
      v8 = (_QWORD *)v8[1];
    v11 = *v10 + v10[1];
    if ( v11 > a2 )
    {
      if ( *v10 < a3 )
      {
        if ( (unsigned __int8)(*((_BYTE *)v10 + 56) - 3) <= 1u )
        {
          v12 = (struct _VIDMM_GLOBAL_ALLOC *)v10[2];
          v23 = 0LL;
          if ( VIDMM_SEGMENT::RepairPendingResourceCB(v12, &v23) )
          {
            v13 = v23;
            *v10 = v23;
            if ( v9 )
            {
              if ( *((_BYTE *)v9 + 56) == 2 )
              {
                v14 = *v9;
                if ( a4 == 1 )
                {
                  v15 = v13 - v14;
                }
                else
                {
                  v16 = v9[1] - v11;
                  *v9 = v11;
                  v15 = v14 + v16;
                }
                v9[1] = v15;
                if ( !v15 )
                {
                  v17 = v9 + 5;
                  v18 = v9[5];
                  if ( *(unsigned __int64 **)(v18 + 8) != v9 + 5 )
                    goto LABEL_31;
                  v19 = (unsigned __int64 *)v9[6];
                  if ( (_QWORD *)*v19 != v17
                    || (*v19 = v18,
                        *(_QWORD *)(v18 + 8) = v19,
                        *v17 = 0LL,
                        v20 = v9 + 3,
                        v9[6] = 0LL,
                        v21 = v9[3],
                        *(unsigned __int64 **)(v21 + 8) != v9 + 3)
                    || (v22 = (unsigned __int64 *)v9[4], (_QWORD *)*v22 != v20) )
                  {
LABEL_31:
                    __fastfail(3u);
                  }
                  *v22 = v21;
                  *(_QWORD *)(v21 + 8) = v22;
                  *v20 = 0LL;
                  v9[4] = 0LL;
                  VIDMM_LINEAR_POOL::FreeBlock((VIDMM_LINEAR_POOL *)a1, (struct _VIDMM_POOL_BLOCK *)v9);
                }
              }
            }
          }
          a2 = v24;
        }
        v9 = v10;
      }
      else if ( a4 == 1 )
      {
        break;
      }
    }
    else if ( a4 != 1 )
    {
      break;
    }
  }
  VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks((VIDMM_LINEAR_POOL *)a1, a2, a3);
}
