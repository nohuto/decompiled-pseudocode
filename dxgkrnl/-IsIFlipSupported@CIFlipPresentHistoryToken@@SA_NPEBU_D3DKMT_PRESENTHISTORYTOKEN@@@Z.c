char __fastcall CIFlipPresentHistoryToken::IsIFlipSupported(const struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  char v1; // bl
  UINT64 FenceValue; // rdi
  CPushLock *v3; // rsi
  __int64 v4; // rdi

  v1 = 0;
  if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
    return 1;
  if ( a1->Model == D3DKMT_PM_FLIPMANAGER )
  {
    FenceValue = a1->Token.Flip.FenceValue;
    if ( FenceValue )
    {
      v3 = (CPushLock *)(FenceValue + 72);
      if ( (int)CPushLock::AcquireLockShared((CPushLock *)(FenceValue + 72)) >= 0 )
      {
        v4 = *(_QWORD *)(FenceValue + 96);
        CPushLock::ReleaseLock(v3);
        if ( v4 )
        {
          if ( *(_DWORD *)(v4 + 28) || *(_DWORD *)(v4 + 32) )
          {
            if ( *(_QWORD *)(v4 + 40) )
              return 1;
          }
        }
      }
    }
  }
  return v1;
}
