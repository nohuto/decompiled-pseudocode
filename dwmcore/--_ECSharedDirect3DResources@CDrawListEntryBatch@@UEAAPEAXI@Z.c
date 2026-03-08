/*
 * XREFs of ??_ECSharedDirect3DResources@CDrawListEntryBatch@@UEAAPEAXI@Z @ 0x180102EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSharedDirect3DResources@CDrawListEntryBatch@@UEAA@XZ @ 0x180102F1C (--1CSharedDirect3DResources@CDrawListEntryBatch@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CDrawListEntryBatch::CSharedDirect3DResources *__fastcall CDrawListEntryBatch::CSharedDirect3DResources::`vector deleting destructor'(
        CDrawListEntryBatch::CSharedDirect3DResources *this,
        char a2)
{
  CDrawListEntryBatch::CSharedDirect3DResources::~CSharedDirect3DResources(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x4E0uLL);
  return this;
}
