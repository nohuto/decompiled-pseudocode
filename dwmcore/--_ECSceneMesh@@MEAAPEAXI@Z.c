CSceneMesh *__fastcall CSceneMesh::`vector deleting destructor'(CSceneMesh *this, char a2)
{
  CSceneMesh::~CSceneMesh(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
