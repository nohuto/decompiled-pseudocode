/*
 * XREFs of ACPICreatePhysicalDeviceLocationDescriptor @ 0x1C0097CD8
 * Callers:
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098134 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPICreatePhysicalDeviceLocationDescriptor(__int64 a1, __int64 *a2)
{
  __int64 Pool2; // rdx
  __int64 result; // rax

  Pool2 = ExAllocatePool2(256LL, 152LL, 1114661697LL);
  *a2 = Pool2;
  result = 0LL;
  if ( !Pool2 )
    return 3221225626LL;
  if ( a1 )
  {
    *(_OWORD *)(Pool2 + 16) = *(_OWORD *)a1;
    *(_DWORD *)(Pool2 + 32) = *(_DWORD *)(a1 + 16);
  }
  return result;
}
