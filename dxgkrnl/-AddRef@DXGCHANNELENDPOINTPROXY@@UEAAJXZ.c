/*
 * XREFs of ?AddRef@DXGCHANNELENDPOINTPROXY@@UEAAJXZ @ 0x1C01E0340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::AddRef(DXGCHANNELENDPOINTPROXY *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
