__int64 __fastcall CLegacyRenderTarget::ProcessCreate(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_CREATE *a3)
{
  int v5; // eax

  *(_QWORD *)((char *)this + 18460) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 4606) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 28) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 6);
  CLegacyRenderTarget::SetSDRBoost(this, 1.0);
  v5 = 3;
  if ( *((_DWORD *)a3 + 7) < 3u )
    v5 = 2;
  *((_DWORD *)this + 4607) = v5;
  return 0LL;
}
