/*
 * XREFs of VidSchSuspendResumeDevice @ 0x1C0012E60
 * Callers:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0012994 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C0087D78 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A83EC (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A90C4 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     VidSchFlushDevice @ 0x1C00AB9F0 (VidSchFlushDevice.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00E09A0 (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00E1EFC (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00EF95C (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0008230 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C00131F8 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchiUnwaitContext @ 0x1C00136BC (VidSchiUnwaitContext.c)
 *     VidSchWaitForEvents @ 0x1C0014E64 (VidSchWaitForEvents.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x1C00ADFC8 (VidSchSubmitGlobalCommand.c)
 */

void __fastcall VidSchSuspendResumeDevice(_KEVENT *a1, bool a2, char a3, int a4)
{
  struct _LIST_ENTRY *Flink; // r14
  struct _VIDSCH_DEVICE *v6; // rbx
  char v8; // di
  _DWORD *v9; // rdx
  _QWORD *v10; // r13
  char v11; // cl
  _QWORD *v12; // rsi
  int v13; // ebx
  _QWORD *v14; // rdi
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // eax
  char v20; // [rsp+38h] [rbp-69h]
  char v21; // [rsp+39h] [rbp-68h]
  _KEVENT Event; // [rsp+40h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v24[16]; // [rsp+78h] [rbp-29h] BYREF
  _KEVENT *p_Event; // [rsp+108h] [rbp+67h] BYREF
  char v26; // [rsp+110h] [rbp+6Fh]
  int v27; // [rsp+120h] [rbp+7Fh]

  v27 = a4;
  p_Event = a1;
  Flink = a1[1].Header.WaitListHead.Flink;
  v26 = 0;
  v6 = (struct _VIDSCH_DEVICE *)a1;
  v21 = 0;
  v8 = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)&Flink[180], 1u);
  if ( a2 )
  {
    v9 = (_DWORD *)((char *)v6 + 1400);
    ++*((_DWORD *)v6 + 350);
    if ( a3 )
      *((_BYTE *)v6 + 1404) = 1;
    goto LABEL_5;
  }
  if ( !a3 )
    goto LABEL_36;
  if ( *((_BYTE *)v6 + 1404) )
  {
    *((_BYTE *)v6 + 1404) = 0;
LABEL_36:
    v9 = (_DWORD *)((char *)v6 + 1400);
    v18 = *((_DWORD *)v6 + 350);
    if ( v18 )
      *v9 = v18 - 1;
    goto LABEL_5;
  }
  v21 = 1;
  v9 = (_DWORD *)((char *)v6 + 1400);
LABEL_5:
  *((_BYTE *)v6 + 8 * *((unsigned int *)v6 + 360) + 1412) = a2;
  *((_DWORD *)v6 + 2 * *((unsigned int *)v6 + 360) + 352) = *v9;
  *((_DWORD *)v6 + 360) = ((unsigned __int8)*((_DWORD *)v6 + 360) + 1) & 3;
  if ( *((_DWORD *)v6 + 424) )
    goto LABEL_22;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&Flink[108], &LockHandle);
  v10 = (_QWORD *)((char *)v6 + 72);
  v11 = 0;
  v12 = (_QWORD *)*((_QWORD *)v6 + 9);
  v20 = 0;
  if ( v12 == (_QWORD *)((char *)v6 + 72) )
    goto LABEL_16;
  v13 = v27;
  do
  {
    v14 = v12 - 3;
    v15 = *((_DWORD *)v12 + 40);
    if ( !a2 )
    {
      if ( (v15 & 0x100) != 0 && (!a3 || (v14[23] & 0x800) != 0) )
      {
        *((_DWORD *)v14 + 46) &= ~0x100u;
        *((_DWORD *)v14 + 46) &= ~0x800u;
        v11 = VidSchiUnwaitContext(v12 - 3, 4174LL) | v20;
        v20 = v11;
      }
      goto LABEL_12;
    }
    if ( (v15 & 0x100) != 0 )
      goto LABEL_12;
    v16 = *((_DWORD *)v14 + 28);
    if ( (v16 & 0x10) == 0 )
      goto LABEL_12;
    if ( v13 == 1 )
    {
      v19 = v16 >> 7;
    }
    else
    {
      if ( v13 != 2 )
        goto LABEL_29;
      v19 = *(_DWORD *)(v14[12] + 12LL) >> 2;
    }
    if ( (v19 & 1) == 0 )
      goto LABEL_12;
LABEL_29:
    if ( a3 )
      *((_DWORD *)v14 + 46) |= 0x800u;
    v17 = (__int64)(v12 - 3);
    if ( (((unsigned __int8)(*((_DWORD *)v14 + 46) >> 9) | *((_BYTE *)v14 + 184)) & 2) != 0 )
    {
      VidSchiUpdateContextStatus(v17, 9LL, 4125);
      WdLogSingleEntry2(4LL, v12 - 3, *((unsigned int *)v14 + 46));
    }
    else
    {
      VidSchiUpdateContextStatus(v17, 10LL, 4134);
      if ( !BYTE4(Flink[3].Flink) || v14 != *(_QWORD **)(v14[12] + 224LL) )
      {
        v11 = v20;
LABEL_12:
        v8 = v26;
        goto LABEL_13;
      }
      WdLogSingleEntry1(4LL, v12 - 3);
    }
    v11 = v20;
    v8 = 1;
    v26 = 1;
LABEL_13:
    v12 = (_QWORD *)*v12;
  }
  while ( v12 != v10 );
  v6 = (struct _VIDSCH_DEVICE *)p_Event;
  if ( v11 )
  {
    Flink[76].Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)&Flink[74].Blink, 0, 0);
  }
LABEL_16:
  if ( !a2 )
    *((_BYTE *)v6 + 1392) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v8 )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v24, 0, 0x50uLL);
    LODWORD(v24[0]) = 0;
    v24[3] = VidSchiSwitchFromSuspendedDevices;
    LODWORD(v24[5]) = 7;
    v24[4] = &Event;
    v24[6] = Flink;
    VidSchSubmitGlobalCommand(Flink, v24);
    p_Event = &Event;
    VidSchWaitForEvents(Flink, 1LL, &p_Event, 0LL, 0);
  }
  if ( !v21 )
    VidSchiSuspendResumeHwContexts(v6, a2);
LABEL_22:
  ExReleaseResourceLite((PERESOURCE)&Flink[180]);
}
