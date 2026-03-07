void __fastcall XCLIPOBJ::vEnumPathStart(
        XCLIPOBJ *this,
        struct _PATHOBJ *a2,
        struct SURFACE *a3,
        struct _LINEATTRS *a4)
{
  FLOAT_LONG *p_elStyleState; // r8
  _DWORD *v8; // rax
  __int64 v9; // rdx
  PFLOAT_LONG pstyle; // rcx
  union _FLOAT_LONG *v11; // rdx
  __int64 v12; // rax

  p_elStyleState = &a4->elStyleState;
  *((_QWORD *)this + 18) = *(_QWORD *)&a2[1] + 96LL;
  a2->fl &= ~8u;
  *(_QWORD *)(*(_QWORD *)&a2[1] + 72LL) = *(_QWORD *)(*(_QWORD *)&a2[1] + 32LL);
  a2[9] = (struct _PATHOBJ)this;
  *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) = 0x10000;
  **((_DWORD **)this + 18) = 0;
  *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 18) + 184LL) = &a4->elStyleState;
  *(_DWORD *)(*((_QWORD *)this + 18) + 192LL) = 1;
  *(_DWORD *)(*((_QWORD *)this + 18) + 196LL) = 1;
  *(_DWORD *)(*((_QWORD *)this + 18) + 200LL) = 1;
  if ( (a4->fl & 2) != 0 )
  {
    *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) = 2;
    *(_DWORD *)(*((_QWORD *)this + 18) + 176LL) = HIWORD(p_elStyleState->l) & 1;
  }
  else if ( a4->pstyle )
  {
    v8 = (_DWORD *)*((_QWORD *)a3 + 6);
    v9 = *((_QWORD *)this + 18);
    if ( v8 )
    {
      *(_DWORD *)(v9 + 192) = v8[545];
      *(_DWORD *)(*((_QWORD *)this + 18) + 196LL) = v8[546];
      *(_DWORD *)(*((_QWORD *)this + 18) + 200LL) = v8[547];
    }
    else
    {
      *(_DWORD *)(v9 + 200) = 3;
    }
    pstyle = a4->pstyle;
    v11 = &pstyle[a4->cstyle];
    if ( v11 > pstyle )
    {
      do
      {
        --v11;
        *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) += v11->l;
      }
      while ( v11 > a4->pstyle );
    }
    *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) *= 2;
    *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) *= *(_DWORD *)(*((_QWORD *)this + 18) + 200LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 176LL) = LOWORD(p_elStyleState->e)
                                                + *(_DWORD *)(*((_QWORD *)this + 18) + 200LL)
                                                * HIWORD(p_elStyleState->l);
    *(_DWORD *)(*((_QWORD *)this + 18) + 176LL) %= *(_DWORD *)(*((_QWORD *)this + 18) + 180LL);
    v12 = *((_QWORD *)this + 18);
    if ( *(int *)(v12 + 176) < 0 )
      *(_DWORD *)(v12 + 176) = 0;
  }
  XCLIPOBJ::bGetLine(this, (struct EPATHOBJ *)a2, (const unsigned int *)p_elStyleState);
}
