void __fastcall VidMmCloseAdapter(struct VIDMM_GLOBAL *a1, __int64 a2)
{
  __int64 v2; // rax
  VIDMM_PROCESS *v4; // rcx

  v2 = *(_QWORD *)(a2 + 64);
  v4 = 0LL;
  if ( v2 )
    v4 = *(VIDMM_PROCESS **)(v2 + 8);
  VIDMM_PROCESS::CloseAdapter(v4, a1);
}
