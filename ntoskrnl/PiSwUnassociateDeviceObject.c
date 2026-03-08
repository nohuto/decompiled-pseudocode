/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x140964C84
 * Callers:
 *     PiSwDestroyDeviceObject @ 0x14096423C (PiSwDestroyDeviceObject.c)
 *     PiSwProcessRemove @ 0x140964760 (PiSwProcessRemove.c)
 * Callees:
 *     PiSwDeviceDereference @ 0x140807FA4 (PiSwDeviceDereference.c)
 *     PiSwRemovePdoAssociation @ 0x140964C14 (PiSwRemovePdoAssociation.c)
 */

void __fastcall PiSwUnassociateDeviceObject(__int64 a1)
{
  __int64 *v1; // rdi
  void *v2; // rbx

  v1 = *(__int64 **)(a1 + 64);
  v2 = (void *)*v1;
  if ( *v1 )
  {
    PiSwRemovePdoAssociation(*v1, a1);
    PiSwDeviceDereference(v2);
    *v1 = 0LL;
  }
}
