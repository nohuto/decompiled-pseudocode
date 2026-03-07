void __fastcall FxIoTargetRemoteOpenParams::Clear(FxIoTargetRemoteOpenParams *this)
{
  FX_POOL_TRACKER *EaBuffer; // rcx
  wchar_t *Buffer; // rcx

  EaBuffer = (FX_POOL_TRACKER *)this->EaBuffer;
  if ( EaBuffer )
    FxPoolFree(EaBuffer);
  Buffer = this->TargetDeviceName.Buffer;
  if ( Buffer )
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
  memset(this, 0, sizeof(FxIoTargetRemoteOpenParams));
}
