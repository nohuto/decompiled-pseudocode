/*
 * XREFs of ?GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ @ 0x1C014888C
 * Callers:
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C0148954 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0148D20 (NtGdiGetAppliedDeviceGammaRamp.c)
 * Callees:
 *     <none>
 */

void *__fastcall PDEVOBJ::GetAppliedGammaRampTable(PDEVOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 1704LL);
  if ( v2 )
    return (void *)v2;
  v2 = *(_QWORD *)(v1 + 1696);
  if ( v2 )
    return (void *)v2;
  else
    return *(void **)(v1 + 1688);
}
