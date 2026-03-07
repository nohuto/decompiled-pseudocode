__int64 __fastcall CDrawingContext::GetActiveLightCount(CDrawingContext *this)
{
  const struct CVisualTree *v1; // rdi
  struct CVisual *v3; // rax
  __int64 v4; // r9

  v1 = (const struct CVisualTree *)*((_QWORD *)this + 1007);
  v3 = (struct CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  LOBYTE(v4) = 1;
  return CLightStack::GetActiveLightCount((CDrawingContext *)((char *)this + 560), v3, v1, v4);
}
