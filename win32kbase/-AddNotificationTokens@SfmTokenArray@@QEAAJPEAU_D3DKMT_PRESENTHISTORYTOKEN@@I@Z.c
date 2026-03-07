__int64 __fastcall SfmTokenArray::AddNotificationTokens(
        SfmTokenArray *this,
        struct _D3DKMT_PRESENTHISTORYTOKEN *Src,
        int a3)
{
  int v6; // edi
  unsigned int v7; // ecx

  SGDGetSessionState(this);
  v6 = SfmTokenArray::EnsureTokenBufferSize(this, a3);
  if ( v6 >= 0 )
  {
    memmove((void *)(*(_QWORD *)this + (unsigned int)(40 * *((_DWORD *)this + 3))), Src, (unsigned int)(40 * a3));
    v7 = a3 + *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = v7;
    if ( v7 > *((_DWORD *)this + 2) )
      *((_DWORD *)this + 2) = v7;
  }
  return (unsigned int)v6;
}
