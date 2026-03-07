void __fastcall ClipPlaneIterator::~ClipPlaneIterator(ClipPlaneIterator *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 88);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 56);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 24);
}
