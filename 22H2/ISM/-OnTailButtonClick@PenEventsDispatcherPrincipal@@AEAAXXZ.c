/*
 * XREFs of ?OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133DD4
 * Callers:
 *     ?OnHotKeyDetected@PenEventsDispatcherPrincipal@@UEAAJIII_K@Z @ 0x180133870 (-OnHotKeyDetected@PenEventsDispatcherPrincipal@@UEAAJIII_K@Z.c)
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180133D08 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x180133100 (-FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V.c)
 */

void __fastcall PenEventsDispatcherPrincipal::OnTailButtonClick(PenEventsDispatcherPrincipal *this)
{
  __int64 v1; // rdx
  _QWORD v2[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0LL;
  v2[0] = off_1801AD1A8;
  v2[7] = v2;
  if ( *((_BYTE *)this + 196) )
    v1 = *((unsigned int *)this + 50);
  PenEventsDispatcherPrincipal::FireEvents((__int64)this, v1, (__int64)v2);
}
