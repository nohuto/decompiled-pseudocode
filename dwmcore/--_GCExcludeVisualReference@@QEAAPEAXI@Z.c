CExcludeVisualReference *__fastcall CExcludeVisualReference::`scalar deleting destructor'(
        CExcludeVisualReference *this)
{
  CExcludeVisualReference::~CExcludeVisualReference(this);
  operator delete(this);
  return this;
}
