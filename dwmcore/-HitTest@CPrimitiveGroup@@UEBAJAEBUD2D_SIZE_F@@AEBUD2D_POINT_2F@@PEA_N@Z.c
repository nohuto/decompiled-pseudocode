__int64 __fastcall CPrimitiveGroup::HitTest(
        CPrimitiveGroup *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  float y; // xmm1_4
  __int64 v8; // rcx
  __int64 v10; // rcx

  *a4 = 0;
  if ( *((_QWORD *)this - 26) )
  {
    if ( a3->x >= *((float *)this - 143) && *((float *)this - 141) >= a3->x )
    {
      y = a3->y;
      if ( y >= *((float *)this - 142)
        && *((float *)this - 140) >= y
        && (int)CPrimitiveGroup::EnsureHitTestRegions((CPrimitiveGroup *)((char *)this - 680)) >= 0 )
      {
        v8 = *((_QWORD *)this - 74);
        if ( v8 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 56LL))(v8, *a3, 0LL);
        v10 = *((_QWORD *)this - 73);
        if ( v10 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 56LL))(v10, *a3, 0LL);
        *a4 = 0;
      }
    }
  }
  return 0LL;
}
