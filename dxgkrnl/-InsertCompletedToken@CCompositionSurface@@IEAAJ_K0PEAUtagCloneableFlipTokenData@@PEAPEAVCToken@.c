__int64 __fastcall CCompositionSurface::InsertCompletedToken(
        CCompositionSurface *this,
        __int64 a2,
        unsigned __int64 a3,
        struct tagCloneableFlipTokenData *a4,
        struct CToken **a5)
{
  int Buffer; // edi
  unsigned __int64 v9; // r11
  struct CFlipExBuffer *v10; // rax
  struct CCompositionBuffer *v12; // [rsp+30h] [rbp-18h] BYREF
  struct CToken *v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  Buffer = CCompositionSurface::FindBuffer(this, a2, &v12);
  if ( Buffer >= 0 )
  {
    Buffer = CToken::CreateClonedFlipToken(v9, a3, (CCompositionSurface *)((char *)this - 40), a4, &v13);
    if ( Buffer >= 0 )
    {
      v10 = CFlipExBuffer::FromBuffer(v12);
      if ( a3 )
        *((_QWORD *)v10 + 44) = a3;
      *a5 = v13;
    }
  }
  return (unsigned int)Buffer;
}
