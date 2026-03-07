CRenderTargetManager *__fastcall CRenderTargetManager::CRenderTargetManager(
        CRenderTargetManager *this,
        struct CComposition *a2)
{
  struct CDrawingContext **v2; // rdi
  __int64 v4; // rcx

  *(_QWORD *)this = a2;
  v2 = (struct CDrawingContext **)((char *)this + 520);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_QWORD *)this + 11) = (char *)this + 104;
  *((_QWORD *)this + 12) = (char *)this + 520;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_DWORD *)this + 139) = 1065353216;
  *((_DWORD *)this + 140) = 1065353216;
  *((_DWORD *)this + 138) = 0;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  v4 = *((_QWORD *)this + 65);
  *v2 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CDrawingContext::Create(v2);
  return this;
}
