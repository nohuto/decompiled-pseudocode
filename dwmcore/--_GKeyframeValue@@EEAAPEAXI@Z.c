/*
 * XREFs of ??_GKeyframeValue@@EEAAPEAXI@Z @ 0x180055B90
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

KeyframeValue *__fastcall KeyframeValue::`scalar deleting destructor'(KeyframeValue *this, char a2)
{
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &KeyframeValue::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x68uLL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
