void __fastcall CAutoRefCountedBuffer::~CAutoRefCountedBuffer(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    CRefCountedBuffer::RefCountedBufferRelease(v1);
}
