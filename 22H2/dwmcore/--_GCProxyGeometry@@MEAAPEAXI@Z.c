/*
 * XREFs of ??_GCProxyGeometry@@MEAAPEAXI@Z @ 0x1800EB030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1800EB074 (--1CProxyGeometry@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CProxyGeometry *__fastcall CProxyGeometry::`scalar deleting destructor'(CProxyGeometry *this, char a2)
{
  CProxyGeometry::~CProxyGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xA0uLL);
    else
      operator delete(this);
  }
  return this;
}
