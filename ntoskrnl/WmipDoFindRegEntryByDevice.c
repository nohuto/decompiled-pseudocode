/*
 * XREFs of WmipDoFindRegEntryByDevice @ 0x1403BC6C4
 * Callers:
 *     IoWMIDeviceObjectToProviderId @ 0x1403BC5D0 (IoWMIDeviceObjectToProviderId.c)
 *     WmipFindRegEntryByDevice @ 0x1403BC634 (WmipFindRegEntryByDevice.c)
 * Callees:
 *     <none>
 */

int *__fastcall WmipDoFindRegEntryByDevice(void *a1)
{
  int *result; // rax

  for ( result = (int *)WmipInUseRegEntryHead; result != (int *)&WmipInUseRegEntryHead; result = *(int **)result )
  {
    if ( *((void **)result + 2) == a1 && result[12] >= 0 )
      return result;
  }
  return 0LL;
}
