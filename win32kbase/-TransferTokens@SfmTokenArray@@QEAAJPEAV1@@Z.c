__int64 __fastcall SfmTokenArray::TransferTokens(SfmTokenArray *this, struct SfmTokenArray *a2)
{
  unsigned int v4; // r8d
  __int64 result; // rax

  SGDGetSessionState(this);
  v4 = *((_DWORD *)a2 + 3);
  result = 0LL;
  if ( v4 )
  {
    result = SfmTokenArray::AddNotificationTokens(this, *(struct _D3DKMT_PRESENTHISTORYTOKEN **)a2, v4);
    *((_DWORD *)a2 + 3) = 0;
  }
  return result;
}
