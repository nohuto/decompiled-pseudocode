__int64 __fastcall CDrawingContext::FillShapeWithBitmapRealization(
        CDrawingContext *this,
        struct IBitmapRealization *a2,
        const struct CShape *a3,
        const struct MILMatrix3x2 *a4,
        bool a5)
{
  unsigned int v8; // ecx
  char *v9; // rcx
  __int64 v10; // rdi
  SIZE_T v11; // rbx
  HANDLE ProcessHeap; // rax
  char *v13; // rax
  unsigned int v14; // ecx
  void *v15; // rsi
  char *i; // rbx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  HANDLE v20; // rax
  __int64 v21; // rcx
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  struct IBitmapRealization *v24; // [rsp+48h] [rbp-18h] BYREF
  bool v25; // [rsp+50h] [rbp-10h]
  unsigned int v26; // [rsp+A0h] [rbp+40h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(const struct CShape *, unsigned int *))(*(_QWORD *)a3 + 64LL))(a3, &v26) )
  {
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x8A9u, 0LL);
    return v19;
  }
  v23 = 0LL;
  v24 = a2;
  if ( a2 )
  {
    v9 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v10 = v26;
  v25 = a5;
  v11 = 16LL * v26;
  if ( !is_mul_ok(v26, 0x10uLL) )
    v11 = -1LL;
  ProcessHeap = GetProcessHeap();
  v13 = (char *)HeapAlloc(ProcessHeap, 0, v11);
  v15 = v13;
  if ( !v13 )
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x89Fu, 0LL);
    goto LABEL_15;
  }
  for ( i = v13; v10; --v10 )
  {
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(i);
    i += 16;
  }
  (*(void (__fastcall **)(const struct CShape *, void *, _QWORD))(*(_QWORD *)a3 + 80LL))(a3, v15, v26);
  v17 = CDrawingContext::FillRectanglesWithDrawListBitmap(this);
  v19 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x8A5u, 0LL);
    operator delete(v15);
LABEL_15:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v24);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v23);
    return v19;
  }
  v20 = GetProcessHeap();
  HeapFree(v20, 0, v15);
  if ( v24 )
  {
    v21 = (__int64)v24 + *(int *)(*((_QWORD *)v24 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return v19;
}
