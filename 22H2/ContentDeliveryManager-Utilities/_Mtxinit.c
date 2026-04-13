/*
 * XREFs of _Mtxinit @ 0x1800BAF4C
 * Callers:
 *     ??0_Init_locks@std@@QEAA@XZ @ 0x1800B2F90 (--0_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall Mtxinit(struct _RTL_CRITICAL_SECTION *a1)
{
  return _crtInitializeCriticalSectionEx(a1, 0xFA0u, 0);
}
