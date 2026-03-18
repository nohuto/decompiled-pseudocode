/*
 * XREFs of ??_ECCaptureController@@EEAAPEAXI@Z @ 0x1801C2BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCaptureController@@EEAA@XZ @ 0x180220604 (--1CCaptureController@@EEAA@XZ.c)
 */

CCaptureController *__fastcall CCaptureController::`vector deleting destructor'(CCaptureController *this, char a2)
{
  CCaptureController::~CCaptureController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
