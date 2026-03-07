// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::RestoreFromPurge(VIDMM_GLOBAL *this)
{
  bool v1; // zf
  unsigned int i; // edi
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  int inited; // eax
  _DWORD v8[24]; // [rsp+50h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 10042) == 0;
  *((_BYTE *)this + 7088) = 0;
  if ( v1 )
  {
    VIDMM_GLOBAL::MapAllPagingBuffers(this);
    for ( i = 0; i < *((_DWORD *)this + 1754); ++i )
    {
      v4 = *((_QWORD *)this + 5028) + 1616LL * i;
      if ( *(char *)(v4 + 444) < 0 )
      {
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, i, 0);
        if ( inited < 0 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 23LL, inited, this, i);
        }
        *(_BYTE *)(v4 + 444) &= ~0x80u;
      }
    }
    memset(&v8[2], 0, 0x50uLL);
    v8[1] = -1;
    v8[0] = 101;
    v5 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v8, 1);
    if ( v5 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 23LL, v5, this, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 9699LL);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
  }
}
