__int64 __fastcall VIDMM_PROCESS_HEAP::ProbeAndLockAllocation(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  __int64 v7; // rdi
  struct _VIDMM_MDL *v8; // rax

  v7 = *(_QWORD *)(*((_QWORD *)a2 + 11) + 24LL);
  v8 = VidMmiProbeAndLockAllocation(a2, a3, a4, a5, a6, 0LL);
  if ( !v8 )
    return 3223191809LL;
  if ( a7 )
    *(_QWORD *)(v7 + 104) = v8;
  else
    *(_QWORD *)(v7 + 96) = v8;
  return 0LL;
}
