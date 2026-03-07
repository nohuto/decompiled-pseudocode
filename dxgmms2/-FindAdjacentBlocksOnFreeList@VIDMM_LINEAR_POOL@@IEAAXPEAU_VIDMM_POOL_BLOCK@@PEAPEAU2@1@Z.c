void __fastcall VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        struct _VIDMM_POOL_BLOCK **a3,
        struct _VIDMM_POOL_BLOCK **a4)
{
  VIDMM_LINEAR_POOL *v4; // rax
  VIDMM_LINEAR_POOL *v6; // rdi
  VIDMM_LINEAR_POOL *v7; // r8
  struct _VIDMM_POOL_BLOCK *v8; // rdx
  char v9; // bl
  _QWORD *v10; // r11
  __int64 v11; // rdx
  struct _VIDMM_POOL_BLOCK *v12; // r8
  bool v13; // zf
  struct _VIDMM_POOL_BLOCK *v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  struct _VIDMM_POOL_BLOCK *v17; // r8
  char v18; // dl
  VIDMM_LINEAR_POOL *v19; // rdx
  _QWORD *v20; // rcx

  v4 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 5);
  v6 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 6);
  v7 = (VIDMM_LINEAR_POOL *)((char *)this + 72);
  if ( v4 != (VIDMM_LINEAR_POOL *)((char *)this + 72) )
  {
    while ( v6 != v7 )
    {
      v8 = (VIDMM_LINEAR_POOL *)((char *)v4 - 40);
      v4 = *(VIDMM_LINEAR_POOL **)v4;
      v9 = *((_BYTE *)v8 + 56);
      v10 = (_QWORD *)((char *)v6 - 40);
      v6 = (VIDMM_LINEAR_POOL *)*((_QWORD *)v6 + 1);
      if ( v9 != 3 && (unsigned __int8)(v9 - 5) > 2u )
      {
        *a4 = v8;
        v11 = *((_QWORD *)v8 + 4);
        v12 = 0LL;
        v13 = v11 == (_QWORD)this + 40;
        v14 = (struct _VIDMM_POOL_BLOCK *)(v11 - 24);
        goto LABEL_6;
      }
      v18 = *((_BYTE *)v10 + 56);
      if ( v18 != 3 && (unsigned __int8)(v18 - 5) > 2u )
      {
        v19 = (VIDMM_LINEAR_POOL *)v10[3];
        v17 = 0LL;
        *a3 = (struct _VIDMM_POOL_BLOCK *)v10;
        if ( v19 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
          v17 = (VIDMM_LINEAR_POOL *)((char *)v19 - 24);
        goto LABEL_12;
      }
      if ( v4 == v7 )
      {
        v15 = (_QWORD *)((char *)this + 40);
        goto LABEL_20;
      }
    }
  }
  v15 = (_QWORD *)((char *)this + 40);
  if ( v4 == v7 )
  {
LABEL_20:
    v20 = (_QWORD *)*((_QWORD *)this + 6);
    v12 = 0LL;
    *a4 = 0LL;
    v13 = v20 == v15;
    v14 = (struct _VIDMM_POOL_BLOCK *)(v20 - 3);
LABEL_6:
    if ( !v13 )
      v12 = v14;
    *a3 = v12;
  }
  else
  {
    v16 = (_QWORD *)*v15;
    v17 = 0LL;
    *a3 = 0LL;
    if ( v16 == v15 )
LABEL_12:
      *a4 = v17;
    else
      *a4 = (struct _VIDMM_POOL_BLOCK *)(v16 - 3);
  }
}
