/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C0078FCC
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0078BC4 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z @ 0x1C00855E0 (-Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP(VIDMM_RECYCLE_HEAP *this, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rdi

  v4 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v4 )
        {
          v5 = v4;
          v4 = (_QWORD *)*v4;
          *v5 = 0LL;
        }
        if ( !v4[1] )
          break;
        v6 = v4;
        v4 = (_QWORD *)v4[1];
        v6[1] = 0LL;
      }
      v7 = v4[2];
      VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v4, 0LL, a3);
      v8 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 )
        break;
      v4 = (_QWORD *)v8;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v9 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v9 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v9 )
        {
          v10 = v9;
          v9 = (_QWORD *)*v9;
          *v10 = 0LL;
        }
        if ( !v9[1] )
          break;
        v11 = v9;
        v9 = (_QWORD *)v9[1];
        v11[1] = 0LL;
      }
      v12 = v9[2];
      VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v9, 0LL, a3);
      v13 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v13 )
        break;
      v9 = (_QWORD *)v13;
    }
  }
  *((_QWORD *)this + 7) = 0LL;
  v14 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v14 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v14 )
        {
          v15 = v14;
          v14 = (_QWORD *)*v14;
          *v15 = 0LL;
        }
        if ( !v14[1] )
          break;
        v16 = v14;
        v14 = (_QWORD *)v14[1];
        v16[1] = 0LL;
      }
      v17 = v14[2];
      VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v14, 0LL, a3);
      v18 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v18 )
        break;
      v14 = (_QWORD *)v18;
    }
  }
  *((_QWORD *)this + 8) = 0LL;
}
