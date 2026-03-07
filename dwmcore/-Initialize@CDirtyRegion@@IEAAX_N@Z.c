void __fastcall CDirtyRegion::Initialize(CDirtyRegion *this, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD **v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  char *v11; // rax
  _QWORD *v12; // rax

  v2 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 1104) = 1065353216;
  *(_WORD *)((char *)this + 4421) = 0;
  *((_DWORD *)this + 705) = 0;
  *((_BYTE *)this + 4423) = 0;
  *(_WORD *)((char *)this + 4425) = 0;
  *((_BYTE *)this + 4420) = a2;
  *((_OWORD *)this + 275) = *(_OWORD *)(v2 + 4592);
  if ( !a2 )
  {
    if ( *((_BYTE *)this + 4424) )
      *((_BYTE *)this + 4424) = 0;
    memset_0((char *)this + 1568, 0, 0x80uLL);
    memset_0((char *)this + 2080, 0, 0x120uLL);
    v4 = 8LL;
    if ( !*((_BYTE *)this + 4424) )
    {
      v5 = (_QWORD *)((char *)this + 1824);
      v6 = 8LL;
      do
      {
        v5[1] = v5;
        *v5 = v5;
        v5 += 2;
        --v6;
      }
      while ( v6 );
      v7 = (_QWORD **)((char *)this + 2824);
      v8 = *((_QWORD *)this + 354);
      if ( *(CDirtyRegion **)v8 != (CDirtyRegion *)((char *)this + 2824) || (v9 = *(_QWORD **)(v8 + 8), *v9 != v8) )
LABEL_18:
        __fastfail(3u);
      *((_QWORD *)this + 354) = v9;
      *v9 = v7;
      while ( 1 )
      {
        v10 = *v7;
        if ( *v7 == v7 )
          break;
        if ( (_QWORD **)v10[1] != v7 )
          goto LABEL_18;
        v12 = (_QWORD *)*v10;
        if ( *(_QWORD **)(*v10 + 8LL) != v10 )
          goto LABEL_18;
        *v7 = v12;
        v12[1] = v7;
        operator delete(v10, 0x610uLL);
      }
      *((_QWORD *)this + 355) = (char *)this + 2824;
      *((_QWORD *)this + 356) = (char *)this + 2824;
      *((_QWORD *)this + 354) = (char *)this + 2840;
      *((_QWORD *)this + 353) = (char *)this + 2840;
      *((_DWORD *)this + 1098) = 0;
    }
    v11 = (char *)this + 1704;
    do
    {
      *(_QWORD *)v11 = 0LL;
      *((_QWORD *)v11 - 1) = 0LL;
      v11[260] = 1;
      *(_QWORD *)(v11 + 252) = 0LL;
      *((_DWORD *)v11 + 62) = 0;
      *((_QWORD *)v11 - 16) = 0LL;
      *((_QWORD *)v11 - 17) = 0LL;
      v11 += 16;
      --v4;
    }
    while ( v4 );
  }
}
