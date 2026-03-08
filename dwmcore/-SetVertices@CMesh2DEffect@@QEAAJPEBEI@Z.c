/*
 * XREFs of ?SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z @ 0x1802BBD40
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     ?EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z @ 0x1802BB500 (-EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z.c)
 */

__int64 __fastcall CMesh2DEffect::SetVertices(CMesh2DEffect *this, const unsigned __int8 *Src, size_t Size)
{
  size_t v3; // rsi
  unsigned int v6; // esi
  void **v7; // rdi
  unsigned int *v8; // r14
  void *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx

  v3 = (unsigned int)Size;
  if ( (Size & 0x1F) != 0 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x184u, 0LL);
    v7 = (void **)((char *)this + 168);
    v8 = (unsigned int *)((char *)this + 164);
LABEL_9:
    operator delete(*v7);
    *v7 = 0LL;
    *v8 = 0;
    return v6;
  }
  v7 = (void **)((char *)this + 168);
  if ( *((_QWORD *)this + 21) )
  {
    operator delete(*v7);
    *v7 = 0LL;
  }
  v8 = (unsigned int *)((char *)this + 164);
  *((_DWORD *)this + 41) = (unsigned int)v3 >> 5;
  v9 = operator new(saturated_mul((unsigned int)v3 >> 5, 0x20uLL));
  *v7 = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x190u, 0LL);
    goto LABEL_9;
  }
  memcpy_0(v9, Src, v3);
  v11 = CMesh2DEffect::EnsureVertexBuffer(this, (const struct CD3DVertexXYZDUV2 *)*v7, *v8);
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x19Bu, 0LL);
    goto LABEL_9;
  }
  return v6;
}
