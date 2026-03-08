/*
 * XREFs of ??_ECWeakResourceReference@@MEAAPEAXI@Z @ 0x180099840
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWeakResourceReference@@MEAA@XZ @ 0x1800998A0 (--1CWeakResourceReference@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CWeakResourceReference *__fastcall CWeakResourceReference::`vector deleting destructor'(
        CWeakResourceReference *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  CWeakResourceReference::~CWeakResourceReference(this);
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
