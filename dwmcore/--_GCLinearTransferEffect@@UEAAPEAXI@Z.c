/*
 * XREFs of ??_GCLinearTransferEffect@@UEAAPEAXI@Z @ 0x180237120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x1801BEC48 (--1CFilterEffect@@MEAA@XZ.c)
 */

CLinearTransferEffect *__fastcall CLinearTransferEffect::`scalar deleting destructor'(
        CLinearTransferEffect *this,
        char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
