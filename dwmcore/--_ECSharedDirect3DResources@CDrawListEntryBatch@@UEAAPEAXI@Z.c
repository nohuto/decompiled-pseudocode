CDrawListEntryBatch::CSharedDirect3DResources *__fastcall CDrawListEntryBatch::CSharedDirect3DResources::`vector deleting destructor'(
        CDrawListEntryBatch::CSharedDirect3DResources *this,
        char a2)
{
  CDrawListEntryBatch::CSharedDirect3DResources::~CSharedDirect3DResources(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x4E0uLL);
  return this;
}
