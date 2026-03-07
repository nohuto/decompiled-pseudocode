__int64 __fastcall CRemoteAppRenderTarget::ProcessSetAlphaMode(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_SETALPHAMODE *a3)
{
  int v3; // eax
  int v4; // xmm0_4

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 != *((_DWORD *)this + 29) )
  {
    *((_DWORD *)this + 29) = v3;
    if ( v3 == 3 )
      v4 = (int)FLOAT_1_0;
    else
      v4 = 0;
    *((_DWORD *)this + 34) = v4;
    *((_BYTE *)this + 141) = 1;
  }
  return 0LL;
}
