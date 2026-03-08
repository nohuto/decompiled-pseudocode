/*
 * XREFs of PipLinkDeviceObjectAndDependencyNode @ 0x140838D98
 * Callers:
 *     IoResolveDependency @ 0x1403943F0 (IoResolveDependency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipLinkDeviceObjectAndDependencyNode(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  ++*(_DWORD *)(a2 + 88);
  *(_QWORD *)(a2 + 48) = a1;
  result = *(_QWORD *)(a1 + 312);
  *(_QWORD *)(result + 80) = a2;
  return result;
}
