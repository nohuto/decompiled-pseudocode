void __fastcall FxIoTargetRemoteOpenParams::Set(
        FxIoTargetRemoteOpenParams *this,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams,
        _UNICODE_STRING *Name,
        void *Ea,
        unsigned int EaLength)
{
  _UNICODE_STRING v5; // xmm0
  _LARGE_INTEGER *AllocationSize; // rax
  _LARGE_INTEGER *p_AllocationSize; // rdx

  v5 = *Name;
  this->OpenType = WdfIoTargetOpenByName;
  this->EaBuffer = Ea;
  this->TargetDeviceName = v5;
  this->EaBufferLength = EaLength;
  this->DesiredAccess = OpenParams->DesiredAccess;
  this->FileAttributes = OpenParams->FileAttributes;
  this->ShareAccess = OpenParams->ShareAccess;
  this->CreateDisposition = OpenParams->CreateDisposition;
  this->CreateOptions = OpenParams->CreateOptions;
  AllocationSize = (_LARGE_INTEGER *)OpenParams->AllocationSize;
  p_AllocationSize = 0LL;
  if ( AllocationSize )
  {
    p_AllocationSize = &this->AllocationSize;
    this->AllocationSize = *AllocationSize;
  }
  this->AllocationSizePointer = p_AllocationSize;
}
