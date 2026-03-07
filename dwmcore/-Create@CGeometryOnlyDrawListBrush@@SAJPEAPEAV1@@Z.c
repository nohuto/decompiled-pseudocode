__int64 __fastcall CGeometryOnlyDrawListBrush::Create(struct CGeometryOnlyDrawListBrush **a1)
{
  unsigned int v2; // ebx
  struct CObjectCache *ObjectCache; // rax
  char *v4; // rdx
  int v5; // r9d
  unsigned int v7; // ecx

  v2 = 0;
  ObjectCache = CThreadContext::GetObjectCache((struct CGeometryOnlyDrawListBrush *)a1);
  v4 = 0LL;
  v5 = *((_DWORD *)ObjectCache + 1);
  if ( v5 )
  {
    v4 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v4;
    *((_DWORD *)ObjectCache + 1) = v5 - 1;
  }
  if ( v4 || (v4 = (char *)DefaultHeap::Alloc(0x38uLL)) != 0LL )
  {
    *(_OWORD *)(v4 + 8) = *(_OWORD *)&_xmm;
    v4[52] = 0;
    *(_QWORD *)v4 = &CGeometryOnlyDrawListBrush::`vftable';
    *((_QWORD *)v4 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *a1 = (struct CGeometryOnlyDrawListBrush *)v4;
  }
  else
  {
    *a1 = 0LL;
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v2;
}
