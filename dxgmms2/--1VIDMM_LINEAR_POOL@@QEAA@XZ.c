void __fastcall VIDMM_LINEAR_POOL::~VIDMM_LINEAR_POOL(VIDMM_LINEAR_POOL *this)
{
  char *v1; // rsi
  char *v3; // rbx
  struct _VIDMM_POOL_BLOCK *v4; // rdx
  VIDMM_LINEAR_POOL *v5; // rbx
  struct _VIDMM_POOL_BLOCK *v6; // rdx
  _QWORD *v7; // rcx
  VIDMM_LINEAR_POOL *v8; // rax
  __int64 v9; // rdx
  struct _VIDMM_POOL_BLOCK *v10; // rdx
  VIDMM_LINEAR_POOL **v11; // rax
  VIDMM_LINEAR_POOL **v12; // r8
  VIDMM_LINEAR_POOL *v13; // rcx
  _QWORD **v14; // r14
  _QWORD *v15; // rsi
  _QWORD *v16; // rax
  char *v17; // rcx
  char *v18; // rbx

  v1 = (char *)this + 120;
  v3 = (char *)*((_QWORD *)this + 15);
  while ( v3 != v1 )
  {
    v4 = (struct _VIDMM_POOL_BLOCK *)(v3 - 24);
    v3 = *(char **)v3;
    VIDMM_LINEAR_POOL::Free(this, v4);
  }
  v5 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 17);
  while ( v5 != (VIDMM_LINEAR_POOL *)((char *)this + 136) )
  {
    v6 = (VIDMM_LINEAR_POOL *)((char *)v5 - 24);
    v5 = *(VIDMM_LINEAR_POOL **)v5;
    VIDMM_LINEAR_POOL::Free(this, v6);
  }
  v7 = (_QWORD *)((char *)this + 40);
  v8 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 5);
  if ( v8 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    if ( *((_QWORD **)v8 + 1) != v7
      || (v9 = *(_QWORD *)v8, *(VIDMM_LINEAR_POOL **)(*(_QWORD *)v8 + 8LL) != v8)
      || (*v7 = v9,
          *(_QWORD *)(v9 + 8) = v7,
          v10 = (VIDMM_LINEAR_POOL *)((char *)v8 - 24),
          v11 = (VIDMM_LINEAR_POOL **)((char *)this + 72),
          v12 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 9),
          v12[1] != (VIDMM_LINEAR_POOL *)((char *)this + 72))
      || (v13 = *v12, *((VIDMM_LINEAR_POOL ***)*v12 + 1) != v12) )
    {
LABEL_20:
      __fastfail(3u);
    }
    *v11 = v13;
    *((_QWORD *)v13 + 1) = v11;
    VIDMM_LINEAR_POOL::FreeBlock(this, v10);
  }
  v14 = (_QWORD **)((char *)this + 104);
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 == v14 )
      break;
    if ( (_QWORD **)v15[1] != v14 )
      goto LABEL_20;
    v16 = (_QWORD *)*v15;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 )
      goto LABEL_20;
    *v14 = v16;
    v16[1] = v14;
    v17 = (char *)v15[2];
    if ( v17 )
    {
      v18 = v17 - 8;
      `vector destructor iterator'(
        v17,
        64LL,
        *((_QWORD *)v17 - 1),
        (void (__fastcall *)(char *))VIDSCH_VSYNC_SMOOTHER::OnReset);
      operator delete(v18);
    }
    operator delete(v15);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
}
