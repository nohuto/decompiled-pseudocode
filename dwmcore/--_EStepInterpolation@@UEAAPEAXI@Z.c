/*
 * XREFs of ??_EStepInterpolation@@UEAAPEAXI@Z @ 0x1800DF240
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

StepInterpolation *__fastcall StepInterpolation::`vector deleting destructor'(StepInterpolation *this, char a2)
{
  HANDLE ProcessHeap; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x30uLL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
