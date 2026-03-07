void __fastcall SC_DISK::SaveStorageProperty(
        SC_DISK *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  __int64 v4; // rax
  void **v5; // rbx

  if ( a2 > StorageDeviceResiliencyProperty )
  {
    switch ( a2 )
    {
      case '9':
        v4 = 320LL;
        break;
      case ':':
        v4 = 344LL;
        break;
      case '<':
        v4 = 384LL;
        break;
      case 'A':
        return;
      default:
        goto LABEL_18;
    }
  }
  else
  {
    switch ( a2 )
    {
      case StorageDeviceResiliencyProperty:
        v4 = 352LL;
        break;
      case StorageDeviceWriteCacheProperty:
        v4 = 328LL;
        break;
      case StorageAccessAlignmentProperty:
        v4 = 312LL;
        break;
      case StorageDeviceSeekPenaltyProperty:
        v4 = 360LL;
        break;
      case StorageDeviceTrimProperty:
        v4 = 376LL;
        break;
      case StorageDeviceLBProvisioningProperty:
        v4 = 368LL;
        break;
      default:
LABEL_18:
        SC_DEVICE::SaveStorageProperty(this, a2, a3);
        return;
    }
  }
  v5 = (void **)((char *)this + v4);
  if ( (SC_DISK *)((char *)this + v4) )
  {
    if ( *v5 )
      SC_ENV::Free(*v5);
    *v5 = a3;
  }
}
