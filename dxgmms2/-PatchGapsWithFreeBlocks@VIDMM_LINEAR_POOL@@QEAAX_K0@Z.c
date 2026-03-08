/*
 * XREFs of ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C0102A94
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00F9610 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C0101AEC (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C0102DC4 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 * Callees:
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C00AFF88 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00B08E4 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  char *v4; // rbp
  char *v5; // r12
  struct _VIDMM_POOL_BLOCK *v6; // rdi
  unsigned __int64 v7; // r8
  struct _VIDMM_POOL_BLOCK *v9; // r14
  char *v10; // r15
  char v11; // cl
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  char **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  struct _VIDMM_POOL_BLOCK *Block; // rdx
  char **v24; // rax
  char **v25; // rcx
  struct _VIDMM_POOL_BLOCK *v26; // rax
  struct _VIDMM_POOL_BLOCK **v27; // rdx
  char *v28; // rdi
  __int64 v29; // rcx
  struct _VIDMM_POOL_BLOCK **v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdi
  struct _VIDMM_POOL_BLOCK *v33; // rax
  char *v34; // rcx
  char **v35; // rdx
  VIDMM_LINEAR_POOL *v36; // rax
  VIDMM_LINEAR_POOL **v37; // rdx
  __int64 v38; // [rsp+60h] [rbp+8h]

  v3 = 0LL;
  v4 = (char *)this + 72;
  v5 = (char *)*((_QWORD *)this + 9);
  v6 = 0LL;
  v7 = a2;
  while ( v5 != v4 )
  {
    v9 = (struct _VIDMM_POOL_BLOCK *)(v5 - 40);
    v10 = v5;
    v11 = v5[16];
    v12 = *((_QWORD *)v5 - 5);
    v5 = *(char **)v5;
    v13 = *((_QWORD *)v9 + 1);
    if ( ((v11 - 2) & 0xFD) == 0 )
      v6 = v9;
    v14 = v12 + v13;
    v38 = v12 + v13;
    if ( v12 + v13 <= v7 )
      goto LABEL_34;
    if ( v3 != v12 )
    {
      if ( v11 == 2 )
      {
        v15 = v13 + v12 - v3;
        if ( v15 )
        {
          *(_QWORD *)v9 = v3;
          *((_QWORD *)v9 + 1) = v15;
          goto LABEL_33;
        }
        v16 = (_QWORD *)((char *)v9 + 24);
        v17 = *((_QWORD *)v9 + 3);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v17 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v9 + 24) )
          goto LABEL_41;
        v18 = (_QWORD *)*((_QWORD *)v9 + 4);
        if ( (_QWORD *)*v18 != v16 )
          goto LABEL_41;
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *v16 = 0LL;
        *((_QWORD *)v9 + 4) = 0LL;
        v19 = *(_QWORD *)v10;
        if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 )
          goto LABEL_41;
        v20 = (char **)*((_QWORD *)v10 + 1);
        if ( *v20 != v10 )
          goto LABEL_41;
        *v20 = (char *)v19;
        *(_QWORD *)(v19 + 8) = v20;
        *(_QWORD *)v10 = 0LL;
        *((_QWORD *)v9 + 6) = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, v9);
        v6 = 0LL;
        goto LABEL_31;
      }
      if ( v6 )
      {
        v21 = *((_QWORD *)v6 + 1);
        if ( v21 + *(_QWORD *)v6 == v3 && *((_BYTE *)v6 + 56) == 2 )
        {
          *((_QWORD *)v6 + 1) = v12 + v21 - v3;
          goto LABEL_32;
        }
        v14 = v12 + v13;
      }
      v22 = v12 - v3;
      if ( !v22 )
        goto LABEL_33;
      Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
      *((_QWORD *)Block + 2) = 0LL;
      *((_BYTE *)Block + 56) = 2;
      *(_QWORD *)Block = v3;
      *((_QWORD *)Block + 1) = v22;
      v24 = (char **)((char *)Block + 40);
      v25 = (char **)*((_QWORD *)v10 + 1);
      if ( *v25 != v10 )
        goto LABEL_41;
      *v24 = v10;
      *((_QWORD *)Block + 6) = v25;
      *v25 = (char *)v24;
      *((_QWORD *)v10 + 1) = v24;
      v26 = (struct _VIDMM_POOL_BLOCK *)((char *)Block + 24);
      if ( v6 == v9 )
      {
        v27 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v9 + 4);
        if ( *v27 != (struct _VIDMM_POOL_BLOCK *)((char *)v9 + 24) )
          goto LABEL_41;
        *(_QWORD *)v26 = (char *)v9 + 24;
        *((_QWORD *)v26 + 1) = v27;
        *v27 = v26;
        *((_QWORD *)v9 + 4) = v26;
      }
      else
      {
        if ( v6 )
        {
          v28 = (char *)v6 + 24;
          v29 = *(_QWORD *)v28;
          if ( *(char **)(*(_QWORD *)v28 + 8LL) != v28 )
            goto LABEL_41;
          *(_QWORD *)v26 = v29;
          *((_QWORD *)Block + 4) = v28;
          *(_QWORD *)(v29 + 8) = v26;
          *(_QWORD *)v28 = v26;
        }
        else
        {
          v30 = (struct _VIDMM_POOL_BLOCK **)((char *)this + 40);
          v31 = *((_QWORD *)this + 5);
          if ( *(VIDMM_LINEAR_POOL **)(v31 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
            goto LABEL_41;
          *(_QWORD *)v26 = v31;
          *((_QWORD *)Block + 4) = v30;
          *(_QWORD *)(v31 + 8) = v26;
          *v30 = v26;
        }
        v6 = Block;
      }
LABEL_31:
      v7 = a2;
LABEL_32:
      v14 = v38;
    }
LABEL_33:
    v3 = v14;
    if ( *(_QWORD *)v9 >= a3 )
      break;
LABEL_34:
    v3 = v14;
  }
  v32 = *((_QWORD *)this + 1);
  if ( a3 == v32 && v3 != v32 )
  {
    v33 = VIDMM_LINEAR_POOL::AllocateBlock(this);
    *((_QWORD *)v33 + 2) = 0LL;
    v34 = (char *)v33 + 40;
    *((_BYTE *)v33 + 56) = 2;
    *(_QWORD *)v33 = v3;
    *((_QWORD *)v33 + 1) = v32 - v3;
    v35 = (char **)*((_QWORD *)v4 + 1);
    if ( *v35 != v4
      || (*(_QWORD *)v34 = v4,
          v36 = (struct _VIDMM_POOL_BLOCK *)((char *)v33 + 24),
          *((_QWORD *)v34 + 1) = v35,
          *v35 = v34,
          *((_QWORD *)v4 + 1) = v34,
          v37 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 6),
          *v37 != (VIDMM_LINEAR_POOL *)((char *)this + 40)) )
    {
LABEL_41:
      __fastfail(3u);
    }
    *(_QWORD *)v36 = (char *)this + 40;
    *((_QWORD *)v36 + 1) = v37;
    *v37 = v36;
    *((_QWORD *)this + 6) = v36;
  }
}
