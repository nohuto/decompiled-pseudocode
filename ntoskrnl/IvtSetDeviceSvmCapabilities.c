/*
 * XREFs of IvtSetDeviceSvmCapabilities @ 0x14052B2C0
 * Callers:
 *     <none>
 * Callees:
 *     IvtAllocateContextTable @ 0x140528DA0 (IvtAllocateContextTable.c)
 */

__int64 __fastcall IvtSetDeviceSvmCapabilities(__int64 a1, unsigned __int64 a2, char a3)
{
  if ( a3 )
    return IvtAllocateContextTable(a1, a2);
  else
    return 0LL;
}
