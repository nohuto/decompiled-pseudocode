__int64 __fastcall CRemoteRenderTarget::NotifyRenderedRect(__int64 a1, struct MilRectF *a2, char a3)
{
  int *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9[4]; // [rsp+40h] [rbp-28h] BYREF

  v7 = 0LL;
  if ( !a3 )
  {
    v8 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 224), a2, (float *)&v8);
    a2 = (struct MilRectF *)&v8;
  }
  v4 = PixelAlign(v9, (float *)a2);
  v5 = *(_QWORD *)(a1 + 176);
  v7 = *(_OWORD *)v4;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 16LL))(v5, &v7);
  *(_BYTE *)(a1 + 392) = 1;
  return result;
}
