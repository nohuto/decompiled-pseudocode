/*
 * XREFs of KiGetCurrentKernelShadowStackBounds @ 0x1405798B4
 * Callers:
 *     KiProcessControlProtectionFromKernelMode @ 0x140579EC8 (KiProcessControlProtectionFromKernelMode.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 */

unsigned __int64 __fastcall KiGetCurrentKernelShadowStackBounds(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 i; // rbx
  __int64 j; // rdi

  CurrentThread = KeGetCurrentThread();
  __asm { rdsspq  rbx }
  v4 = (unsigned __int64)CurrentThread->KernelShadowStackBase - 4096;
  result = (CurrentThread->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( _RBX >= v4 || _RBX < result )
  {
    for ( i = _RBX & 0xFFFFFFFFFFFFF000uLL; MmIsAddressValidEx(i - 4096); i -= 4096LL )
      ;
    for ( j = i; MmIsAddressValidEx(j); j += 4096LL )
      ;
    *a1 = j;
    return i;
  }
  else
  {
    *a1 = v4;
  }
  return result;
}
