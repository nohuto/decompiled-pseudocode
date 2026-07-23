/*
 * XREFs of PspDisassociateUmsThreadFromPrimary @ 0x14090E894
 * Callers:
 *     PspUmsUnInitThread @ 0x14090A8EC (PspUmsUnInitThread.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x14090EBC0 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObReferenceObjectSafe @ 0x1402F1E80 (ObReferenceObjectSafe.c)
 *     RtlGetExtendedContextLength @ 0x14033F480 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14033F500 (RtlInitializeExtendedContext.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     memset @ 0x140413800 (memset.c)
 *     KeDoesTebMatchThread @ 0x140526BB0 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x140526BCC (KeGetCurrentUmsTeb.c)
 *     KeSetCurrentUmsTeb @ 0x140526C14 (KeSetCurrentUmsTeb.c)
 *     PspSetContextThreadInternal @ 0x1406C0A5C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1406C0C14 (PspGetContextThreadInternal.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x1408BD60C (KeRemoveUmsThreadCidOwnership.c)
 *     KeUpdateUmsThreadState @ 0x1408BD7AC (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x1408BDEEC (KeBuildPrimaryThreadContext.c)
 *     KeFixUserSwitchContext @ 0x1408BEA70 (KeFixUserSwitchContext.c)
 *     PspFindThreadForTeb @ 0x14090A150 (PspFindThreadForTeb.c)
 *     PspSetUmsThreadContext @ 0x14090EDE8 (PspSetUmsThreadContext.c)
 */

__int64 __fastcall PspDisassociateUmsThreadFromPrimary(PETHREAD Thread, PADAPTER_OBJECT DmaAdapter, int *a3)
{
  int updated; // ebx
  unsigned __int64 CurrentUmsTeb; // rax
  char v8; // r15
  char v9; // r12
  __int64 v10; // rdx
  _DWORD *v11; // r8
  PETHREAD ThreadForTeb; // rax
  _QWORD *Object; // r13
  int v14; // r12d
  unsigned __int64 v15; // rax
  void *v16; // rsp
  PCONTEXT_EX v17; // rbx
  __int64 v18; // r12
  PCONTEXT_EX v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct _DMA_ADAPTER *v22; // rcx
  PCONTEXT_EX v23; // r13
  int v24; // eax
  PCONTEXT_EX ContextEx; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength[2]; // [rsp+38h] [rbp+8h] BYREF
  int CycleTime; // [rsp+40h] [rbp+10h] BYREF
  int v29; // [rsp+44h] [rbp+14h]
  unsigned int CurrentRunTime; // [rsp+48h] [rbp+18h]
  int v31; // [rsp+4Ch] [rbp+1Ch]
  int v32; // [rsp+50h] [rbp+20h]
  int *p_CycleTime; // [rsp+58h] [rbp+28h] BYREF
  int v34; // [rsp+60h] [rbp+30h]
  int v35; // [rsp+64h] [rbp+34h]

  ContextEx = 0LL;
  ContextLength[0] = 0;
  updated = 0;
  CurrentUmsTeb = KeGetCurrentUmsTeb(Thread);
  v8 = 0;
  v9 = 0;
  if ( KeDoesTebMatchThread((__int64)Thread, CurrentUmsTeb) )
    goto LABEL_2;
  if ( DmaAdapter )
  {
    if ( v10 != *(_QWORD *)&DmaAdapter[15].Version )
    {
LABEL_2:
      *v11 |= 2u;
      goto LABEL_23;
    }
LABEL_10:
    Object = Thread->WaitBlock[3].Object;
    if ( (Thread->MiscFlags & 0x100) != 0 )
    {
      *a3 |= 1u;
      v9 = v8;
    }
    else
    {
      KeSetCurrentUmsTeb(Thread, (unsigned __int64)Thread->Teb);
      v14 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
      RtlGetExtendedContextLength(v14 + 1048603, ContextLength);
      v15 = ContextLength[0] + 15LL;
      if ( v15 <= ContextLength[0] )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&ContextEx, 0, ContextLength[0]);
      RtlInitializeExtendedContext((PCONTEXT)&ContextEx, v14 + 1048603, &ContextEx);
      ContextEx = (PCONTEXT_EX)((char *)ContextEx - 1232);
      v17 = ContextEx;
      PspGetContextThreadInternal((__int64)Thread, (__int64)ContextEx, 0, 1, 1);
      *(_QWORD *)ContextLength = **(_QWORD **)&DmaAdapter[31].Version;
      v18 = *(_QWORD *)ContextLength;
      KeFixUserSwitchContext((__int64)DmaAdapter, *(__int64 *)ContextLength, 0LL, (__int64)v17);
      updated = KeRemoveUmsThreadCidOwnership(v18, 1);
      v9 = v8;
      if ( updated >= 0 )
      {
        v19 = ContextEx;
        *a3 |= 2u;
        updated = PspSetUmsThreadContext(DmaAdapter, v19, a3);
        if ( updated >= 0 )
        {
          v20 = Object[2];
          if ( *(_QWORD *)(*(_QWORD *)&DmaAdapter[31].Version + 16LL) != v20 )
          {
            ObReferenceObjectSafe(v20);
            v21 = *(_QWORD *)&DmaAdapter[31].Version;
            v22 = *(struct _DMA_ADAPTER **)(v21 + 16);
            if ( v22 )
            {
              HalPutDmaAdapter(v22);
              v21 = *(_QWORD *)&DmaAdapter[31].Version;
            }
            *(_QWORD *)(v21 + 8) = Object[1];
            *(_QWORD *)(*(_QWORD *)&DmaAdapter[31].Version + 16LL) = Object[2];
          }
          v23 = ContextEx;
          updated = KeBuildPrimaryThreadContext((__int64)Thread, 0LL, (__int64)ContextEx, 1, 0LL, 0LL);
          if ( updated >= 0 )
          {
            PspSetContextThreadInternal(Thread, (__int64)v23, 0, 1, 1);
            *a3 |= 8u;
            if ( v8 )
              updated = KeUpdateUmsThreadState(*(__int64 *)ContextLength, 0, 1);
          }
        }
      }
    }
    goto LABEL_23;
  }
  ThreadForTeb = PspFindThreadForTeb(v10);
  DmaAdapter = (PADAPTER_OBJECT)ThreadForTeb;
  if ( !ThreadForTeb )
  {
LABEL_5:
    updated = -1073740004;
    goto LABEL_23;
  }
  v8 = 1;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&ThreadForTeb[1].WaitStatus) )
    goto LABEL_10;
  KeSetCurrentUmsTeb(Thread, (unsigned __int64)Thread->Teb);
  if ( _interlockedbittestandset((volatile signed __int32 *)&DmaAdapter[81], 0x10u) )
    goto LABEL_5;
LABEL_23:
  if ( SBYTE8(PerfGlobalGroupMask[0]) < 0 )
  {
    CycleTime = Thread[1].CycleTime;
    CurrentRunTime = Thread[1].CurrentRunTime;
    if ( DmaAdapter )
      v29 = *(_DWORD *)&DmaAdapter[72].Version;
    else
      v29 = 0;
    v24 = *a3;
    v35 = 0;
    v31 = v24;
    v32 = updated;
    p_CycleTime = &CycleTime;
    v34 = 20;
    EtwTraceKernelEvent((__int64)&p_CycleTime, 1u, 0x40000080u, 0x1923u, 0x401802u);
  }
  if ( v8 )
  {
    if ( v9 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&DmaAdapter[79].DmaOperations);
    HalPutDmaAdapter(DmaAdapter);
  }
  return (unsigned int)updated;
}
