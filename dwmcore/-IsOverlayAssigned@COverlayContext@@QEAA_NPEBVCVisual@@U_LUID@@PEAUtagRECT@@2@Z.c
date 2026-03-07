char __fastcall COverlayContext::IsOverlayAssigned(
        COverlayContext *this,
        const struct CVisual *a2,
        struct _LUID a3,
        struct tagRECT *a4,
        struct tagRECT *a5)
{
  __int64 v5; // rbx
  char v6; // di
  int v7; // r11d
  unsigned int i; // r10d
  __int64 v9; // rax
  __int64 v10; // rdx

  v5 = *((_QWORD *)this + 913);
  v6 = 0;
  v7 = -1;
  for ( i = 0; i < -1227133513 * (unsigned int)((*((_QWORD *)this + 914) - v5) >> 5); ++i )
  {
    v9 = 224LL * i;
    if ( *(const struct CVisual **)(v9 + v5 + 8) == a2 && *(_QWORD *)(*(_QWORD *)(v9 + v5 + 16) + 40LL) == a3 )
    {
      v7 = i;
      break;
    }
  }
  if ( v7 != -1 )
  {
    v6 = 1;
    v10 = 224LL * v7;
    if ( a4 )
      *a4 = *(struct tagRECT *)(v5 + v10 + 68);
    if ( a5 )
      *a5 = *(struct tagRECT *)(*((_QWORD *)this + 913) + v10 + 52);
  }
  return v6;
}
