/*
 * XREFs of PspCreateThread @ 0x1406C1A0C
 * Callers:
 *     NtCreateThreadEx @ 0x1406C1590 (NtCreateThreadEx.c)
 *     PsCreateSystemThreadEx @ 0x1406FDA60 (PsCreateSystemThreadEx.c)
 *     NtCreateThread @ 0x140907060 (NtCreateThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PspIsProcessReadyForRemoteThread @ 0x14031DD54 (PspIsProcessReadyForRemoteThread.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     PspMapThreadCreationFlags @ 0x1406C1D8C (PspMapThreadCreationFlags.c)
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 */

__int64 __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        _KPROCESS *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  char PreviousMode; // al
  _KPROCESS *v20; // rbx
  int Thread; // edi
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // r13
  unsigned int inserted; // eax
  struct _EX_RUNDOWN_REF *p_Blink; // rcx
  unsigned int v27; // ebx
  int Flink_high; // eax
  char v29; // [rsp+60h] [rbp-A0h]
  _DWORD v30[3]; // [rsp+64h] [rbp-9Ch] BYREF
  int v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44[50]; // [rsp+E0h] [rbp-20h] BYREF

  v30[0] = 0;
  v35 = a6;
  v40 = a7;
  v38 = a9;
  v32 = a11;
  v36 = a12;
  v39 = a3;
  v31 = a2;
  v41 = a1;
  v37 = a13;
  *(_QWORD *)&v30[1] = a8;
  memset(v44, 0, sizeof(v44));
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  DmaAdapter = 0LL;
  v20 = 0LL;
  v29 = PreviousMode;
  Thread = -1073741816;
  Object = 0LL;
  if ( a4 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a4,
               2,
               (__int64)PsProcessType,
               PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    v20 = (_KPROCESS *)Object;
    goto LABEL_5;
  }
  if ( *(_QWORD *)&v30[1] )
  {
    result = 3221225480LL;
LABEL_5:
    if ( (int)result < 0 )
      return result;
    goto LABEL_6;
  }
  ObfReferenceObjectWithTag(a5, 0x72437350u);
  v20 = a5;
LABEL_6:
  if ( v20 != Process && !PspIsProcessReadyForRemoteThread((__int64)v20, v14, v15, v16) )
    return 3221225473LL;
  v23 = v32;
  if ( v32 && *(_QWORD *)&v30[1] )
  {
    v23 = v32 & -(__int64)((v20->SecureState.SecureHandle & 1) != 0);
    v32 = v23;
  }
  if ( !v35
    && !v23
    && (((__int64)v20[2].ReadyListHead.Blink & 1) != 0
     || ((__int64)Process[2].ReadyListHead.Blink & 1) != 0
     || (HIDWORD(v20[2].ReadyListHead.Blink) & 0x4000) != 0
     || (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) != 0) )
  {
    return 3221225506LL;
  }
  if ( v29 )
  {
    Flink_high = HIDWORD(v20[2].Header.WaitListHead.Flink);
    if ( (Flink_high & 0x1000) != 0 || (Flink_high & 1) != 0 )
    {
LABEL_31:
      ObfDereferenceObjectWithTag(v20, 0x72437350u);
      return (unsigned int)Thread;
    }
  }
  if ( (HIDWORD(v20[2].Header.WaitListHead.Flink) & 1) != 0 && !*(_QWORD *)&v20[2].Affinity.Count && *(_QWORD *)&v30[1] )
  {
    Thread = -1073741790;
    goto LABEL_31;
  }
  PspMapThreadCreationFlags(a10, v30);
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v20[1].ProfileListHead.Blink) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    Thread = -1073741558;
    goto LABEL_31;
  }
  ObfReferenceObjectWithTag(v20, 0x72437350u);
  v24 = v35;
  v42 = v38;
  Thread = PspAllocateThread(
             (ULONG_PTR)v20,
             *(__int64 *)&v30[1],
             (__int64)&v42,
             v32,
             v36,
             (__int64)v30,
             (__int64)&DmaAdapter,
             v37,
             (__int64)v44);
  if ( Thread < 0 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v20[1].ProfileListHead.Blink);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_31;
  }
  ObfDereferenceObjectWithTag(v20, 0x72437350u);
  inserted = PspInsertThread(DmaAdapter, (ULONG_PTR)v20, v31, v37, v24, v36, (__int64)v44, v41, v40);
  p_Blink = (struct _EX_RUNDOWN_REF *)&v20[1].ProfileListHead.Blink;
  v27 = inserted;
  ExReleaseRundownProtection(p_Blink);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  HalPutDmaAdapter(DmaAdapter);
  return v27;
}
