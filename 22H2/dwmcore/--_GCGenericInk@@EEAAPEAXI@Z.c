/*
 * XREFs of ??_GCGenericInk@@EEAAPEAXI@Z @ 0x1801C2F60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CGenericInk@@EEAA@XZ @ 0x18022CD58 (--1CGenericInk@@EEAA@XZ.c)
 */

CGenericInk *__fastcall CGenericInk::`scalar deleting destructor'(CGenericInk *this, char a2)
{
  CGenericInk::~CGenericInk(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
