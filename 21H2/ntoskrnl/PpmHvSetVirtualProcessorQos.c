/*
 * XREFs of PpmHvSetVirtualProcessorQos @ 0x14057C6D4
 * Callers:
 *     PoSetProcessorQoS @ 0x14056E79C (PoSetProcessorQoS.c)
 * Callees:
 *     PpmEventVpQosChange @ 0x14057B478 (PpmEventVpQosChange.c)
 */

BOOLEAN __fastcall PpmHvSetVirtualProcessorQos(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax

  v2 = *(_DWORD *)(a1 + 33264);
  v3 = *(_QWORD *)(a1 + 33976);
  *(_DWORD *)(a1 + 33268) = v2;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 4) = v2;
    *(_DWORD *)(v3 + 12) = 1;
    __writemsr(0x400000C2u, 0xFFFFFFFEuLL);
  }
  return PpmEventVpQosChange(a1);
}
