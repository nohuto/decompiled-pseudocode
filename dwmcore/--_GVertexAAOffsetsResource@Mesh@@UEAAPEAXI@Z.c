Mesh::VertexAAOffsetsResource *__fastcall Mesh::VertexAAOffsetsResource::`scalar deleting destructor'(
        Mesh::VertexAAOffsetsResource *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x18uLL);
    else
      operator delete(this);
  }
  return this;
}
