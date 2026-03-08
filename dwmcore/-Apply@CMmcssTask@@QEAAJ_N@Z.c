/*
 * XREFs of ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180102FFC
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800508A8 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800CD9D0 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CDC70 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?UpdateMMCSSTask@CKst@@EEAAJXZ @ 0x1800F8E80 (-UpdateMMCSSTask@CKst@@EEAAJXZ.c)
 *     ?Run@CGlobalMit@@MEAAKXZ @ 0x1800F8F00 (-Run@CGlobalMit@@MEAAKXZ.c)
 *     _lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_ @ 0x180103940 (_lambda_08f8e6791065478e4a38815f49fd4aba_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMmcssTask::Apply(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  char v2; // di
  signed int v3; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  PRTL_CRITICAL_SECTION_DEBUG v7; // rax
  PRTL_CRITICAL_SECTION_DEBUG v9; // rax
  __int64 v10; // rax
  signed int v11; // eax
  __int64 v12; // rcx
  signed int LastError; // eax
  unsigned int v14; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v15 = this;
  v3 = 0;
  EnterCriticalSection(this);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo )
  {
    if ( a2 )
      DebugInfo[2].EntryCount = 0;
    v9 = this[1].DebugInfo;
    if ( v9->Type )
    {
      if ( !*(_QWORD *)&v9[2].Flags )
      {
        SetLastError(0);
        v10 = ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION_DEBUG, DWORD *))this[1].OwningThread)(
                this[1].DebugInfo,
                &this[1].DebugInfo[2].EntryCount);
        *(_QWORD *)&this[1].DebugInfo[2].Flags = v10;
        if ( v10 )
        {
          SetLastError(0);
          if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD))this[1].SpinCount)(
                 *(_QWORD *)&this[1].DebugInfo[2].Flags,
                 this[1].DebugInfo[2].ContentionCount) )
          {
            goto LABEL_2;
          }
          LastError = GetLastError();
          v3 = LastError;
          if ( LastError > 0 )
            v3 = (unsigned __int16)LastError | 0x80070000;
          v14 = 269;
        }
        else
        {
          v11 = GetLastError();
          v3 = v11;
          if ( v11 > 0 )
            v3 = (unsigned __int16)v11 | 0x80070000;
          v14 = 265;
        }
        if ( v3 >= 0 )
          v3 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v3, v14, 0LL);
      }
    }
  }
LABEL_2:
  v7 = this[1].DebugInfo;
  if ( v7 && *(_QWORD *)&v7[2].Flags )
    v2 = 1;
  LOBYTE(this[2].DebugInfo) = v2;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return (unsigned int)v3;
}
