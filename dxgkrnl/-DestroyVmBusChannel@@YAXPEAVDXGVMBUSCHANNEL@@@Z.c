void __fastcall DestroyVmBusChannel(struct DXGVMBUSCHANNEL *this)
{
  if ( this )
  {
    DXGVMBUSCHANNEL::Cleanup(this);
    DXGVMBUSCHANNEL::Release(this);
  }
}
