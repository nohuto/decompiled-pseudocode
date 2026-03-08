/*
 * XREFs of MiInitializeBootMemoryDescriptor @ 0x140B38670
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x140B37B68 (MxInitializeFreeNodeDescriptors.c)
 *     MxSwitchDescriptors @ 0x140B964BC (MxSwitchDescriptors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeBootMemoryDescriptor(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r10
  __int64 result; // rax

  *a1 = a3;
  v4 = a3 + a4 - 1;
  a1[1] = a4;
  a1[2] = v4;
  v5 = v4 & 0xFFFFFFFFFFFFFE00uLL;
  a1[4] = a2;
  if ( v5 < a3 || v5 - a3 < 0x200 )
    result = -1LL;
  else
    result = v5 - 512;
  a1[3] = result;
  return result;
}
