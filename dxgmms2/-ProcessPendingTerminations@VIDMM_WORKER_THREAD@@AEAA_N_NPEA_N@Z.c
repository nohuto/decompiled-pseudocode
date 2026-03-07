char __fastcall VIDMM_WORKER_THREAD::ProcessPendingTerminations(KSPIN_LOCK **this, char a2, bool *a3)
{
  char v6; // bl
  struct VIDMM_ALLOC *NextPendingTermination; // rdi
  KSPIN_LOCK *v8; // rcx
  _QWORD v10[12]; // [rsp+40h] [rbp-78h] BYREF
  bool v11; // [rsp+C0h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v12; // [rsp+D8h] [rbp+20h] BYREF

  v6 = 0;
  NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(*this, a3);
  if ( NextPendingTermination )
  {
    v6 = 1;
    do
    {
      memset(v10, 0, 0x58uLL);
      v8 = *this;
      v12 = 0LL;
      v10[2] = NextPendingTermination;
      LODWORD(v10[0]) = 200;
      v11 = 0;
      VIDMM_GLOBAL::ProcessDeferredCommand(
        (VIDMM_GLOBAL *)v8,
        (struct _VIDMM_DEFERRED_COMMAND *)v10,
        &v11,
        0,
        0LL,
        0LL,
        0,
        &v12);
      if ( !a2 )
        break;
      NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(*this, a3);
    }
    while ( NextPendingTermination );
  }
  return v6;
}
