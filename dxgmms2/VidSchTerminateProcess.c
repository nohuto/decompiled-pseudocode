__int64 __fastcall VidSchTerminateProcess(struct _VIDSCH_PROCESS *a1)
{
  unsigned int v2; // edi
  DXGGLOBAL *Global; // rax
  DXGGLOBAL *v4; // rax
  __int64 v6; // rcx

  if ( a1 )
  {
    v2 = 0;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    {
      do
      {
        ++v2;
        v4 = DXGGLOBAL::GetGlobal();
      }
      while ( v2 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(v4) );
    }
    VidSchiProcessExitTelemetry((__m128i *)a1);
    ExFreePoolWithTag(*((PVOID *)a1 + 4), 0);
    ExFreePoolWithTag(*((PVOID *)a1 + 328), 0);
    if ( (struct _VIDSCH_PROCESS *)g_pVidSchSystemProcess == a1 )
      g_pVidSchSystemProcess = 0LL;
    ExFreePoolWithTag(a1, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
}
