__int64 __fastcall CSectionBitmapRealization::CopyPixels(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, void *a5)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx

  v5 = *(_QWORD *)(a1 + 24);
  v6 = -2003292412;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x7Eu, 0LL);
  }
  else
  {
    memset_0(a5, 0, a4);
  }
  return v6;
}
