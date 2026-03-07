// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_APERTURE_SEGMENT::ReserveTemporaryResource(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  _QWORD *v11; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this);
    v5 = WdLogNewEntry5_WdTrace(v4);
    *(_QWORD *)(v5 + 24) = this;
    *(_QWORD *)(v5 + 32) = a2;
  }
  if ( *((_QWORD *)a2 + 2) > (unsigned __int64)this[6] )
    return 3223191808LL;
  if ( ((_DWORD)this[10] & 0x20) != 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 13LL, 0LL, 0LL, 0LL);
  }
  (*((void (__fastcall **)(VIDMM_LINEAR_POOL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  LOBYTE(v7) = 1;
  v8 = VIDMM_LINEAR_POOL::Allocate(
         this[19],
         *((_QWORD *)a2 + 2),
         *((unsigned int *)a2 + 8),
         v7,
         0LL,
         0LL,
         0,
         0,
         a2,
         (union _LARGE_INTEGER *)a2 + 29,
         (void **)a2 + 28);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v8;
  }
  else
  {
    *((_QWORD *)a2 + 30) = this;
    if ( g_IsInternalReleaseOrDbg )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v11[3] = *((_QWORD *)a2 + 28);
      v11[4] = *((int *)a2 + 59);
      v11[5] = *((unsigned int *)a2 + 58);
    }
  }
  return v10;
}
