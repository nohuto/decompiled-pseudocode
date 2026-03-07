__int64 __fastcall CCompositionSurface::UpdateBufferDirtyRegion(
        CCompositionSurface *a1,
        unsigned __int64 a2,
        const struct IRegion *a3)
{
  int Buffer; // ebx
  struct CCompositionBuffer *v5; // rdi
  struct CFlipExBuffer *v6; // rax
  struct CCompositionBuffer *v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  Buffer = CCompositionSurface::FindBuffer(a1, a2, &v8);
  if ( Buffer >= 0 )
  {
    v5 = v8;
    if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v8 + 88LL))(v8) )
    {
      v6 = CFlipExBuffer::FromBuffer(v5);
      if ( *((_DWORD *)v6 + 95) == -1 )
        *((_DWORD *)v6 + 95) = 0;
      *((_DWORD *)v6 + 12) = 1;
      CCompositionBuffer::NotifyDirty(v6, a3, 0LL);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)Buffer;
}
