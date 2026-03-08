/*
 * XREFs of ??_GCD3DDevice@@MEAAPEAXI@Z @ 0x1800EDC70
 * Callers:
 *     ??_ECD3DDevice@@OBA@EAAPEAXI@Z @ 0x18011ACB0 (--_ECD3DDevice@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800EDCB4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CD3DDevice *__fastcall CD3DDevice::`scalar deleting destructor'(CD3DDevice *this, char a2)
{
  CD3DDevice::~CD3DDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x8E0uLL);
    else
      operator delete(this);
  }
  return this;
}
