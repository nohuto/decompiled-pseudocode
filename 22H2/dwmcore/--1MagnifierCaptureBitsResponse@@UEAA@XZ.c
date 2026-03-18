/*
 * XREFs of ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x1801F9DE0
 * Callers:
 *     ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1801F9E20 (--_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078A28 (-InternalRelease@CResource@@IEAAKXZ.c)
 */

void __fastcall MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(MagnifierCaptureBitsResponse *this)
{
  CResource *v2; // rcx

  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  v2 = (CResource *)*((_QWORD *)this + 211);
  if ( v2 )
    CResource::InternalRelease(v2);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
