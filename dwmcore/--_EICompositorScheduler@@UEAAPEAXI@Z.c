/*
 * XREFs of ??_EICompositorScheduler@@UEAAPEAXI@Z @ 0x1801CEA30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

ICompositorScheduler *__fastcall ICompositorScheduler::`vector deleting destructor'(
        ICompositorScheduler *this,
        char a2)
{
  *(_QWORD *)this = &ICompositorScheduler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
