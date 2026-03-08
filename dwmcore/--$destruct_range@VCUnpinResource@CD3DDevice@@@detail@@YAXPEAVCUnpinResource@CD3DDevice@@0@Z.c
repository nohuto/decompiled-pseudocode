/*
 * XREFs of ??$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z @ 0x180131030
 * Callers:
 *     ?clear_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18028B7E0 (-clear_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDev.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18028D228 (-ensure_extra_capacity@-$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy.c)
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x18028D434 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DD.c)
 * Callees:
 *     ??1CUnpinResource@CD3DDevice@@QEAA@XZ @ 0x180131068 (--1CUnpinResource@CD3DDevice@@QEAA@XZ.c)
 */

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
