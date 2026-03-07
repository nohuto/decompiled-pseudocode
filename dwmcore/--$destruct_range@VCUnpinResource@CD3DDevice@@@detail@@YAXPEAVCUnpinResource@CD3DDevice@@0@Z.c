void __fastcall detail::destruct_range<CD3DDevice::CUnpinResource>(
        CD3DDevice::CUnpinResource *this,
        CD3DDevice::CUnpinResource *a2)
{
  CD3DDevice::CUnpinResource *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CD3DDevice::CUnpinResource::~CUnpinResource(v3);
      v3 = (CD3DDevice::CUnpinResource *)((char *)v3 + 32);
    }
    while ( v3 != a2 );
  }
}
