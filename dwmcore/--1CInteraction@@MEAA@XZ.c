/*
 * XREFs of ??1CInteraction@@MEAA@XZ @ 0x1800E4A54
 * Callers:
 *     ??_GCInteraction@@MEAAPEAXI@Z @ 0x1800E4A10 (--_GCInteraction@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800E5448 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x1800E5488 (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800E54AC (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1800E7EB8 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0ppq_EventWriteTransfer @ 0x18019F440 (McTemplateU0ppq_EventWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180279264 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall CInteraction::~CInteraction(CInteraction *this)
{
  _DWORD *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  void *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  CInteraction **v12; // rax

  *(_QWORD *)this = &CInteraction::`vftable'{for `CResource'};
  v2 = (_DWORD *)((char *)this + 1704);
  *((_QWORD *)this + 8) = &CInteraction::`vftable'{for `IInteractionResource'};
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0ppq_EventWriteTransfer(
      (_DWORD)this,
      (unsigned int)&INTERACTION_DESTROYED,
      (_DWORD)this,
      (_DWORD)this,
      *v2);
  v3 = *((_QWORD *)this + 216);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, 0LL);
    v11 = *((_QWORD *)this + 216);
    if ( v11 )
    {
      *((_QWORD *)this + 216) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  memset_0((char *)lpMem + (unsigned int)(Size * *v2), 0, (unsigned int)Size);
  *v2 = 0;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  ReleaseInterface<CWeakReference<CVisual>>((char *)this + 112);
  SAFE_DELETE<CInputSinkStruct>((char *)this + 104);
  if ( (*((_BYTE *)this + 193) & 2) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  if ( CInteraction::IsDefaultInteractionStateLocked(this) )
  {
    v4 = (unsigned int)dword_1803E30E8;
    v6 = 0LL;
    if ( dword_1803E30E8 > 0 )
    {
      v5 = CInteraction::s_DefaultStateLockedInteractions;
      v12 = (CInteraction **)CInteraction::s_DefaultStateLockedInteractions;
      while ( *v12 != this )
      {
        v6 = (unsigned int)(v6 + 1);
        ++v12;
        if ( (int)v6 >= dword_1803E30E8 )
          goto LABEL_7;
      }
      if ( (int)v6 >= 0 && (int)v6 + 1 <= dword_1803E30E8 )
      {
        if ( (_DWORD)v6 + 1 != dword_1803E30E8 )
        {
          memmove_0(
            (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * (int)v6,
            (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * (int)v6 + 8,
            8LL * (dword_1803E30E8 - (int)v6 - 1));
          LODWORD(v4) = dword_1803E30E8;
        }
        v4 = (unsigned int)(v4 - 1);
        dword_1803E30E8 = v4;
      }
    }
  }
LABEL_7:
  if ( *((_QWORD *)this + 27) || *((_QWORD *)this + 30) || *((_QWORD *)this + 29) || *((_QWORD *)this + 28) )
    MicrosoftTelemetryAssertTriggeredNoArgs(v5, v4, v6);
  v7 = *((_QWORD *)this + 216);
  if ( v7 )
  {
    *((_QWORD *)this + 216) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v4, v6);
  }
  CInteractionProcessor::~CInteractionProcessor((CInteraction *)((char *)this + 352));
  v8 = *((_QWORD *)this + 35);
  if ( v8 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  }
  v9 = *((_QWORD *)this + 34);
  if ( v9 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 25);
  if ( v10 )
  {
    *((_QWORD *)this + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  CResource::~CResource(this);
}
