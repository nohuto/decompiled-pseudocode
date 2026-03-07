__int64 __fastcall CRemoteRenderTarget::Present(CRemoteRenderTarget *this, char a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  int v6; // eax
  __int64 v7; // rcx

  v2 = *((_QWORD *)this - 34);
  v3 = 0;
  if ( v2 )
  {
    if ( CRemoteRenderTarget::IsPrimaryMonitor((CRemoteRenderTarget *)((char *)this - 304)) && !*((_BYTE *)this - 55) )
      a2 = 1;
    if ( a2 || *((_BYTE *)this - 56) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 112LL))(
             v2,
             ((unsigned __int64)this - 128) & -(__int64)(*((_BYTE *)this - 56) != 0));
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x108u, 0LL);
      }
      else
      {
        **((_DWORD **)this - 16) = 0;
        *((_BYTE *)this - 56) = 0;
      }
    }
  }
  return v3;
}
