/*
 * XREFs of RtlGetGroupSecurityDescriptor @ 0x140750C20
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14074D328 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14074F708 (LocalConvertSDToStringSD_Rev1.c)
 *     IopGetSecurityDescriptorInformation @ 0x14083BD24 (IopGetSecurityDescriptorInformation.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140878110 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x1409B94C0 (RtlReplaceSidInSd.c)
 *     CmpCopySaclToVirtualKey @ 0x140A186EC (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Group,
        PBOOLEAN GroupDefaulted)
{
  char *v4; // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 2);
    if ( (_DWORD)v5 )
      v4 = (char *)SecurityDescriptor + v5;
  }
  *Group = v4;
  *GroupDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 2) != 0;
  return 0;
}
