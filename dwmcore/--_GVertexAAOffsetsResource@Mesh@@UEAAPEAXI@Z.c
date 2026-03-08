/*
 * XREFs of ??_GVertexAAOffsetsResource@Mesh@@UEAAPEAXI@Z @ 0x18001DF90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

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
