/*
 * XREFs of PiGetTargetDeviceNode @ 0x140862B9C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140862A50 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14096EA58 (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiGetTargetDeviceNode(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 152);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  return result;
}
