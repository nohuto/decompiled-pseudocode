/*
 * XREFs of ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800CE480
 * Callers:
 *     ?InitializeMmcssTask@CGlobalMit@@MEAAJXZ @ 0x1800CC6D0 (-InitializeMmcssTask@CGlobalMit@@MEAAJXZ.c)
 *     ?InitializeMMCSSTask@CGlobalManipulationManager@@EEAAJXZ @ 0x1800CC7C0 (-InitializeMMCSSTask@CGlobalManipulationManager@@EEAAJXZ.c)
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x1800CC854 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x1800CE0C8 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagM.c)
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CE720 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034880 (--2@YAPEAX_K@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034CA4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x1800CEDEC (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800CEEC0 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800F9CF8 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180103AFC (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CMmcssTask::Set(struct _RTL_CRITICAL_SECTION *this, const struct DWM_MMTASK *a2, char a3)
{
  const struct DWM_MMTASK *v3; // rdi
  struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // rax
  int Runtime; // eax
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rcx
  _DWORD *p_Type; // rcx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = this;
  v3 = 0LL;
  EnterCriticalSection(this);
  if ( a2 && *(_WORD *)a2 )
    v3 = a2;
  if ( !CMmcssTask::AreEqualMmTask(&this[1].DebugInfo->Type, (LPCWCH)v3) )
  {
    if ( this[1].DebugInfo )
      CMmcssTask::Revert((CMmcssTask *)this);
    if ( !v3 )
    {
      p_Type = &this[1].DebugInfo->Type;
LABEL_15:
      operator delete(p_Type, 0x90uLL);
      this[1].DebugInfo = 0LL;
      goto LABEL_5;
    }
    DebugInfo = this[1].DebugInfo;
    if ( !DebugInfo )
    {
      Runtime = CMmcssTask::LoadRuntime((CMmcssTask *)this);
      v11 = Runtime;
      if ( Runtime < 0 )
      {
        v14 = 188;
LABEL_20:
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Runtime, v14, 0LL);
        goto LABEL_21;
      }
      DebugInfo = (struct _RTL_CRITICAL_SECTION_DEBUG *)operator new(0x90uLL);
      this[1].DebugInfo = DebugInfo;
      if ( !DebugInfo )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0xC0u, 0LL);
LABEL_21:
        p_Type = &this[1].DebugInfo->Type;
        if ( !p_Type )
          goto LABEL_5;
        if ( v11 == -2147023096 )
        {
          p_Type[33] = 0;
          goto LABEL_5;
        }
        goto LABEL_15;
      }
    }
    *(_OWORD *)&DebugInfo->Type = *(_OWORD *)v3;
    DebugInfo->ProcessLocksList = (LIST_ENTRY)*((_OWORD *)v3 + 1);
    *(_OWORD *)&DebugInfo->EntryCount = *((_OWORD *)v3 + 2);
    *(_OWORD *)&DebugInfo[1].Type = *((_OWORD *)v3 + 3);
    DebugInfo[1].ProcessLocksList = (LIST_ENTRY)*((_OWORD *)v3 + 4);
    *(_OWORD *)&DebugInfo[1].EntryCount = *((_OWORD *)v3 + 5);
    *(_OWORD *)&DebugInfo[2].Type = *((_OWORD *)v3 + 6);
    DebugInfo[2].ProcessLocksList = (LIST_ENTRY)*((_OWORD *)v3 + 7);
    *(_OWORD *)&DebugInfo[2].EntryCount = *((_OWORD *)v3 + 8);
    *(_QWORD *)&this[1].DebugInfo[2].Flags = 0LL;
    if ( !a3 )
      goto LABEL_5;
    Runtime = CMmcssTask::Apply((CMmcssTask *)this, 0);
    v11 = Runtime;
    if ( Runtime >= 0 )
      goto LABEL_5;
    v14 = 204;
    goto LABEL_20;
  }
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return 0LL;
}
