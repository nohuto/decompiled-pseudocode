/*
 * XREFs of ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C0175904
 * Callers:
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C0002E00 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003FF7C (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_RENDER::ResumeSchedulerForVidPnSource(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // [rsp+20h] [rbp-38h]

  if ( (*((_DWORD *)this + 189) & a2) != a2 )
  {
    __debugbreak();
    WdLogSingleEntry1(1LL, 2989LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_SourceMaskSchedulerSuspended & SourceMaskResumeScheduler) == SourceMaskResumeScheduler",
      2989LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)this + 189) &= ~a2;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 1000LL))(
    *((_QWORD *)this + 93),
    a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v5) = a2;
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &ResumeSchedulerForVidPnSource,
      v4,
      *((_QWORD *)this + 2),
      v5);
  }
}
