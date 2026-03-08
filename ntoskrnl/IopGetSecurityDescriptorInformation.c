/*
 * XREFs of IopGetSecurityDescriptorInformation @ 0x14083BD24
 * Callers:
 *     IopQuerySecureDeviceClassState @ 0x14083B91C (IopQuerySecureDeviceClassState.c)
 *     IoCreateDeviceSecure @ 0x14083BAD0 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140299320 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14071C1D0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140750BE0 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140750C20 (RtlGetGroupSecurityDescriptor.c)
 */

__int64 __fastcall IopGetSecurityDescriptorInformation(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN *a2,
        _DWORD *a3)
{
  NTSTATUS OwnerSecurityDescriptor; // ecx
  int v7; // ebx
  PSID Owner[2]; // [rsp+20h] [rbp-10h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+58h] [rbp+28h] BYREF
  BOOLEAN SaclPresent; // [rsp+68h] [rbp+38h] BYREF

  Owner[0] = 0LL;
  *a3 = 0;
  *a2 = 0;
  SaclPresent = 0;
  OwnerDefaulted = 0;
  OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, Owner, &OwnerDefaulted);
  if ( OwnerSecurityDescriptor >= 0 )
  {
    v7 = Owner[0] != 0LL;
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor >= 0 )
    {
      if ( Owner[0] )
        v7 |= 2u;
      OwnerSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                  SecurityDescriptor,
                                  &SaclPresent,
                                  (PACL *)Owner,
                                  &OwnerDefaulted);
      if ( OwnerSecurityDescriptor >= 0 )
      {
        if ( SaclPresent )
          v7 |= 8u;
        OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                                    SecurityDescriptor,
                                    &SaclPresent,
                                    (PACL *)Owner,
                                    &OwnerDefaulted);
        if ( OwnerSecurityDescriptor >= 0 )
        {
          if ( SaclPresent )
            v7 |= 4u;
          *a2 = OwnerDefaulted;
          *a3 = v7;
        }
      }
    }
  }
  return (unsigned int)OwnerSecurityDescriptor;
}
