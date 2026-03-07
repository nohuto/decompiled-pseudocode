void __fastcall VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP(VIDMM_RECYCLE_HEAP *this, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rdi

  v4 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = (_QWORD *)*v4;
      if ( *v4 )
        break;
      v6 = v4 + 1;
      v5 = (_QWORD *)v4[1];
      if ( v5 )
      {
LABEL_4:
        *v6 = 0LL;
        v4 = v5;
      }
      else
      {
        v7 = v4[2];
        VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v4, 0LL, a3);
        v8 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v8 )
          goto LABEL_8;
        v4 = (_QWORD *)v8;
      }
    }
    v6 = v4;
    goto LABEL_4;
  }
LABEL_8:
  *((_QWORD *)this + 6) = 0LL;
  v9 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = (_QWORD *)*v9;
      if ( *v9 )
        break;
      v11 = v9 + 1;
      v10 = (_QWORD *)v9[1];
      if ( v10 )
      {
LABEL_11:
        *v11 = 0LL;
        v9 = v10;
      }
      else
      {
        v12 = v9[2];
        VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v9, 0LL, a3);
        v13 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v13 )
          goto LABEL_15;
        v9 = (_QWORD *)v13;
      }
    }
    v11 = v9;
    goto LABEL_11;
  }
LABEL_15:
  *((_QWORD *)this + 7) = 0LL;
  v14 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = (_QWORD *)*v14;
      if ( *v14 )
        break;
      v16 = v14 + 1;
      v15 = (_QWORD *)v14[1];
      if ( v15 )
      {
LABEL_18:
        *v16 = 0LL;
        v14 = v15;
      }
      else
      {
        v17 = v14[2];
        VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v14, 0LL, a3);
        v18 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v18 )
          goto LABEL_22;
        v14 = (_QWORD *)v18;
      }
    }
    v16 = v14;
    goto LABEL_18;
  }
LABEL_22:
  *((_QWORD *)this + 8) = 0LL;
}
