__int64 __fastcall CRemoteAppRenderTarget::ProcessSetVailDpi(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_SETVAILDPI *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 63) != v3 )
  {
    *((_DWORD *)this + 63) = v3;
    *((_BYTE *)this + 292) = 1;
  }
  return 0LL;
}
