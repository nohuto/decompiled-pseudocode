/*
 * XREFs of KdTrap @ 0x140362700
 * Callers:
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 * Callees:
 *     KdpStub @ 0x1403CAB44 (KdpStub.c)
 *     KdpTrap @ 0x140AAD1CC (KdpTrap.c)
 */

__int64 __fastcall KdTrap(int a1, int a2, int a3, int a4, char a5, char a6)
{
  if ( KdpDebugRoutineSelect )
    return KdpTrap(a1, a2, a3, a4, a5, a6);
  else
    return KdpStub(a1, a2, a3, a4, a5, a6);
}
