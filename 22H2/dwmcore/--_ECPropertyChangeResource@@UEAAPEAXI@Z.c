/*
 * XREFs of ??_ECPropertyChangeResource@@UEAAPEAXI@Z @ 0x18021B100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18009A260 (--1CResource@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CPropertyChangeResource *__fastcall CPropertyChangeResource::`vector deleting destructor'(
        CPropertyChangeResource *this,
        char a2)
{
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
