__int64 __fastcall CRemoteAppRenderTarget::NotifyRenderedRect(__int64 a1, __int64 a2, struct MilRectF *a3)
{
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  int v6[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a3 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 0LL);
  v5 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 184), a3, (float *)&v5);
  PixelAlign(v6, (float *)&v5);
  return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 16LL))(a2, v6);
}
