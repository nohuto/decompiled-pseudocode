__int64 __fastcall CVisualBitmap::GetCurrentRenderingRealization(CVisualBitmap *this, struct IBitmapRealization **a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    v4 = v2 + 72;
    *a2 = (struct IBitmapRealization *)v4;
    v5 = v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    *a2 = 0LL;
    v3 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292404, 0x7Bu, 0LL);
  }
  return v3;
}
