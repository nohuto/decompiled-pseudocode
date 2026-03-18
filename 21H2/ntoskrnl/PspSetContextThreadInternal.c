/*
 * XREFs of PspSetContextThreadInternal @ 0x1407043D0
 * Callers:
 *     PspInitializeThunkContext @ 0x140702CA4 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x140705578 (PspWow64SetContextThread.c)
 *     WbSetTrapFrame @ 0x1407E3C20 (WbSetTrapFrame.c)
 *     NtSetContextThread @ 0x1409B1A00 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x1409B1B30 (PsSetContextThread.c)
 *     PspPicoSetContextThreadEx @ 0x1409B29E0 (PspPicoSetContextThreadEx.c)
 * Callees:
 *     IoThreadToProcess @ 0x1402321F0 (IoThreadToProcess.c)
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextRecord @ 0x1402985E4 (KeVerifyContextRecord.c)
 *     RtlpSanitizeContextFlags @ 0x140298720 (RtlpSanitizeContextFlags.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140429670 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlpReadExtendedContext @ 0x140703290 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x14070592C (EtwTiLogSetContextThread.c)
 */

__int64 __fastcall PspSetContextThreadInternal(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 result; // rax
  char v11; // r10
  char v12; // si
  bool v13; // zf
  int v14; // edi
  struct _KPROCESS *v15; // rdi
  int v16; // r8d
  __int64 v17; // rax
  unsigned int v18; // esi
  unsigned __int64 v19; // rax
  void *v20; // rsp
  __int64 v21; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-20h]
  unsigned int v23; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v24; // [rsp+44h] [rbp+4h] BYREF
  __int64 v25; // [rsp+48h] [rbp+8h] BYREF
  __int64 v26; // [rsp+50h] [rbp+10h]
  _QWORD v27[11]; // [rsp+60h] [rbp+20h] BYREF
  char v28; // [rsp+B8h] [rbp+78h]
  _BYTE v29[295]; // [rsp+B9h] [rbp+79h] BYREF

  v26 = a2;
  v25 = 0LL;
  memset(v27, 0, sizeof(v27));
  memset(v29, 0, sizeof(v29));
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v17 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    v23 = *(_DWORD *)v17;
  }
  else
  {
    v23 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&v23, a3);
  if ( (int)result >= 0 )
  {
    if ( !a3 )
    {
      *(_QWORD *)&v29[31] = a2;
LABEL_6:
      if ( a4 && (Thread->MiscFlags & 0x400) != 0 )
        return (unsigned int)-1073741776;
      v29[0] &= ~4u;
      v12 = v29[0];
      if ( a4 )
      {
        if ( (v11 & 2) == 0 )
        {
          v15 = IoThreadToProcess(CurrentThread);
          if ( IoThreadToProcess(Thread) == v15 )
          {
            v14 = KeVerifyContextRecord((__int64)Thread, v26, v16, 0, 0LL);
            if ( v14 < 0 )
              return (unsigned int)v14;
            v12 = v29[0] | 4;
          }
        }
      }
      v28 = a4;
      if ( Thread == CurrentThread )
      {
        v27[8] = 1LL;
        v27[9] = Thread;
        v29[0] = v12 & 0xFC | (2 * (a5 & 1));
        --CurrentThread->SpecialApcDisable;
        Timeout = (PLARGE_INTEGER)&v27[9];
        PspGetSetContextSpecialApc((__int64)v27, 0LL, 0LL, &v27[8]);
        v13 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v13
          && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        goto LABEL_12;
      }
      v29[0] = v12 & 0xFD | (2 * (a5 & 1)) | 1;
      KeInitializeEvent((PRKEVENT)&v29[7], NotificationEvent, 0);
      KeInitializeApc((__int64)v27, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
      if ( KeInsertQueueApc((__int64)v27, 1LL, (__int64)Thread, 2) )
      {
        KeWaitForSingleObject(&v29[7], Executive, 0, 0, 0LL);
LABEL_12:
        v14 = *(_DWORD *)&v29[3];
        if ( *(int *)&v29[3] >= 0 && a3 == 1 && a4 == 1 )
          EtwTiLogSetContextThread(
            (unsigned __int8)KeGetCurrentThread()->PreviousMode,
            Thread,
            *(_QWORD *)&v29[31],
            v23,
            Timeout);
        return (unsigned int)v14;
      }
      return (unsigned int)-1073741823;
    }
    v18 = v23;
    result = RtlGetExtendedContextLength(v23, (__int64)&v24);
    if ( (int)result >= 0 )
    {
      v19 = v24 + 15LL;
      if ( v19 <= v24 )
        v19 = 0xFFFFFFFFFFFFFF0LL;
      v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
      *(_QWORD *)&v29[31] = &v23;
      memset(&v23, 0, v24);
      result = RtlInitializeExtendedContext(*(__int64 *)&v29[31], v18, (__int64)&v25);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)&v29[31] = v25 - 1232;
        result = RtlpReadExtendedContext(v21, 1, v25, v18, a2, 0LL);
        if ( (int)result >= 0 )
        {
          v26 = *(_QWORD *)&v29[31];
          v11 = a5;
          goto LABEL_6;
        }
      }
    }
  }
  return result;
}
