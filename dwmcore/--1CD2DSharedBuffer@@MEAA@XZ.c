void __fastcall CD2DSharedBuffer::~CD2DSharedBuffer(CD2DSharedBuffer *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 4) == 0LL;
  *(_QWORD *)this = &CD2DSharedBuffer::`vftable';
  if ( v1 )
    operator delete(*((void **)this + 2));
  else
    ReleaseInterface<CSharedSection>((char *)this + 32);
}
