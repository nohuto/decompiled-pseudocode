/*
 * XREFs of ??_GCConnection@@UEAAPEAXI@Z @ 0x1801B5A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CConnection@@UEAA@XZ @ 0x1801B59CC (--1CConnection@@UEAA@XZ.c)
 */

CConnection *__fastcall CConnection::`scalar deleting destructor'(CConnection *this, char a2)
{
  CConnection::~CConnection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
