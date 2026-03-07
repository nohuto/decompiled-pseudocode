void __fastcall std::deque<CMegaRect>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rdi
  void *v7; // rcx
  FastRegion::CRegion *v8; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v6 = *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + v2)));
    v7 = *(void **)(v6 + 16);
    if ( v7 )
      operator delete(v7);
    v8 = *(FastRegion::CRegion **)(v6 + 8);
    if ( v8 )
    {
      FastRegion::CRegion::FreeMemory(v8);
      operator delete(v8, 0x48uLL);
    }
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(a1[1] + 8 * v3);
    if ( v4 )
      operator delete(v4, 0x20uLL);
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    v10 = 8LL * a1[2];
    v11 = v10;
    v12 = v5;
    if ( v10 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v12, &v11);
      v10 = v11;
      v5 = v12;
    }
    operator delete(v5, v10);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
}
