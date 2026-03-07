__int64 __fastcall FastRegion::CRegion::Subtract(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // eax
  FastRegion::Internal::CRgnData *v7; // rcx
  unsigned int v8; // ebx
  FastRegion::Internal::CRgnData *v10; // rax
  int v11; // [rsp+20h] [rbp-128h] BYREF
  void *lpMem; // [rsp+28h] [rbp-120h]
  _BYTE v13[256]; // [rsp+30h] [rbp-118h] BYREF

  v4 = *a2;
  if ( !*(_DWORD *)v4 )
    return 0LL;
  v5 = *this;
  if ( !*(_DWORD *)v5 )
    return 0LL;
  v6 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(v5, v4);
  v7 = (FastRegion::Internal::CRgnData *)v13;
  lpMem = v13;
  v11 = v6;
  if ( (unsigned __int64)v6 > 0x100 )
  {
    v10 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v6);
    v7 = v10;
    if ( !v10 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v11);
      return 2147942414LL;
    }
    lpMem = v10;
  }
  FastRegion::Internal::CRgnData::Subtract(v7, *this, *a2);
  v8 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v11);
  if ( v13 != lpMem )
    operator delete(lpMem);
  return v8;
}
