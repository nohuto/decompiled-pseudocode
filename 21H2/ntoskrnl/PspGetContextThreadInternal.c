/*
 * XREFs of PspGetContextThreadInternal @ 0x1407045D0
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     NtGetContextThread @ 0x1406E6600 (NtGetContextThread.c)
 *     PspInitializeThunkContext @ 0x140702CA4 (PspInitializeThunkContext.c)
 *     PspWow64GetContextThread @ 0x140704EF8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x140705578 (PspWow64SetContextThread.c)
 *     WbGetTrapFrame @ 0x1407E3868 (WbGetTrapFrame.c)
 *     WbSetTrapFrame @ 0x1407E3C20 (WbSetTrapFrame.c)
 *     PsGetContextThread @ 0x1408824B0 (PsGetContextThread.c)
 *     PspPicoGetContextThreadEx @ 0x1409B29B0 (PspPicoGetContextThreadEx.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
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
 *     RtlpWriteExtendedContext @ 0x140704E2C (RtlpWriteExtendedContext.c)
 */

__int64 __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  __int64 v11; // r15
  bool v12; // zf
  __int64 v13; // rax
  unsigned int v14; // r13d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  __int64 v19; // rcx
  unsigned int v20; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v21; // [rsp+44h] [rbp+4h] BYREF
  __int64 v22; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v23[11]; // [rsp+50h] [rbp+10h] BYREF
  char v24; // [rsp+A8h] [rbp+68h]
  _BYTE v25[295]; // [rsp+A9h] [rbp+69h] BYREF
  _OWORD v26[2]; // [rsp+1D0h] [rbp+190h] BYREF

  v22 = 0LL;
  memset(v23, 0, sizeof(v23));
  memset(v25, 0, sizeof(v25));
  v21 = 0;
  memset(v26, 0, sizeof(v26));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v13 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    v20 = *(_DWORD *)v13;
  }
  else
  {
    v20 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&v20, a3);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v14 = v20;
      result = RtlGetExtendedContextLength(v20, (__int64)&v21);
      if ( (int)result < 0 )
        return result;
      v15 = v21 + 15LL;
      if ( v15 <= v21 )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
      v17 = alloca(v16);
      v18 = alloca(v16);
      *(_QWORD *)&v25[31] = &v20;
      result = RtlInitializeExtendedContext((__int64)&v20, v14, (__int64)&v22);
      if ( (int)result < 0 )
        return result;
      v11 = v22;
      *(_QWORD *)&v25[31] = v22 - 1232;
      result = RtlpReadExtendedContext(v19, 0, v22, v14, a2, (int *)v26);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      *(_QWORD *)&v25[31] = a2;
      v11 = a2 + 1232;
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      return 3221225520LL;
    v24 = a4;
    if ( (struct _KTHREAD *)a1 == CurrentThread )
    {
      v23[8] = 0LL;
      v23[9] = a1;
      v25[0] = v25[0] & 0xFC | (2 * (a5 & 1));
      --CurrentThread->SpecialApcDisable;
      PspGetSetContextSpecialApc((__int64)v23, 0LL, 0LL, &v23[8]);
      v12 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v12
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      v25[0] = v25[0] & 0xFD | (2 * (a5 & 1)) | 1;
      KeInitializeEvent((PRKEVENT)&v25[7], NotificationEvent, 0);
      KeInitializeApc((__int64)v23, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
      if ( !KeInsertQueueApc((__int64)v23, 0LL, a1, 2) )
        return 3221225473LL;
      KeWaitForSingleObject(&v25[7], Executive, 0, 0, 0LL);
    }
    result = *(unsigned int *)&v25[3];
    if ( *(int *)&v25[3] >= 0 && *(_QWORD *)&v25[31] != a2 )
      return RtlpWriteExtendedContext(
               *(_DWORD *)&v25[31],
               (int)a2 + 1232,
               (unsigned int)v26,
               *(_DWORD *)(*(_QWORD *)&v25[31] + 48LL),
               v11);
  }
  return result;
}
