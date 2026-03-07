char __fastcall VIDMM_GLOBAL::InvalidateOneAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL *CurrentThread; // rcx
  int v6; // eax
  bool v7; // r8
  signed __int32 v8[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v9[12]; // [rsp+20h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_BYTE *)a2 + 81) == 1 )
  {
    WdLogSingleEntry1(4LL, a2);
  }
  else
  {
    DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
    *((_BYTE *)a2 + 81) = 1;
    _InterlockedOr(v8, 0);
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
    if ( (**((_DWORD **)a2 + 67) & 0x40000000) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread == *(VIDMM_GLOBAL **)(*(_QWORD *)this + 8LL) )
        return VIDMM_GLOBAL::CleanupPrimaryAllocation(CurrentThread, a2);
      memset(v9, 0, 0x58uLL);
      v6 = *((_DWORD *)a2 + 17) & 0x3F;
      LODWORD(v9[0]) = 103;
      HIDWORD(v9[0]) = v6;
      v9[5] = a2;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v9, v7);
    }
  }
  return 0;
}
