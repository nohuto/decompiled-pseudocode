void __fastcall VidMmiRemoveProbeAndLockReference(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  char v2; // [rsp+28h] [rbp-10h]

  if ( --*((_DWORD *)a1 + 91) < 0 )
  {
    v2 = 1;
    DxgCreateLiveDumpWithWdLogs(403LL, 2072LL, a1, 0LL, 0LL, v2);
  }
}
