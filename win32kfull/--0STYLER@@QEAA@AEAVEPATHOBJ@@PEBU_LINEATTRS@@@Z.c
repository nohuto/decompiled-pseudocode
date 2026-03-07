STYLER *__fastcall STYLER::STYLER(STYLER *this, struct EPATHOBJ *a2, const struct _LINEATTRS *a3)
{
  int v3; // ebp
  int v6; // eax
  ULONG *p_cstyle; // r8
  unsigned int v8; // edx
  PFLOAT_LONG pstyle; // rcx
  __int64 v10; // rax

  *(_QWORD *)this = a2;
  v3 = 1;
  *(_DWORD *)a2 &= ~8u;
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 72LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
  *((_DWORD *)this + 10) |= 1u;
  if ( (unsigned int)READER::bNextFigure(this) )
  {
    READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
    *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
    v6 = 1;
  }
  else
  {
    v6 = 4;
  }
  *((_DWORD *)this + 126) = v6;
  EXFORMOBJ::EXFORMOBJ((STYLER *)((char *)this + 808), (STYLER *)((char *)this + 768), 0);
  p_cstyle = &a3->cstyle;
  if ( !a3->pstyle || !*p_cstyle )
    v3 = 0;
  v8 = *((_DWORD *)this + 10) | 2;
  if ( !v3 )
    v8 = *((_DWORD *)this + 10) & 0xFFFFFFFD;
  *((_DWORD *)this + 10) = v8;
  if ( (v8 & 2) != 0 )
  {
    pstyle = a3->pstyle;
    *((_QWORD *)this + 90) = pstyle;
    *((_QWORD *)this + 91) = pstyle;
    v10 = *p_cstyle;
    *((_DWORD *)this + 10) = v8 & 0xFFFFFFFB;
    *((_QWORD *)this + 92) = &pstyle[v10];
  }
  return this;
}
