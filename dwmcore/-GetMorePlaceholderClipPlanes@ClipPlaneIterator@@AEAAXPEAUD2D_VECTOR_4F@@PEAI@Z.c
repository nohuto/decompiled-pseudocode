void __fastcall ClipPlaneIterator::GetMorePlaceholderClipPlanes(
        ClipPlaneIterator *this,
        struct D2D_VECTOR_4F *a2,
        unsigned int *a3)
{
  __int64 v5; // rbx
  unsigned int v6; // r11d
  unsigned int v7; // r10d
  __int128 v8; // xmm0
  int v9; // xmm1_4
  __int128 v10; // [rsp+20h] [rbp-58h] BYREF
  int v11; // [rsp+30h] [rbp-48h]
  int v12; // [rsp+34h] [rbp-44h]
  int v13; // [rsp+38h] [rbp-40h]
  int v14; // [rsp+3Ch] [rbp-3Ch]
  __int128 v15; // [rsp+40h] [rbp-38h]

  v5 = *((_QWORD *)this + 3);
  v6 = *((_DWORD *)this + 12);
  v7 = *(_DWORD *)(*((_QWORD *)this + 11) + 4LL * *((unsigned int *)this + 3));
  v8 = *(_OWORD *)(v5 + 16LL * ((v7 + v6 - 1) % v6));
  v12 = *(_DWORD *)(v5 + 16LL * v7 + 12);
  v9 = *(_DWORD *)(v5 + 16LL * v7 + 4);
  v10 = v8;
  v11 = *(_DWORD *)(v5 + 16LL * v7 + 8);
  v13 = *(_DWORD *)(v5 + 16LL * v7);
  v14 = v9;
  v15 = *(_OWORD *)(v5 + 16LL * ((v7 + 1) % v6));
  ClipPlaneIterator::CalculateClipPlanesFromLineSegments(this, (struct ClipPlaneIterator::LineSegment *)&v10, 3u, a2);
  *a3 = 3;
  ++*((_DWORD *)this + 3);
}
