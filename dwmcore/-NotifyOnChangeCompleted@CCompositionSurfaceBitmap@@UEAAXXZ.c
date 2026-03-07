void __fastcall CCompositionSurfaceBitmap::NotifyOnChangeCompleted(CCompositionSurfaceBitmap *this)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 14) = 0LL;
  *v1 = 0;
}
