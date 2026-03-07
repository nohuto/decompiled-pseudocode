void __fastcall CHolographicInteropTexture::GetDirtyRects(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        struct tagRECT *a5,
        bool *a6)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v9; // rbp
  __int64 v11; // rbp
  unsigned int RectangleCount; // eax
  __int64 v13; // r11
  __int64 v14; // r10
  struct tagRECT *v15; // rsi
  LONG *p_bottom; // r14
  LONG *v17; // rcx
  LONG v18; // eax
  FastRegion::Internal::CRgnData *v19; // rcx
  __int64 v20; // rdx
  char v21; // cl
  _BYTE v22[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]
  LONG *v24; // [rsp+30h] [rbp-28h]
  FastRegion::Internal::CRgnData *v25; // [rsp+38h] [rbp-20h]
  int v26; // [rsp+40h] [rbp-18h]

  v6 = this + 41;
  v7 = a3;
  v9 = a2;
  AcquireSRWLockShared(this + 41);
  if ( (unsigned int)v9 >= HIDWORD(this[20].Ptr) || (unsigned int)v7 >= LODWORD(this[21].Ptr) )
    goto LABEL_11;
  if ( v7 >= 2 )
  {
    std::_Xout_of_range("invalid array<T, N> subscript");
    __debugbreak();
LABEL_11:
    *a4 = 0;
    v21 = 1;
    goto LABEL_12;
  }
  v11 = 96 * v9;
  RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)((char *)this[v7 + 16].Ptr + v11 + 16));
  if ( RectangleCount <= *a4 )
  {
    *a4 = RectangleCount;
    _mm_lfence();
    FastRegion::Internal::CRgnData::BeginIterator(
      *(FastRegion::Internal::CRgnData **)((char *)this[v7 + 16].Ptr + v11 + 16),
      (struct FastRegion::CRegion::Iterator *)v22);
    v15 = &a5[v14];
    if ( a5 < v15 )
    {
      p_bottom = &a5->bottom;
      do
      {
        v17 = v24;
        if ( (unsigned __int64)v24 >= v23 )
          break;
        *(p_bottom - 2) = *v24;
        v18 = v17[2];
        v19 = v25;
        *p_bottom = v18;
        v20 = 2 * v26;
        *(p_bottom - 3) = *((_DWORD *)v19 + v20);
        *(p_bottom - 1) = *((_DWORD *)v19 + v20 + 1);
        p_bottom += 4;
        FastRegion::Internal::CRgnData::StepIterator(v19, (struct FastRegion::CRegion::Iterator *)v22);
      }
      while ( p_bottom - 3 < (LONG *)v15 );
    }
  }
  _mm_lfence();
  v21 = *((_BYTE *)this[v13 + 16].Ptr + v11 + 88);
LABEL_12:
  *a6 = v21;
  ReleaseSRWLockShared(v6);
}
