bool __fastcall CShapeTree::IsEmptyDrawing(CShapeTree *this)
{
  return !*((_BYTE *)this + 96) && *((_BYTE *)this + 97) == 0;
}
