/*
 * XREFs of ??_ECInteractionRoot@@EEAAPEAXI@Z @ 0x1801A0370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800E54AC (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EB9F4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CInteractionRoot *__fastcall CInteractionRoot::`vector deleting destructor'(CInteractionRoot *this, char a2)
{
  CInteractionProcessor::~CInteractionProcessor((CInteractionRoot *)((char *)this + 24));
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
