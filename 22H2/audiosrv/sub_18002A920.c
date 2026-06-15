/*
 * XREFs of sub_18002A920 @ 0x18002A920
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002A978 @ 0x18002A978 (sub_18002A978.c)
 */

void __fastcall sub_18002A920(__int64 a1)
{
  sub_18002A978(*(unsigned int *)(a1 + 8), *(_QWORD *)(a1 + 16));
  RtlAcquireResourceExclusive(&Resource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)lpBaseAddress + 1);
  _InterlockedIncrement((volatile signed __int32 *)lpMem + 1);
  RtlReleaseResource(&Resource);
}
