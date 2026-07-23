/*
 * XREFs of PnpSendIrp @ 0x140361498
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x140360F2C (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x14036E714 (PnpStartDevice.c)
 *     PnpQueryDeviceRelations @ 0x1407433D8 (PnpQueryDeviceRelations.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     PnpSetDeviceAffinityThread @ 0x140361540 (PnpSetDeviceAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     IopSynchronousCall @ 0x14071D3C0 (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x14076872C (PnpAsynchronousCall.c)
 */

__int64 __fastcall PnpSendIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // ebx
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  PreviousAffinity = 0LL;
  v8 = PnpSetDeviceAffinityThread(a1, &PreviousAffinity);
  if ( a4 )
    v9 = PnpAsynchronousCall(a1, a2, a4, a5);
  else
    v9 = IopSynchronousCall(a1, a2, -1073741637, 0, a5);
  v10 = v9;
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v10;
}
