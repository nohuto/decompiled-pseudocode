CompositionSurfaceObject *__fastcall CompositionSurfaceObject::`vector deleting destructor'(
        CompositionSurfaceObject *this,
        char a2)
{
  *((_QWORD *)this + 4) = &CompositionSurfaceObject::`vftable'{for `IPairedSurfaceObject'};
  *(_QWORD *)this = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
