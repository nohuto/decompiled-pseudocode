__int64 __fastcall CD2DSharedBuffer::CreateFromHeap(unsigned int a1, struct ID2D1PrivateCompositorBuffer **a2)
{
  unsigned int v3; // esi
  __int64 v5; // rcx
  void *v6; // rdi
  char *v7; // rax
  struct ID2D1PrivateCompositorBuffer *v8; // rbx
  unsigned int v10; // [rsp+20h] [rbp-28h]
  volatile signed __int32 *v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v11 = 0LL;
  v6 = DefaultHeap::Alloc(a1);
  if ( v6 )
  {
    v7 = (char *)CD2DSharedBuffer::operator new();
    v8 = (struct ID2D1PrivateCompositorBuffer *)v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 2) = 0;
      *((_QWORD *)v7 + 4) = 0LL;
      *((_QWORD *)v7 + 2) = v6;
      v6 = 0LL;
      *(_QWORD *)v7 = &CD2DSharedBuffer::`vftable';
      *((_DWORD *)v7 + 6) = a1;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 8));
      v11 = 0LL;
      *a2 = v8;
      goto LABEL_7;
    }
    v10 = 93;
  }
  else
  {
    v10 = 86;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, v10, 0LL);
LABEL_7:
  ReleaseInterface<CD2DSharedBuffer>(&v11);
  if ( v6 )
    operator delete(v6);
  return v3;
}
