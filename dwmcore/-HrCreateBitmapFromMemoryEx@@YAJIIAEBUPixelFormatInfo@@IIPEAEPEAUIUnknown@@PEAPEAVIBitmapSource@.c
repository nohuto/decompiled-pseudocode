__int64 __fastcall HrCreateBitmapFromMemoryEx(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct IUnknown *a7,
        struct IBitmapSource **a8)
{
  CClientMemoryBitmap *v12; // rax
  unsigned int v13; // ecx
  CClientMemoryBitmap *v14; // rax
  CClientMemoryBitmap *v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edi
  char *v21; // rcx

  v12 = (CClientMemoryBitmap *)operator new(0xE0uLL);
  if ( v12 && (v14 = CClientMemoryBitmap::CClientMemoryBitmap(v12), (v15 = v14) != 0LL) )
  {
    v16 = (__int64)v14 + *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v17 = CClientMemoryBitmap::HrInit(v15, a1, a2, a3, a5, a6, a4, a7);
    v19 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x27u, 0LL);
      v21 = (char *)v15 + *(int *)(*((_QWORD *)v15 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    else
    {
      *a8 = v15;
    }
  }
  else
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x1Du, 0LL);
  }
  return v19;
}
