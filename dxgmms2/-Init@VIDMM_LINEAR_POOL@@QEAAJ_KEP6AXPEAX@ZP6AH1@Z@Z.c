__int64 __fastcall VIDMM_LINEAR_POOL::Init(
        VIDMM_LINEAR_POOL *this,
        __int64 a2,
        char a3,
        void (*a4)(void *),
        int (*a5)(void *))
{
  unsigned int v7; // esi
  struct _VIDMM_POOL_BLOCK *Block; // rax
  struct _VIDMM_POOL_BLOCK *v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax

  *((_QWORD *)this + 3) = a4;
  *(_BYTE *)this = a3;
  *((_QWORD *)this + 1) = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  *((_QWORD *)this + 4) = a5;
  v7 = -1073741801;
  Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
  v9 = Block;
  if ( Block )
  {
    memset(Block, 0, 0x40uLL);
    v10 = (_QWORD *)((char *)this + 40);
    *((_BYTE *)v9 + 56) = 2;
    *((_QWORD *)v9 + 1) = a2;
    v11 = (_QWORD *)((char *)v9 + 24);
    v12 = *((_QWORD *)this + 5);
    if ( *(VIDMM_LINEAR_POOL **)(v12 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40)
      || (*((_QWORD *)v9 + 4) = v10,
          *v11 = v12,
          *(_QWORD *)(v12 + 8) = v11,
          *v10 = v11,
          v13 = (_QWORD *)((char *)this + 72),
          v14 = *((_QWORD *)this + 9),
          v15 = (_QWORD *)((char *)v9 + 40),
          *(VIDMM_LINEAR_POOL **)(v14 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 72)) )
    {
      __fastfail(3u);
    }
    *v15 = v14;
    v7 = 0;
    *((_QWORD *)v9 + 6) = v13;
    *(_QWORD *)(v14 + 8) = v15;
    *v13 = v15;
  }
  return v7;
}
