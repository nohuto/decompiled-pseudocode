/*
 * XREFs of ??_ECHolographicFrameProcessor@@MEAAPEAXI@Z @ 0x1802AB170
 * Callers:
 *     ??_ECHolographicFrameProcessor@@O7EAAPEAXI@Z @ 0x18011D730 (--_ECHolographicFrameProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CHolographicFrameProcessor@@MEAA@XZ @ 0x1802AB038 (--1CHolographicFrameProcessor@@MEAA@XZ.c)
 */

CHolographicFrameProcessor *__fastcall CHolographicFrameProcessor::`vector deleting destructor'(
        CHolographicFrameProcessor *this,
        char a2)
{
  CHolographicFrameProcessor::~CHolographicFrameProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
