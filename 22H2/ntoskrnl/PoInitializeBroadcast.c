/*
 * XREFs of PoInitializeBroadcast @ 0x14098BC94
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140983798 (PopDirectedDripsInitializeBroadcast.c)
 *     PnprQuiesceDevices @ 0x140A9D3C4 (PnprQuiesceDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmBeginHighPerfRequest @ 0x14036E924 (PpmBeginHighPerfRequest.c)
 *     PopHaltDeviceIdle @ 0x140587550 (PopHaltDeviceIdle.c)
 *     PopBuildDeviceNotifyList @ 0x140AA71FC (PopBuildDeviceNotifyList.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 PoInitializeBroadcast()
{
  unsigned int v0; // edi
  _QWORD *Pool2; // rsi
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  v0 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 472LL, 1936933968LL);
  if ( Pool2 )
  {
    v2 = Pool2 + 12;
    Pool2[2] = KeGetCurrentThread();
    v3 = 5LL;
    Pool2[1] = 0LL;
    Pool2[55] = Pool2 + 54;
    Pool2[54] = Pool2 + 54;
    do
    {
      *(v2 - 2) = v2 - 3;
      *(v2 - 3) = v2 - 3;
      *v2 = v2 - 1;
      *(v2 - 1) = v2 - 1;
      v2[2] = v2 + 1;
      v2[1] = v2 + 1;
      v4 = v2 + 3;
      v2[4] = v2 + 3;
      v2 += 9;
      *v4 = v4;
      --v3;
    }
    while ( v3 );
    PpmBeginHighPerfRequest();
    PopCurrentBroadcast = 0uLL;
    qword_140C3CDB0 = Pool2;
    PopBuildDeviceNotifyList(Pool2 + 6);
    PopHaltDeviceIdle();
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
