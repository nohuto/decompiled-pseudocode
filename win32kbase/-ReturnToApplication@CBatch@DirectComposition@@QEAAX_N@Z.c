void __fastcall DirectComposition::CBatch::ReturnToApplication(DirectComposition::CBatch *this, char a2)
{
  DirectComposition::CApplicationChannel **v2; // rdi
  int v4; // edx

  v2 = (DirectComposition::CApplicationChannel **)((char *)this + 8);
  *((_BYTE *)this + 32) = *((_BYTE *)this + 32) & 0xFD | (2 * (a2 ^ 1));
  v4 = *((_DWORD *)this + 28);
  if ( v4 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(*((DirectComposition::CConnection **)*v2 + 5), v4);
    *((_DWORD *)this + 28) = 0;
  }
  if ( (*((_BYTE *)this + 32) & 4) == 0 )
    DirectComposition::CApplicationChannel::NotifyBatchProcessed(*v2, this);
  DirectComposition::CApplicationChannel::ReturnProcessedBatch(*v2, this);
}
