__int64 __fastcall SC_DISK::GetStoragePropertyPre(SC_DISK *this, enum _STORAGE_PROPERTY_ID a2, unsigned int *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  *a3 = 0;
  if ( a2 > StorageDeviceResiliencyProperty )
  {
    switch ( a2 )
    {
      case 21:
        *a3 = 24;
        return v3;
      case 57:
        *a3 = 264;
        return v3;
      case 58:
        *a3 = 36;
        return v3;
      case 60:
        *a3 = 48;
        return v3;
      case 65:
        *a3 = 16;
        return v3;
    }
    return (unsigned int)SC_DEVICE::GetStoragePropertyPre(this, a2, a3);
  }
  switch ( a2 )
  {
    case StorageDeviceResiliencyProperty:
      *a3 = 32;
      return v3;
    case StorageDeviceWriteCacheProperty:
    case StorageAccessAlignmentProperty:
      *a3 = 28;
      return v3;
    case StorageDeviceSeekPenaltyProperty:
    case StorageDeviceTrimProperty:
      *a3 = 12;
      return v3;
  }
  if ( a2 != StorageDeviceLBProvisioningProperty )
    return (unsigned int)SC_DEVICE::GetStoragePropertyPre(this, a2, a3);
  *a3 = 40;
  return v3;
}
