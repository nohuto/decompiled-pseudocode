CGeometryOnlyDrawListBrush *__fastcall CGeometryOnlyDrawListBrush::`vector deleting destructor'(
        CGeometryOnlyDrawListBrush *this,
        char a2)
{
  struct CObjectCache *ObjectCache; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x38uLL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(this);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}
