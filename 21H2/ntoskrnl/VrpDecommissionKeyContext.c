/*
 * XREFs of VrpDecommissionKeyContext @ 0x1405D5AB8
 * Callers:
 *     VrpRegistryCallback @ 0x1405D3FD0 (VrpRegistryCallback.c)
 *     VrpFreeKeyContext @ 0x1405D5A80 (VrpFreeKeyContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall VrpDecommissionKeyContext(UNICODE_STRING *a1)
{
  wchar_t *Buffer; // rcx

  Buffer = a1[1].Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0x67655256u);
    RtlInitUnicodeString(a1 + 1, 0LL);
  }
}
