/*
 * XREFs of RemoveW32TlsData @ 0x1C00A8A50
 * Callers:
 *     <none>
 * Callees:
 *     GetData @ 0x1C0029E80 (GetData.c)
 */

void RemoveW32TlsData()
{
  void *Data; // rbx

  Data = (void *)GetData();
  if ( Data )
  {
    PsTlsSetValue(*((unsigned int *)gpxsGlobals + 12), 0LL);
    ExFreePoolWithTag(Data, 0);
  }
}
