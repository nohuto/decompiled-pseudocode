__int64 __fastcall CDrawingContext::PushClipBounds(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4,
        enum D2D1_ANTIALIAS_MODE a5)
{
  char *v5; // rdi
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v18; // r8
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF

  v5 = (char *)this + 368;
  *((_QWORD *)&v19 + 1) = a2;
  LODWORD(v19) = 3;
  v9 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 368, &v19);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC92u, 0LL);
    return v11;
  }
  v12 = *(_QWORD *)a3;
  v19 = 0LL;
  v13 = (*(__int64 (__fastcall **)(const struct CShape *, __int128 *, const struct CMILMatrix *))(v12 + 48))(
          a3,
          &v19,
          a4);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC98u, 0LL);
    goto LABEL_7;
  }
  v15 = CScopedClipStack::PushClipBoundsToScope((char *)this + 896, &v19, (unsigned int)a5);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC9Au, 0LL);
LABEL_7:
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v5, 0LL, v18);
  }
  return v11;
}
