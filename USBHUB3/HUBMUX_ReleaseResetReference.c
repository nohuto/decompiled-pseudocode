/*
 * XREFs of HUBMUX_ReleaseResetReference @ 0x1C0010C30
 * Callers:
 *     HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled @ 0x1C00125D0 (HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled.c)
 *     HUBPSM30_ReleasingResetReferenceOnDeviceRemoval @ 0x1C0013620 (HUBPSM30_ReleasingResetReferenceOnDeviceRemoval.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBMUX_ReleaseResetReference(volatile signed __int32 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFEF);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2336), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return HUBSM_AddEvent(v1 + 1264, 2062);
  return result;
}
