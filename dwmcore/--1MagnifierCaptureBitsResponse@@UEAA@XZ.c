void __fastcall MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(MagnifierCaptureBitsResponse *this)
{
  CResource *v2; // rcx

  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  v2 = (CResource *)*((_QWORD *)this + 211);
  if ( v2 )
    CResource::InternalRelease(v2);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
