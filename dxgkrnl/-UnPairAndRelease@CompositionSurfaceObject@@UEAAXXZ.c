void __fastcall CompositionSurfaceObject::UnPairAndRelease(CompositionSurfaceObject *this)
{
  ObfDereferenceObject((char *)this - 32);
}
