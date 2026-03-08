/*
 * XREFs of IommupCreateDeviceId @ 0x14038C584
 * Callers:
 *     IommuDeviceCreate @ 0x140820F90 (IommuDeviceCreate.c)
 * Callees:
 *     HalpIommuGetDeviceId @ 0x14038CC4C (HalpIommuGetDeviceId.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall IommupCreateDeviceId(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int DeviceId; // edi

  *a3 = 0LL;
  if ( a1 )
  {
    DeviceId = HalpIommuGetDeviceId(a1);
    if ( DeviceId >= 0 )
      return (unsigned int)DeviceId;
  }
  else
  {
    DeviceId = -1073741637;
  }
  if ( *a3 )
  {
    HalpMmAllocCtxFree(a1, *a3, a3, a4);
    *a3 = 0LL;
  }
  return (unsigned int)DeviceId;
}
