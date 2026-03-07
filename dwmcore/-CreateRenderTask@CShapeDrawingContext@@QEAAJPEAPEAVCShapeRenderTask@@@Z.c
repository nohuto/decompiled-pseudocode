__int64 __fastcall CShapeDrawingContext::CreateRenderTask(CShapeDrawingContext *this, struct CShapeRenderTask **a2)
{
  char *v4; // rcx
  _DWORD *v5; // rdx

  v4 = (char *)this + 504;
  v5 = (_DWORD *)*((_QWORD *)v4 + 1);
  if ( v5 == *((_DWORD **)v4 + 2) )
  {
    std::vector<CShapeRenderTask>::_Emplace_reallocate<>();
  }
  else
  {
    *v5 = 0;
    *((_QWORD *)v4 + 1) += 56LL;
  }
  *a2 = (struct CShapeRenderTask *)(*((_QWORD *)this + 64) - 56LL);
  return 0LL;
}
