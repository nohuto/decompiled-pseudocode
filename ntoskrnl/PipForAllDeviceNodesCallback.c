/*
 * XREFs of PipForAllDeviceNodesCallback @ 0x140785638
 * Callers:
 *     PipForAllChildDeviceNodes @ 0x140785680 (PipForAllChildDeviceNodes.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PipForAllChildDeviceNodes @ 0x140785680 (PipForAllChildDeviceNodes.c)
 */

__int64 __fastcall PipForAllDeviceNodesCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1, *(_QWORD *)(a2 + 8));
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      return PipForAllChildDeviceNodes(a1, v5, a2);
  }
  return result;
}
