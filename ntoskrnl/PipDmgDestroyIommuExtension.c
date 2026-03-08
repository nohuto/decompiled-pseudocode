/*
 * XREFs of PipDmgDestroyIommuExtension @ 0x1407F8E3C
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407F84D0 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140867254 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PiIommuFreeExtension @ 0x14086135C (PiIommuFreeExtension.c)
 */

__int64 __fastcall PipDmgDestroyIommuExtension(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 720);
  if ( v2 )
  {
    result = PiIommuFreeExtension(v2);
    *(_QWORD *)(a1 + 720) = 0LL;
  }
  return result;
}
