/*
 * XREFs of PspSetContextThreadInternal @ 0x140647C9C
 * Callers:
 *     PspInitializeThunkContext @ 0x140647A20 (PspInitializeThunkContext.c)
 *     WbSetTrapFrame @ 0x14064D80C (WbSetTrapFrame.c)
 *     PspWow64SetContextThread @ 0x140695D20 (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x14090B370 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x14090B4C0 (PsSetContextThread.c)
 *     PspPicoSetContextThreadEx @ 0x14090C330 (PspPicoSetContextThreadEx.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E844 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     IoThreadToProcess @ 0x140205700 (IoThreadToProcess.c)
 *     KeInsertQueueApc @ 0x14025F8C0 (KeInsertQueueApc.c)
 *     RtlGetExtendedContextLength @ 0x140276470 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1402764F0 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140276574 (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextRecord @ 0x14027748C (KeVerifyContextRecord.c)
 *     KeInitializeApc @ 0x140278E60 (KeInitializeApc.c)
 *     KeWaitForGate @ 0x140299F74 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1402D2C10 (KeInitializeGate.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140407790 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1404084A0 (_alloca_probe.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlpReadExtendedContext @ 0x140648200 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x140696CB8 (EtwTiLogSetContextThread.c)
 */

__int64 __fastcall PspSetContextThreadInternal(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 result; // rax
  char v11; // di
  struct _KPROCESS *v12; // rbx
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edi
  unsigned __int64 v18; // rax
  void *v19; // rsp
  int v20; // edx
  int v21; // ecx
  _QWORD *v22; // [rsp+20h] [rbp-20h]
  unsigned int v23; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v24; // [rsp+44h] [rbp+4h] BYREF
  __int64 v25; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v26[48]; // [rsp+50h] [rbp+10h] BYREF

  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v16 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v23 = *(_DWORD *)v16;
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
      v26[15] = a2;
      goto LABEL_6;
    }
    v17 = v23;
    result = RtlGetExtendedContextLength(v23, (__int64)&v24);
    if ( (int)result >= 0 )
    {
      v18 = v24 + 15LL;
      if ( v18 <= v24 )
        v18 = 0xFFFFFFFFFFFFFF0LL;
      v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
      v26[15] = &v23;
      memset(&v23, 0, v24);
      result = RtlInitializeExtendedContext(v26[15], v17, (__int64)&v25);
      if ( (int)result >= 0 )
      {
        v26[15] = v25 - 1232;
        LOBYTE(v20) = 1;
        result = RtlpReadExtendedContext(v21, v20, v25, v17, a2, 0LL);
        if ( (int)result >= 0 )
        {
LABEL_6:
          if ( a4 && (Thread->MiscFlags & 0x400) != 0 )
            return (unsigned int)-1073741776;
          BYTE1(v26[11]) &= ~4u;
          v11 = BYTE1(v26[11]);
          if ( a4 )
          {
            if ( (a5 & 2) == 0 )
            {
              v12 = IoThreadToProcess(CurrentThread);
              if ( IoThreadToProcess(Thread) == v12 )
              {
                v14 = KeVerifyContextRecord((__int64)Thread, v26[15], v13, 0LL, 0LL);
                if ( v14 < 0 )
                  return (unsigned int)v14;
                v11 = BYTE1(v26[11]) | 4;
              }
            }
          }
          LOBYTE(v26[11]) = a4;
          if ( Thread == CurrentThread )
          {
            v26[8] = 1LL;
            v26[9] = Thread;
            BYTE1(v26[11]) = v11 & 0xFC | (2 * (a5 & 1));
            --CurrentThread->SpecialApcDisable;
            v22 = &v26[9];
            PspGetSetContextSpecialApc((__int64)v26, 0LL, 0LL, &v26[8]);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_15:
            v14 = HIDWORD(v26[11]);
            if ( v26[11] >= 0 && a3 == 1 && a4 == 1 )
            {
              LOBYTE(v15) = KeGetCurrentThread()->PreviousMode;
              EtwTiLogSetContextThread(v15, Thread, v26[15], v23, v22);
            }
            return (unsigned int)v14;
          }
          BYTE1(v26[11]) = v11 & 0xFD | (2 * (a5 & 1)) | 1;
          KeInitializeGate((__int64)&v26[12]);
          KeInitializeApc((__int64)v26, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
          if ( KeInsertQueueApc((__int64)v26, 1LL, (__int64)Thread, 2) )
          {
            KeWaitForGate((__int64)&v26[12], 0);
            goto LABEL_15;
          }
          return (unsigned int)-1073741823;
        }
      }
    }
  }
  return result;
}
