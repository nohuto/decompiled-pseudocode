__int64 __fastcall CDDARenderTarget::NotifyRenderedRect(__int64 a1, struct MilRectF *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5[4]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 248), a2, (float *)&v4);
  PixelAlign(v5, (float *)&v4);
  result = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 160) + 16LL))(*(_QWORD *)(a1 + 160), v5);
  *(_BYTE *)(a1 + 2080) = 1;
  return result;
}
