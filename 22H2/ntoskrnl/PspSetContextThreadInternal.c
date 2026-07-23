/*
 * XREFs of PspSetContextThreadInternal @ 0x1406C0A5C
 * Callers:
 *     PspWow64SetContextThread @ 0x14067A140 (PspWow64SetContextThread.c)
 *     PspInitializeThunkContext @ 0x1406C07E0 (PspInitializeThunkContext.c)
 *     WbSetTrapFrame @ 0x1406C65CC (WbSetTrapFrame.c)
 *     NtSetContextThread @ 0x14090B3C0 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x14090B510 (PsSetContextThread.c)
 *     PspPicoSetContextThreadEx @ 0x14090C380 (PspPicoSetContextThreadEx.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E894 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     IoThreadToProcess @ 0x1402056C0 (IoThreadToProcess.c)
 *     KeInsertQueueApc @ 0x14025F120 (KeInsertQueueApc.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForGate @ 0x1402ED0C4 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x14032BE90 (KeInitializeGate.c)
 *     RtlGetExtendedContextLength @ 0x14033F480 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14033F500 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x14033F584 (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextRecord @ 0x14034049C (KeVerifyContextRecord.c)
 *     KeInitializeApc @ 0x140341E70 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140406E10 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     memset @ 0x140413800 (memset.c)
 *     EtwTiLogSetContextThread @ 0x14067B0D8 (EtwTiLogSetContextThread.c)
 *     RtlpReadExtendedContext @ 0x1406C0FC0 (RtlpReadExtendedContext.c)
 */

int __fastcall PspSetContextThreadInternal(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r13
  int result; // eax
  char v11; // di
  struct _KPROCESS *v12; // rbx
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rax
  ULONG v16; // edi
  unsigned __int64 v17; // rax
  void *v18; // rsp
  int v19; // edx
  int v20; // ecx
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v24[48]; // [rsp+50h] [rbp+10h] BYREF

  ContextEx = 0LL;
  memset(v24, 0, sizeof(v24));
  ContextLength = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v15 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v15;
  }
  else
  {
    ContextFlags = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&ContextFlags, a3);
  if ( result >= 0 )
  {
    if ( !a3 )
    {
      v24[15] = a2;
      goto LABEL_6;
    }
    v16 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v17 = ContextLength + 15LL;
      if ( v17 <= ContextLength )
        v17 = 0xFFFFFFFFFFFFFF0LL;
      v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
      v24[15] = &ContextFlags;
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext((PCONTEXT)v24[15], v16, &ContextEx);
      if ( result >= 0 )
      {
        v24[15] = (char *)ContextEx - 1232;
        LOBYTE(v19) = 1;
        result = RtlpReadExtendedContext(v20, v19, (_DWORD)ContextEx, v16, a2, 0LL);
        if ( result >= 0 )
        {
LABEL_6:
          if ( a4 && (Thread->MiscFlags & 0x400) != 0 )
            return -1073741776;
          BYTE1(v24[11]) &= ~4u;
          v11 = BYTE1(v24[11]);
          if ( a4 )
          {
            if ( (a5 & 2) == 0 )
            {
              v12 = IoThreadToProcess(CurrentThread);
              if ( IoThreadToProcess(Thread) == v12 )
              {
                v14 = KeVerifyContextRecord((__int64)Thread, v24[15], v13, 0LL, 0LL);
                if ( v14 < 0 )
                  return v14;
                v11 = BYTE1(v24[11]) | 4;
              }
            }
          }
          LOBYTE(v24[11]) = a4;
          if ( Thread == CurrentThread )
          {
            v24[8] = 1LL;
            v24[9] = Thread;
            BYTE1(v24[11]) = v11 & 0xFC | (2 * (a5 & 1));
            --CurrentThread->SpecialApcDisable;
            PspGetSetContextSpecialApc((__int64)v24, 0LL, 0LL, &v24[8]);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_15:
            v14 = HIDWORD(v24[11]);
            if ( v24[11] >= 0 && a3 == 1 && a4 == 1 )
              EtwTiLogSetContextThread(KeGetCurrentThread()->PreviousMode, (__int64)Thread, v24[15], ContextFlags);
            return v14;
          }
          BYTE1(v24[11]) = v11 & 0xFD | (2 * (a5 & 1)) | 1;
          KeInitializeGate((__int64)&v24[12]);
          KeInitializeApc((__int64)v24, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
          if ( KeInsertQueueApc((__int64)v24, 1LL, (__int64)Thread, 2) )
          {
            KeWaitForGate((__int64)&v24[12], 0);
            goto LABEL_15;
          }
          return -1073741823;
        }
      }
    }
  }
  return result;
}
