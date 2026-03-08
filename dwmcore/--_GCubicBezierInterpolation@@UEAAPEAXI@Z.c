/*
 * XREFs of ??_GCubicBezierInterpolation@@UEAAPEAXI@Z @ 0x1800DF1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CubicBezierInterpolation *__fastcall CubicBezierInterpolation::`scalar deleting destructor'(
        CubicBezierInterpolation *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x28uLL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
