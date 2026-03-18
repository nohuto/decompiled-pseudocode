/*
 * XREFs of ??_ECKernelTransport@@UEAAPEAXI@Z @ 0x1801D16D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CKernelTransport@@UEAA@XZ @ 0x1801D1668 (--1CKernelTransport@@UEAA@XZ.c)
 */

CKernelTransport *__fastcall CKernelTransport::`vector deleting destructor'(CKernelTransport *this, char a2)
{
  CKernelTransport::~CKernelTransport(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
