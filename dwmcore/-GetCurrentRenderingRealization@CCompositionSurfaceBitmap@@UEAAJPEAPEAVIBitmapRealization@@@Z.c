__int64 __fastcall CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
        CCompositionSurfaceBitmap *this,
        struct IBitmapRealization **a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  if ( v2 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    *a2 = (struct IBitmapRealization *)v5;
    if ( v5 )
    {
      v7 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      v3 = -2003304309;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003304309, 0xD0u, 0LL);
    }
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003292412, 0xD5u, 0LL);
  }
  return v3;
}
