/*
 * XREFs of ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x180010C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DSharedBuffer@@MEAA@XZ @ 0x180011050 (--1CD2DSharedBuffer@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CD2DSharedBuffer *__fastcall CD2DSharedBuffer::`vector deleting destructor'(CD2DSharedBuffer *this, char a2)
{
  CD2DSharedBuffer::~CD2DSharedBuffer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x28uLL);
    else
      operator delete(this);
  }
  return this;
}
