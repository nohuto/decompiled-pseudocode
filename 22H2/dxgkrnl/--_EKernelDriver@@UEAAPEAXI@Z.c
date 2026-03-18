/*
 * XREFs of ??_EKernelDriver@@UEAAPEAXI@Z @ 0x1C03CEB40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 */

KernelDriver *__fastcall KernelDriver::`vector deleting destructor'(KernelDriver *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
