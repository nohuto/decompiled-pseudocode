/*
 * XREFs of ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x18005EE20
 * Callers:
 *     ?Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x180043850 (-Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005DBFC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18006EEF8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C07A0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _Init_thread_footer @ 0x1800E7650 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E76B8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalComposition::GetDesktopTree(
        CGlobalComposition *this,
        struct _LUID a2,
        struct CDesktopTree **a3)
{
  DWORD LowPart; // ebx
  unsigned int v6; // edi
  CMILCOMBase **i; // rax
  struct CDesktopTree *v8; // rsi
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  int v11; // eax
  __int64 v12; // rcx
  LONG HighPart; // [rsp+6Ch] [rbp+14h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+70h] [rbp+18h] BYREF

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  v6 = -2147023728;
  if ( dword_18034B164 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18034B164);
    if ( dword_18034B164 == -1 )
    {
      dword_180345A9C = -2147023728;
      Init_thread_footer(&dword_18034B164);
    }
  }
  *a3 = 0LL;
  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  for ( i = (CMILCOMBase **)*((_QWORD *)this + 7); i != *((CMILCOMBase ***)this + 8); ++i )
  {
    v8 = *i;
    if ( *((_QWORD *)*i + 737) == __PAIR64__(HighPart, LowPart) )
    {
      CMILCOMBase::InternalAddRef(*i);
      v6 = 0;
      *a3 = v8;
      goto LABEL_6;
    }
  }
  if ( __PAIR64__(HighPart, LowPart) == 0xFFFFFFFE00000000uLL )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)this + 11));
    if ( PrimaryMonitorTarget )
    {
      v11 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, struct CDesktopTree **))(*(_QWORD *)PrimaryMonitorTarget
                                                                                       + 8LL))(
              PrimaryMonitorTarget,
              a3);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_180345A98, 2u, v11, 0xB1u, 0LL);
    }
  }
LABEL_6:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return v6;
}
