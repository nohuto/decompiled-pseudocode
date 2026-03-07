void __fastcall VidMmiAddProbeAndLockReference(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  char v1; // [rsp+28h] [rbp-10h]

  if ( (int)++*((_DWORD *)a1 + 91) > 2 )
  {
    v1 = 1;
    DxgCreateLiveDumpWithWdLogs(403LL, 2072LL, a1, 0LL, 0LL, v1);
  }
}
