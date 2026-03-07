__int64 __fastcall CRedirectedVisualContent::Create(struct CVisual *a1, struct CRedirectedVisualContent **a2)
{
  CRedirectedVisualContent *v4; // rax
  unsigned int v5; // ecx
  CRedirectedVisualContent *v6; // rax
  struct CRedirectedVisualContent *v7; // rbx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi

  *a2 = 0LL;
  v4 = (CRedirectedVisualContent *)DefaultHeap::AllocClear(0x98uLL);
  if ( v4 && (v6 = CRedirectedVisualContent::CRedirectedVisualContent(v4, a1), (v7 = v6) != 0LL) )
  {
    (*(void (__fastcall **)(CRedirectedVisualContent *))(*(_QWORD *)v6 + 8LL))(v6);
    v8 = (*(__int64 (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v7 + 48LL))(v7);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x16u, 0LL);
      (*(void (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a2 = v7;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v10;
}
