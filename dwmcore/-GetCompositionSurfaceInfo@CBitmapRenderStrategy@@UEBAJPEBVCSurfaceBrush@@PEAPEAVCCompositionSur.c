__int64 __fastcall CBitmapRenderStrategy::GetCompositionSurfaceInfo(
        CBitmapRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CCompositionSurfaceInfo **a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  struct CCompositionSurfaceInfo *v7; // rbx

  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 13) + 56LL))(*((_QWORD *)a2 + 13), 42LL) )
  {
    v7 = *(struct CCompositionSurfaceInfo **)(*((_QWORD *)a2 + 13) + 104LL);
    if ( v7 )
      (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v7 + 8LL))(v7);
    *a3 = v7;
  }
  else
  {
    *a3 = 0LL;
    v5 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003304309, 0x37Au, 0LL);
  }
  return v5;
}
