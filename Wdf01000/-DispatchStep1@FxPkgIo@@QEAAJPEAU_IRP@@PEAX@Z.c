/*
 * XREFs of ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00042E0
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0004270 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C00343A0 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0001FE4 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0005600 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?DispatchToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C00065C4 (-DispatchToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IR.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z @ 0x1C000F9FE (-Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C000FAEE (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C001B150 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C003A900 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C003E134 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0040344 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0046CA0 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0054868 (WPP_IFR_SF_qcDqd.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0062DD0 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0064574 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0066F04 (WPP_IFR_SF_qLsqd.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C00676D4 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA98 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BAD54 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAD98 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00BB030 (-Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

NTSTATUS __fastcall FxPkgIo::DispatchStep1(FxPkgIo *this, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rdi
  _LIST_ENTRY *v4; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 MajorFunction; // rcx
  FxIoQueue *v9; // rsi
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // rax
  FxCxDeviceInfo *v12; // r14
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // r14
  FxDeviceBase *m_DeviceBase; // rax
  const void *v15; // rdi
  FxRequest *v16; // r15
  __int64 v17; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _FX_DRIVER_GLOBALS *v19; // rdx
  FX_POOL_TRACKER *v20; // rbx
  _QWORD *p_Flink; // r12
  FxVerifierLock *v22; // rax
  _QWORD *v23; // rbx
  FxObject *v24; // r12
  char *p_m_ParentObject; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  PIRP v28; // r9
  __int64 v29; // rcx
  unsigned __int8 *v30; // rdx
  int v31; // r8d
  int v32; // eax
  __int64 v33; // rax
  FxObject *v34; // rdx
  __int64 v35; // rax
  char *v36; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  __int64 v39; // rax
  signed int v40; // r12d
  unsigned __int8 v41; // al
  FxIoInCallerContext *v42; // rax
  char m_ObjectFlags; // al
  KIRQL v44; // bl
  unsigned int m_QueueState; // eax
  _FX_DRIVER_GLOBALS *v46; // rcx
  __int64 v48; // rax
  __int64 v49; // r8
  int v50; // eax
  unsigned __int8 v51; // dl
  __int64 v52; // r8
  char _a3; // r10
  __int64 v54; // r12
  int v55; // r15d
  FxDeviceBase *v56; // rcx
  unsigned __int16 v57; // ax
  const void *globals; // rcx
  _FX_DRIVER_GLOBALS *v59; // rdx
  _LIST_ENTRY *Flink; // r15
  _LIST_ENTRY *v61; // r11
  _LIST_ENTRY *Blink; // r11
  FxDeviceBase *v63; // rcx
  unsigned __int16 v64; // r10
  unsigned __int64 v65; // rcx
  bool v66; // zf
  FxDeviceBase *v67; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v69; // rcx
  __int64 v70; // rax
  FxObject *v71; // rcx
  _FX_DRIVER_GLOBALS *v72; // rdx
  int v73; // eax
  int v74; // eax
  int v75; // eax
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  int v78; // eax
  FxVerifierLock *v79; // rcx
  const void *v80; // rax
  _FX_DRIVER_GLOBALS *v81; // rdx
  _FX_DRIVER_GLOBALS *v82; // r10
  const void *v83; // rcx
  const char *v84; // r8
  const void *v85; // rdx
  const _GUID *_a1; // [rsp+20h] [rbp-49h]
  int level; // [rsp+48h] [rbp-21h]
  FxRequest *ReservedRequest; // [rsp+50h] [rbp-19h] BYREF
  FxObject *Parent; // [rsp+58h] [rbp-11h]
  void *PPObject; // [rsp+60h] [rbp-9h] BYREF
  FxIoInCallerContext *InCallerContextInfo; // [rsp+68h] [rbp-1h]
  MxLock *p_m_SpinLock; // [rsp+70h] [rbp+7h]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int8 PreviousIrql; // [rsp+D0h] [rbp+67h] BYREF
  PIRP v95; // [rsp+D8h] [rbp+6Fh] BYREF
  char v96; // [rsp+E0h] [rbp+77h]
  FxVerifierLock *VerifierLock; // [rsp+E8h] [rbp+7Fh] BYREF

  v95 = Irp;
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  v4 = DispatchContext;
  if ( DispatchContext == &this->m_DynamicDispatchInfoListHead )
  {
LABEL_2:
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    v9 = this->m_DispatchTable[MajorFunction];
    if ( v9 )
    {
      m_CxDeviceInfo = v9->m_CxDeviceInfo;
      if ( m_CxDeviceInfo )
        p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
      else
        p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
      InCallerContextInfo = p_IoInCallerContextCallback;
LABEL_6:
      if ( this->m_Filter
        && !p_IoInCallerContextCallback->m_Method
        && v9 == this->m_DefaultQueue
        && !FxIoQueue::IsIoEventHandlerRegistered(v9, (_WDF_REQUEST_TYPE)MajorFunction) )
      {
        goto LABEL_112;
      }
      v96 = 0;
      PreviousIrql = v9 && v9->m_SupportForwardProgress;
      if ( KeGetCurrentIrql() <= 1u )
      {
        KeEnterCriticalRegion();
        v96 = 1;
      }
      if ( v9 && (v12 = v9->m_CxDeviceInfo) != 0LL )
        p_RequestAttributes = &v12->RequestAttributes;
      else
        p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&this->m_DeviceBase[2].m_ExecutionLevel;
      m_DeviceBase = this->m_DeviceBase;
      v15 = 0LL;
      Parent = m_DeviceBase;
      v16 = 0LL;
      ReservedRequest = 0LL;
      PPObject = p_RequestAttributes;
      v17 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
      m_Globals = m_DeviceBase->m_Globals;
      VerifierLock = (FxVerifierLock *)m_Globals;
      if ( v17 && *(_WORD *)(v17 + 8) == 4354 && *(_BYTE *)(v17 + 1779) )
      {
        p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
        v20 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
        if ( !v20 )
        {
          v70 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))&p_m_SpinLock[3].m_DbgFlagIsInitialized)(
                  *((unsigned int *)&p_m_SpinLock[2].m_DbgFlagIsInitialized + 1),
                  HIDWORD(p_m_SpinLock[2].m_Lock),
                  LODWORD(p_m_SpinLock[2].m_Lock));
LABEL_119:
          v20 = (FX_POOL_TRACKER *)v70;
        }
      }
      else
      {
        ++HIDWORD(m_DeviceBase[2].m_ParentObject);
        v20 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
        if ( !v20 )
        {
          v71 = Parent;
          ++LODWORD(Parent[4].m_SpinLock.m_Lock);
          v70 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v71[4].m_ChildEntry.Blink)(
                  HIDWORD(v71[4].m_ParentObject),
                  HIDWORD(v71[4].m_ChildEntry.Flink),
                  LODWORD(v71[4].m_ChildEntry.Flink));
          goto LABEL_119;
        }
      }
      if ( !v20 )
        goto LABEL_142;
      if ( m_Globals->FxPoolTrackingOn )
      {
        p_Flink = &v20[1].Link.Flink;
        FxPoolInsertNonPagedAllocateTracker(
          (FX_POOL *)&VerifierLock->m_OwningThread,
          v20,
          Parent[5].m_SpinLock.m_Lock,
          *(&VerifierLock->m_Mutex.m_Lock.Contention + 1),
          retaddr);
      }
      else
      {
        p_Flink = &v20->Link.Flink;
      }
      v22 = VerifierLock;
      *p_Flink = v20;
      v23 = p_Flink + 2;
      p_Flink[1] = v22;
      v24 = Parent;
      if ( p_RequestAttributes )
      {
        p_m_ParentObject = (char *)p_RequestAttributes;
      }
      else
      {
        p_m_ParentObject = (char *)&Parent[5].m_ParentObject;
        PPObject = &Parent[5].m_ParentObject;
      }
      if ( LOBYTE(v22[1].m_ThreadTableEntry.PerThreadDispatchLockList) )
      {
        *(_OWORD *)v23 = 0LL;
        *((_OWORD *)v23 + 1) = 0LL;
        *((_OWORD *)v23 + 2) = 0LL;
        *((_DWORD *)v23 + 8) = 1146058822;
        v23 += 6;
      }
      v23[47] = 0LL;
      v23[48] = 0LL;
      v23[49] = 0LL;
      v23[50] = 0LL;
      v23[51] = 0LL;
      v23[46] = v23;
      if ( p_m_ParentObject )
      {
        v26 = *((_QWORD *)p_m_ParentObject + 6);
        if ( v26 )
        {
          v49 = *((_QWORD *)p_m_ParentObject + 5);
          if ( !v49 )
            v49 = *(_QWORD *)(v26 + 16);
          memset(v23 + 52, 0, (v49 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          p_m_ParentObject = (char *)PPObject;
        }
        v23[50] = *((_QWORD *)p_m_ParentObject + 6);
      }
      if ( !v23 )
      {
LABEL_142:
        v40 = -1073741670;
        WPP_IFR_SF_D(Parent->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, 0xC000009A);
        goto LABEL_143;
      }
      v23[2] = v24->m_Globals;
      *v23 = FxObject::`vftable';
      v23[7] = 0LL;
      *((_BYTE *)v23 + 48) = 1;
      *((_DWORD *)v23 + 6) = 0x10000;
      *((_DWORD *)v23 + 2) = 24121352;
      v23[5] = v23 + 4;
      v23[4] = v23 + 4;
      v23[10] = v23 + 9;
      v23[9] = v23 + 9;
      v27 = v23[2];
      *((_DWORD *)v23 + 3) = 1;
      v23[8] = 0LL;
      v23[11] = 0LL;
      v23[12] = 0LL;
      if ( *(_BYTE *)(v27 + 324) )
        FxObject::Vf_VerifyConstruct((FxObject *)v23, v19, 0);
      *v23 = FxNonPagedObject::`vftable';
      v23[14] = 0LL;
      *((_BYTE *)v23 + 104) = 1;
      if ( *((char *)v23 + 24) < 0 )
      {
        v72 = (_FX_DRIVER_GLOBALS *)v23[2];
        if ( v72->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v72, (FxObject *)v23);
          *(v23 - 5) = VerifierLock;
        }
      }
      v28 = v95;
      v23[19] = v95;
      v23[23] = 0LL;
      v23[24] = 0LL;
      *((_WORD *)v23 + 106) = 0;
      *((_BYTE *)v23 + 238) = 1;
      v23[20] = 0LL;
      v23[25] = 0LL;
      *((_BYTE *)v23 + 214) = v28 == 0LL;
      v23[16] = v23 + 15;
      v23[15] = v23 + 15;
      *((_BYTE *)v23 + 215) = 0;
      *(_WORD *)((char *)v23 + 235) = 0;
      v23[21] = 0LL;
      v23[22] = 0LL;
      v23[18] = 0LL;
      v23[28] = 0LL;
      *((_DWORD *)v23 + 52) = 0;
      v23[30] = 0LL;
      *((_BYTE *)v23 + 234) = 0;
      *((_BYTE *)v23 + 237) = 0;
      v23[32] = FxRequestSystemBuffer::`vftable';
      v23[34] = FxRequestOutputBuffer::`vftable';
      v23[33] = 0LL;
      v23[35] = 0LL;
      *((_WORD *)v23 + 116) = 232;
      v23[37] = v23 + 36;
      v23[36] = v23 + 36;
      v23[39] = v23 + 38;
      v23[38] = v23 + 38;
      v23[41] = v23 + 40;
      v23[40] = v23 + 40;
      *v23 = FxRequestFromLookaside::`vftable';
      v23[27] = 216LL;
      v23[31] = 0LL;
      *((_BYTE *)v23 + 353) = 0;
      *((_BYTE *)v23 + 352) = 0;
      *((_WORD *)v23 + 177) = 0;
      v23[42] = 0LL;
      v23[43] = 0LL;
      v23[12] = v24->m_DeviceBase;
      v29 = v23[19];
      v30 = *(unsigned __int8 **)(v29 + 184);
      v31 = *v30;
      if ( v31 != 14 )
      {
        if ( v31 == 3 || v31 == 4 )
        {
          if ( HIDWORD(v24[2].__vftable) == 1 )
          {
            if ( !*(_BYTE *)(v29 + 64) )
            {
              v33 = *(_QWORD *)(v29 + 112);
              goto LABEL_34;
            }
          }
          else if ( HIDWORD(v24[2].__vftable) == 2 )
          {
            v33 = *(_QWORD *)(v29 + 24);
            goto LABEL_34;
          }
          goto LABEL_39;
        }
        if ( v31 != 15 )
          goto LABEL_39;
      }
      v32 = *((_DWORD *)v30 + 6) & 3;
      if ( v32 == 2 )
      {
LABEL_33:
        v33 = *(_QWORD *)(v29 + 24);
LABEL_34:
        v23[33] = v33;
LABEL_35:
        if ( v23[33] )
          *((_BYTE *)v23 + 235) |= 1u;
        if ( v23[35] )
          *((_BYTE *)v23 + 235) |= 2u;
        goto LABEL_39;
      }
      if ( !v32 )
      {
        v23[33] = *(_QWORD *)(v29 + 24);
        v48 = *(_QWORD *)(v29 + 24);
LABEL_80:
        v23[35] = v48;
        goto LABEL_35;
      }
      v73 = v32 - 1;
      if ( !v73 )
        goto LABEL_33;
      if ( v73 != 2 )
        goto LABEL_35;
      if ( (_BYTE)v31 == 15 || !*(_BYTE *)(v29 + 64) )
      {
        v23[33] = *((_QWORD *)v30 + 4);
        v48 = *(_QWORD *)(v29 + 112);
        goto LABEL_80;
      }
LABEL_39:
      if ( v24->m_Globals->FxRequestParentOptimizationOn )
      {
        v34 = 0LL;
        PPObject = 0LL;
        if ( *((_WORD *)v23 + 5) )
        {
          if ( p_RequestAttributes )
          {
            if ( p_RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
            {
              FxObject::MarkPassiveCallbacks((FxObject *)v23, ObjectLock);
              v34 = (FxObject *)PPObject;
              v28 = v95;
            }
            if ( p_RequestAttributes->ParentObject )
            {
              FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)v23[2], p_RequestAttributes->ParentObject, 0x1000u, &PPObject);
              v34 = (FxObject *)PPObject;
              v28 = v95;
            }
          }
          if ( !v34 )
            goto LABEL_47;
          v40 = FxObject::AssignParentObject((FxObject *)v23, v34);
          if ( v40 >= 0 )
          {
            v28 = v95;
LABEL_47:
            if ( p_RequestAttributes )
            {
              v35 = *((unsigned __int16 *)v23 + 5);
              if ( (_WORD)v35 )
                v36 = (char *)v23 + v35;
              else
                v36 = 0LL;
              EvtDestroyCallback = p_RequestAttributes->EvtDestroyCallback;
              if ( EvtDestroyCallback )
                *((_QWORD *)v36 + 3) = EvtDestroyCallback;
              EvtCleanupCallback = p_RequestAttributes->EvtCleanupCallback;
              if ( EvtCleanupCallback )
              {
                *((_QWORD *)v36 + 2) = EvtCleanupCallback;
                *((_WORD *)v23 + 12) |= 0x400u;
              }
            }
            v39 = v23[2];
            *((_WORD *)v23 + 12) |= 8u;
            if ( *(_BYTE *)(v39 + 324) )
            {
              FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)v23, (_FX_DRIVER_GLOBALS *)v34);
              v28 = v95;
            }
            v40 = 0;
            goto LABEL_57;
          }
        }
        else
        {
          v40 = -1073741816;
        }
      }
      else
      {
        v40 = FxObject::Commit((FxObject *)v23, p_RequestAttributes, 0LL, v24, 0);
        if ( v40 >= 0 )
        {
          v28 = v95;
LABEL_57:
          v16 = (FxRequest *)v23;
          ReservedRequest = (FxRequest *)v23;
          goto LABEL_58;
        }
      }
      WPP_IFR_SF_D(Parent->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v40);
      FxObject::ClearEvtCallbacks((FxObject *)v23);
      (*(void (__fastcall **)(_QWORD *))(*v23 + 48LL))(v23);
LABEL_143:
      v28 = v95;
LABEL_58:
      v41 = PreviousIrql;
      if ( PreviousIrql )
      {
        if ( v40 < 0 )
          goto LABEL_147;
        if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
          goto LABEL_154;
        v74 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, v16);
        v28 = v95;
        v40 = v74;
        v41 = PreviousIrql;
      }
      if ( v40 >= 0 )
      {
        if ( !v41 )
        {
LABEL_61:
          v42 = InCallerContextInfo;
          if ( InCallerContextInfo && InCallerContextInfo->m_Method && !v16->m_Reserved )
          {
            v16->m_InternalContext = v9;
            v40 = FxPkgIo::DispatchToInCallerContextCallback(this, v42, v16, v28);
            goto LABEL_73;
          }
          m_ObjectFlags = v9->m_ObjectFlags;
          VerifierLock = (FxVerifierLock *)v16;
          LOBYTE(v95) = 0;
          if ( m_ObjectFlags < 0 && (v79 = *(FxVerifierLock **)&v9[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v79, (unsigned __int8 *)&v95, v31);
            v44 = (unsigned __int8)v95;
          }
          else
          {
            v44 = KeAcquireSpinLockRaiseToDpc(&v9->m_NPLock.m_Lock);
            LOBYTE(v95) = v44;
          }
          if ( v16->m_Reserved )
            FxObject::AddRef(
              v16,
              (void *)0x50647746,
              2311,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          m_QueueState = v9->m_QueueState;
          if ( (m_QueueState & 1) == 0 )
          {
            v82 = v9->m_Globals;
            v40 = -1073741436;
            if ( v82->FxVerboseOn )
            {
              if ( v16->m_ObjectSize )
                v83 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v83 = 0LL;
              v84 = "power stopping (Drain) in progress,";
              if ( (m_QueueState & 0x10000) == 0 )
                v84 = a5;
              if ( v9->m_ObjectSize )
                v85 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v85 = 0LL;
              WPP_IFR_SF_qLsqd(v82, 5u, (unsigned int)v84, 0x29u, _a1, v85, m_QueueState, v84, v83, -1073741436);
            }
            FxNonPagedObject::Unlock(v9, v44);
            v16->m_Irp.m_Irp->IoStatus.Information = 0LL;
            FxRequest::Complete(v16, -1073741436);
            v16->Release(
              v16,
              (void *)1886220099,
              2338,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            goto LABEL_73;
          }
          v46 = v9->m_Globals;
          if ( v46->FxVerboseOn )
          {
            if ( v9->m_ObjectSize )
              v80 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v80 = 0LL;
            if ( v16->m_ObjectSize )
              v15 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
            WPP_IFR_SF_qq(v46, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v15, v80);
          }
          if ( v16->m_Globals->FxVerifierIO )
          {
            PreviousIrql = 0;
            FxNonPagedObject::Lock(v16, &PreviousIrql);
            v81 = v16->m_Globals;
            if ( v81->FxVerifierOn )
              FxRequest::Vf_VerifyRequestIsNotCompleted(v16, v81);
            FxNonPagedObject::Unlock(v16, PreviousIrql);
          }
          v16->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          if ( v16->m_Reserved )
          {
            if ( v9->m_Dispatching )
            {
              FxIoQueue::InsertNewRequestLocked(v9, (FxRequest **)&VerifierLock, (unsigned __int8)v95);
              FxNonPagedObject::Unlock(v9, (unsigned __int8)v95);
              goto LABEL_72;
            }
            v16 = ReservedRequest;
            v44 = (unsigned __int8)v95;
          }
          FxIoQueue::DispatchEvents(v9, v44, v16);
LABEL_72:
          v40 = 259;
LABEL_73:
          if ( v96 )
            KeLeaveCriticalRegion();
          return v40;
        }
LABEL_154:
        if ( !v9->m_FwdProgContext->m_IoResourcesAllocate.Method )
          goto LABEL_61;
        v16->m_Presented = 1;
        v76 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v16->m_ObjectSize )
          v76 = 0LL;
        if ( v9->m_ObjectSize )
          v77 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v77 = 0LL;
        if ( ((int (__fastcall *)(unsigned __int64, unsigned __int64, _FXIO_FORWARD_PROGRESS_CONTEXT *, PIRP))v9->m_FwdProgContext->m_IoResourcesAllocate.Method)(
               v77,
               v76,
               v9->m_FwdProgContext,
               v28) >= 0 )
        {
          v28 = v95;
          goto LABEL_61;
        }
        FxRequest::FreeRequest(v16);
        ReservedRequest = 0LL;
        v78 = FxIoQueue::GetReservedRequest(v9, v95, &ReservedRequest);
        v40 = v78;
        if ( v78 == 259 )
          goto LABEL_73;
        v28 = v95;
        if ( v78 < 0 )
          goto LABEL_163;
        goto LABEL_152;
      }
LABEL_147:
      if ( this->m_Filter && !v9 )
        goto LABEL_163;
      if ( !v41 )
      {
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, v40);
        v28 = v95;
        goto LABEL_163;
      }
      v75 = FxIoQueue::GetReservedRequest(v9, v28, &ReservedRequest);
      v40 = v75;
      if ( v75 == 259 )
        goto LABEL_73;
      v28 = v95;
      if ( v75 < 0 )
      {
LABEL_163:
        v28->IoStatus.Status = v40;
        v28->IoStatus.Information = 0LL;
        IofCompleteRequest(v28, 0);
        goto LABEL_73;
      }
LABEL_152:
      v16 = ReservedRequest;
      goto LABEL_61;
    }
    p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
    v66 = this->m_InCallerContextCallback.m_Method == 0LL;
    InCallerContextInfo = &this->m_InCallerContextCallback;
    if ( !v66 )
      goto LABEL_6;
    if ( this->m_Filter )
    {
LABEL_112:
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
    }
    v55 = -1073741808;
    v67 = this->m_DeviceBase;
    m_ObjectSize = v67->m_ObjectSize;
    v69 = (const void *)((unsigned __int64)v67 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v69 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xDu, 0xFu, WPP_FxPkgIo_cpp_Traceguids, v69, (__int64)Irp, -1073741808);
    goto LABEL_107;
  }
  v50 = FxIrpDynamicDispatchInfo::Mj2Index(Irp->Tail.Overlay.CurrentStackLocation->MajorFunction);
  v54 = v50;
  if ( v50 >= 4 )
  {
    v55 = -1073741811;
    v56 = this->m_DeviceBase;
    v57 = v56->m_ObjectSize;
    globals = (const void *)((unsigned __int64)v56 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v57 )
      globals = 0LL;
    WPP_IFR_SF_qcDqd(
      this->m_Globals,
      v51,
      0xDu,
      0xEu,
      WPP_FxPkgIo_cpp_Traceguids,
      Irp,
      _a3,
      *(unsigned __int8 *)(v52 + 1),
      globals,
      level);
    FxVerifierDbgBreakPoint(this->m_Globals);
    goto LABEL_107;
  }
  v59 = this->m_Globals;
  if ( v59->FxVerifierOn )
  {
    v55 = FxPkgIo::Vf_VerifyDispatchContext(this, v59, v4);
    if ( v55 < 0 )
    {
LABEL_107:
      Irp->IoStatus.Status = v55;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v55;
    }
  }
  while ( 1 )
  {
    Flink = v4[v54 + 1].Flink;
    v61 = v4;
    v4 = v4->Flink;
    if ( Flink )
      break;
    if ( v4 == p_m_DynamicDispatchInfoListHead )
      goto LABEL_2;
  }
  Blink = v61[v54 + 1].Blink;
  v63 = this->m_DeviceBase;
  v64 = v63->m_ObjectSize;
  v65 = (unsigned __int64)v63 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v64 )
    v65 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, _LIST_ENTRY *, _IRP *, unsigned __int64))Flink)(
           v65,
           Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
           Blink,
           Irp,
           (unsigned __int64)v4 | 1);
}
