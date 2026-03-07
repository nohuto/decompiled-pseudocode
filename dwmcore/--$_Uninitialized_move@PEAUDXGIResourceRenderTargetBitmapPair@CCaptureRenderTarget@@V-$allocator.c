char *__fastcall std::_Uninitialized_move<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *>(
        __int64 *a1,
        __int64 *a2,
        char *a3)
{
  __int64 *v4; // r8
  char *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( a1 != a2 )
  {
    v4 = a1 + 2;
    v5 = (char *)(a3 - (char *)a1);
    do
    {
      *(_QWORD *)a3 = *(v4 - 2);
      a3 += 24;
      v6 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *(__int64 *)((char *)v4 + (_QWORD)v5 - 8) = v6;
      v7 = *v4;
      *v4 = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4] = v7;
      v4 += 3;
    }
    while ( v4 - 2 != a2 );
  }
  std::_Destroy_range<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(
    (__int64)a3,
    (__int64)a3);
  return a3;
}
