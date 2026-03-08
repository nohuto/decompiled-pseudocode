/*
 * XREFs of IopWriteFile @ 0x1406B3E10
 * Callers:
 *     NtWriteFile @ 0x1406B3A60 (NtWriteFile.c)
 *     IopIoRingDispatchWrite @ 0x140946CF4 (IopIoRingDispatchWrite.c)
 * Callees:
 *     IopValidateAndGetWriteParameters @ 0x1402400A0 (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x140240590 (IopAllocateAndPopulateWriteIrp.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     IopReleaseFileObjectLock @ 0x140267920 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmIsDriverVerifying @ 0x140303C10 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 *     VfFastIoCheckState @ 0x140AC8204 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140AC82DC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopWriteFile(
        _QWORD *Object,
        void *a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6,
        int a7,
        struct _KTHREAD **a8,
        unsigned __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14)
{
  void *v15; // rdi
  _OWORD *v16; // rsi
  __int64 v17; // r15
  unsigned int v18; // r12d
  __int64 result; // rax
  _DWORD *v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(_QWORD *, __int64 *, _QWORD, __int64, _DWORD, __int64, __int128 *, __int64); // r13
  char v25; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v27; // rcx
  unsigned __int64 v28; // rax
  PRKEVENT v29; // rcx
  int v30; // [rsp+20h] [rbp-F8h]
  int v31; // [rsp+28h] [rbp-F0h]
  __int128 v32; // [rsp+50h] [rbp-C8h] BYREF
  struct _KTHREAD *v33; // [rsp+60h] [rbp-B8h] BYREF
  __int16 v34; // [rsp+68h] [rbp-B0h]
  unsigned __int8 v35; // [rsp+6Ah] [rbp-AEh]
  int v36; // [rsp+6Bh] [rbp-ADh]
  char v37; // [rsp+6Fh] [rbp-A9h]
  _QWORD *v38; // [rsp+70h] [rbp-A8h]
  __int64 v39; // [rsp+78h] [rbp-A0h]
  PRKEVENT Event; // [rsp+80h] [rbp-98h]
  __int64 v41; // [rsp+88h] [rbp-90h]
  __int64 v42; // [rsp+90h] [rbp-88h]
  __int64 v43; // [rsp+98h] [rbp-80h]
  __int64 v44; // [rsp+A0h] [rbp-78h]
  int v45; // [rsp+A8h] [rbp-70h]
  int v46; // [rsp+ACh] [rbp-6Ch]
  __int64 v47; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-60h]
  __int64 v49; // [rsp+C0h] [rbp-58h]
  __int64 v50; // [rsp+C8h] [rbp-50h]
  int v51; // [rsp+D0h] [rbp-48h]
  int v52; // [rsp+D4h] [rbp-44h]
  __int64 v53; // [rsp+D8h] [rbp-40h]
  __int64 v54; // [rsp+E0h] [rbp-38h]
  IRP *v55; // [rsp+130h] [rbp+18h] BYREF

  v36 = 0;
  v37 = 0;
  v46 = 0;
  v48 = 0LL;
  v52 = 0;
  v15 = 0LL;
  v55 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v35 = 1;
  v38 = Object;
  v39 = 0LL;
  Event = 0LL;
  v41 = a3;
  v42 = a4;
  v16 = a5;
  v43 = (__int64)a5;
  v17 = a6;
  v44 = a6;
  v18 = a7;
  v45 = a7;
  v47 = 0LL;
  v49 = a11;
  v50 = a12;
  v51 = a13;
  v53 = a14;
  v54 = 0LL;
  result = IopValidateAndGetWriteParameters(&v33, a2, a8, a9, a10);
  if ( (int)result >= 0 )
  {
    if ( !HIBYTE(v34) || !Object[6] )
      goto LABEL_12;
    v22 = v39;
    v23 = *(_QWORD *)(*(_QWORD *)(v39 + 8) + 80LL);
    v32 = 0LL;
    v24 = *(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, _DWORD, __int64, __int128 *, __int64))(v23 + 24);
    if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(v39 + 8)) )
    {
      v15 = (void *)VfFastIoSnapState();
      v22 = v39;
    }
    LOBYTE(v21) = 1;
    v25 = v24(Object, &v47, v18, v21, v48, v17, &v32, v22);
    if ( v15 )
      VfFastIoCheckState(v15);
    if ( v25 && !(_DWORD)v32 )
    {
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->WriteOperationCount;
      __incgsdword(0x2EE0u);
      v27 = KeGetCurrentThread();
      v28 = DWORD2(v32);
      v27->WriteTransferCount += DWORD2(v32);
      __addgsqword(0x2EF0u, v28);
      *v16 = v32;
      v29 = Event;
      if ( Event )
      {
        if ( (Object[10] & 0x8000000) == 0 )
        {
          KeSetEvent(Event, 0, 0);
          v29 = Event;
        }
        ObfDereferenceObject(v29);
      }
      IopReleaseFileObjectLock((volatile __int32 *)Object);
      ObfDereferenceObject(Object);
      return (unsigned int)v32;
    }
    else
    {
LABEL_12:
      result = IopAllocateAndPopulateWriteIrp((__int64)&v33, &v55, v20);
      if ( (int)result >= 0 )
      {
        LOBYTE(v31) = HIBYTE(v34);
        LOBYTE(v30) = v34;
        return IopSynchronousServiceTail(v39, v55, Object, v35, v30, v31, 1);
      }
    }
  }
  return result;
}
