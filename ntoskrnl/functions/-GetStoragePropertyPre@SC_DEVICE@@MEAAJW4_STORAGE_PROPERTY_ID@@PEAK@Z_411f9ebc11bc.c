__int64 __fastcall SC_DEVICE::GetStoragePropertyPre(SC_DEVICE *this, enum _STORAGE_PROPERTY_ID a2, unsigned int *a3)
{
  unsigned int v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v3 = 0;
  *a3 = 0;
  if ( a2 == StorageDeviceProperty )
  {
    *a3 = 40;
    return v3;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    *a3 = 32;
    return v3;
  }
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_10;
  v6 = v5 - 3;
  if ( !v6 )
  {
    *a3 = 24;
    return v3;
  }
  v7 = v6 - 14;
  if ( !v7 )
  {
    *a3 = 28;
    return v3;
  }
  if ( v7 == 44 )
  {
LABEL_10:
    *a3 = 16;
    return v3;
  }
  return (unsigned int)-1073741275;
}
