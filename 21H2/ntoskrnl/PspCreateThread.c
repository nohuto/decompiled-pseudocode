/*
 * XREFs of PspCreateThread @ 0x14063DA6C
 * Callers:
 *     NtCreateThreadEx @ 0x14063D5C0 (NtCreateThreadEx.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 *     NtCreateThread @ 0x140907170 (NtCreateThread.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140242F64 (PspIsProcessReadyForRemoteThread.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspMapThreadCreationFlags @ 0x14063DDEC (PspMapThreadCreationFlags.c)
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
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
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  char PreviousMode; // al
  _KPROCESS *v18; // rbx
  int Thread; // edi
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r13
  unsigned int inserted; // eax
  struct _EX_RUNDOWN_REF *p_Blink; // rcx
  unsigned int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int Flink_high; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  char v36; // [rsp+60h] [rbp-A0h]
  _DWORD v37[3]; // [rsp+64h] [rbp-9Ch] BYREF
  int v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v50; // [rsp+D0h] [rbp-30h]
  __int64 v51[50]; // [rsp+E0h] [rbp-20h] BYREF

  v37[0] = 0;
  v42 = a6;
  v47 = a7;
  v45 = a9;
  v39 = a11;
  v43 = a12;
  v46 = a3;
  v38 = a2;
  v48 = a1;
  v44 = a13;
  *(_QWORD *)&v37[1] = a8;
  memset(v51, 0, sizeof(v51));
  v50 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  DmaAdapter = 0LL;
  v18 = 0LL;
  v36 = PreviousMode;
  Thread = -1073741816;
  Object = 0LL;
  if ( a4 )
  {
    result = ObpReferenceObjectByHandleWithTag(a4, 0x72437350u, (__int64)&Object, 0LL, 0LL);
    v18 = (_KPROCESS *)Object;
    goto LABEL_5;
  }
  if ( *(_QWORD *)&v37[1] )
  {
    result = 3221225480LL;
LABEL_5:
    if ( (int)result < 0 )
      return result;
    goto LABEL_6;
  }
  ObfReferenceObjectWithTag(a5, 0x72437350u);
  v18 = a5;
LABEL_6:
  if ( v18 != Process && !PspIsProcessReadyForRemoteThread((ULONG_PTR)v18) )
    return 3221225473LL;
  v21 = v39;
  LOBYTE(v14) = 1;
  if ( v39 && *(_QWORD *)&v37[1] )
  {
    v21 = v39 & -(__int64)((v18->SecureState.SecureHandle & 1) != 0);
    v39 = v21;
  }
  if ( !v42
    && !v21
    && (((__int64)v18[2].ReadyListHead.Blink & 1) != 0
     || ((__int64)Process[2].ReadyListHead.Blink & 1) != 0
     || (HIDWORD(v18[2].ReadyListHead.Blink) & 0x4000) != 0
     || (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) != 0) )
  {
    return 3221225506LL;
  }
  if ( v36 )
  {
    Flink_high = HIDWORD(v18[2].Header.WaitListHead.Flink);
    if ( (Flink_high & 0x1000) != 0 || (Flink_high & 1) != 0 )
    {
LABEL_31:
      ObfDereferenceObjectWithTag(v18, 0x72437350u);
      return (unsigned int)Thread;
    }
  }
  if ( (HIDWORD(v18[2].Header.WaitListHead.Flink) & 1) != 0 && !*(_QWORD *)&v18[2].Affinity.Count && *(_QWORD *)&v37[1] )
  {
    Thread = -1073741790;
    goto LABEL_31;
  }
  PspMapThreadCreationFlags(a10, v37, v14);
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v18[1].ProfileListHead.Blink) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v22, v23, v24);
    Thread = -1073741558;
    goto LABEL_31;
  }
  ObfReferenceObjectWithTag(v18, 0x72437350u);
  v25 = v42;
  v49 = v45;
  Thread = PspAllocateThread(
             (ULONG_PTR)v18,
             *(__int64 *)&v37[1],
             (__int64)&v49,
             v39,
             v43,
             (__int64)v37,
             (__int64)&DmaAdapter,
             v44,
             (__int64)v51);
  if ( Thread < 0 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v18[1].ProfileListHead.Blink);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v33, v34, v35);
    goto LABEL_31;
  }
  ObfDereferenceObjectWithTag(v18, 0x72437350u);
  inserted = PspInsertThread((ULONG_PTR)DmaAdapter, (ULONG_PTR)v18, v38, v44, v25, v43, (__int64)v51, v48, v47);
  p_Blink = (struct _EX_RUNDOWN_REF *)&v18[1].ProfileListHead.Blink;
  v28 = inserted;
  ExReleaseRundownProtection(p_Blink);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v29, v30, v31);
  HalPutDmaAdapter(DmaAdapter);
  return v28;
}
