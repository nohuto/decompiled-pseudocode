char __fastcall CRegionShape::IsRectangles(CRegionShape *this, unsigned int *a2)
{
  __int64 v2; // r8
  _DWORD *v4; // r10
  __int64 v5; // rdx

  LODWORD(v2) = 0;
  if ( a2 )
  {
    v4 = (_DWORD *)*((_QWORD *)this + 2);
    if ( *v4 )
    {
      v5 = (__int64)&v4[2 * *v4 + 1];
      v2 = (v5 + *(int *)(v5 + 4) - (__int64)(int)v4[4] - (__int64)(v4 + 3)) >> 3;
    }
    *a2 = v2;
  }
  return 1;
}
