/*
 * XREFs of USBType1RenderClosePin @ 0x1C0032EC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001258 (WPP_RECORDER_SF_q.c)
 *     USBHwFreePipes @ 0x1C002E004 (USBHwFreePipes.c)
 *     USBHwFreeOffloadInformation @ 0x1C002E03C (USBHwFreeOffloadInformation.c)
 */

__int64 __fastcall USBType1RenderClosePin(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      8u,
      0x1Au,
      (__int64)&WPP_a4e21c92228837c2a2fdb65655c567d9_Traceguids,
      a1);
  if ( *(_BYTE *)(v3 + 96) )
    IoFreeWorkItem(*(PIO_WORKITEM *)(v3 + 968));
  ExDeleteNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v3 + 128));
  USBHwFreePipes(a1);
  USBHwFreeOffloadInformation(a1);
  return 0LL;
}
