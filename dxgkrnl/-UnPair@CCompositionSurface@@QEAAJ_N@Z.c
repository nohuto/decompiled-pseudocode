__int64 __fastcall CCompositionSurface::UnPair(CCompositionSurface *this)
{
  char *v2; // rdi
  char *i; // rbx
  CFlipExBuffer *v4; // rax

  if ( *((_QWORD *)this + 13) )
  {
    v2 = (char *)this + 72;
    for ( i = (char *)*((_QWORD *)this + 9); i != v2; i = *(char **)i )
    {
      v4 = CFlipExBuffer::FromBuffer((struct CCompositionBuffer *)(i - 24));
      CFlipExBuffer::DisableCascadedSignaling(v4);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 16LL))(*((_QWORD *)this + 13));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 8LL))(*((_QWORD *)this + 13), 0LL);
    *((_QWORD *)this + 13) = 0LL;
  }
  return 0LL;
}
