/*
 * XREFs of PspSetContextThreadInternal @ 0x1407EE340
 * Callers:
 *     WbSetTrapFrame @ 0x1406AF9A4 (WbSetTrapFrame.c)
 *     PspWow64SetContextThread @ 0x14077C1CC (PspWow64SetContextThread.c)
 *     PspInitializeThunkContext @ 0x1407EDF4C (PspInitializeThunkContext.c)
 *     NtSetContextThread @ 0x1409B0F20 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x1409B1050 (PsSetContextThread.c)
 *     PspPicoSetContextThreadEx @ 0x1409B2BF0 (PspPicoSetContextThreadEx.c)
 * Callees:
 *     KeInitializeApc @ 0x140237E20 (KeInitializeApc.c)
 *     IoThreadToProcess @ 0x140248470 (IoThreadToProcess.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     RtlInitializeExtendedContext @ 0x140364A10 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140364A90 (RtlGetExtendedContextLength.c)
 *     RtlpSanitizeContextFlags @ 0x140364D9C (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextRecord @ 0x1403653D4 (KeVerifyContextRecord.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140420250 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwTiLogSetContextThread @ 0x14077D1C4 (EtwTiLogSetContextThread.c)
 *     RtlpReadExtendedContext @ 0x1407EDC30 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall PspSetContextThreadInternal(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  char v11; // di
  bool v12; // zf
  int Blink_high; // ebx
  struct _KPROCESS *v14; // rbx
  int v15; // r8d
  __int64 v16; // rax
  unsigned int v17; // edi
  unsigned __int64 v18; // rax
  void *v19; // rsp
  __int64 v20; // rcx
  unsigned int v21; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v22; // [rsp+44h] [rbp+4h] BYREF
  __int64 v23; // [rsp+48h] [rbp+8h] BYREF
  struct _KEVENT v24[16]; // [rsp+50h] [rbp+10h] BYREF

  v23 = 0LL;
  memset(v24, 0, sizeof(v24));
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v16 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v21 = *(_DWORD *)v16;
  }
  else
  {
    v21 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&v21, a3);
  if ( (int)result >= 0 )
  {
    if ( !a3 )
    {
      *(_QWORD *)&v24[5].Header.Lock = a2;
      goto LABEL_6;
    }
    v17 = v21;
    result = RtlGetExtendedContextLength(v21, (__int64)&v22);
    if ( (int)result >= 0 )
    {
      v18 = v22 + 15LL;
      if ( v18 <= v22 )
        v18 = 0xFFFFFFFFFFFFFF0LL;
      v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
      *(_QWORD *)&v24[5].Header.Lock = &v21;
      memset(&v21, 0, v22);
      result = RtlInitializeExtendedContext(*(__int64 *)&v24[5].Header.Lock, v17, (__int64)&v23);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)&v24[5].Header.Lock = v23 - 1232;
        result = RtlpReadExtendedContext(v20, 1, v23, v17, a2, 0LL);
        if ( (int)result >= 0 )
        {
LABEL_6:
          if ( a4 && (Thread->MiscFlags & 0x400) != 0 )
            return (unsigned int)-1073741776;
          BYTE1(v24[3].Header.WaitListHead.Blink) &= ~4u;
          v11 = BYTE1(v24[3].Header.WaitListHead.Blink);
          if ( a4 )
          {
            if ( (a5 & 2) == 0 )
            {
              v14 = IoThreadToProcess(CurrentThread);
              if ( IoThreadToProcess(Thread) == v14 )
              {
                Blink_high = KeVerifyContextRecord((__int64)Thread, *(__int64 *)&v24[5].Header.Lock, v15, 0, 0LL);
                if ( Blink_high < 0 )
                  return (unsigned int)Blink_high;
                v11 = BYTE1(v24[3].Header.WaitListHead.Blink) | 4;
              }
            }
          }
          LOBYTE(v24[3].Header.WaitListHead.Blink) = a4;
          if ( Thread == CurrentThread )
          {
            v24[2].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)1;
            *(_QWORD *)&v24[3].Header.Lock = Thread;
            BYTE1(v24[3].Header.WaitListHead.Blink) = v11 & 0xFC | (2 * (a5 & 1));
            --CurrentThread->SpecialApcDisable;
            PspGetSetContextSpecialApc((__int64)v24, 0LL, 0LL, &v24[2].Header.WaitListHead.Blink);
            v12 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v12
              && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            goto LABEL_14;
          }
          BYTE1(v24[3].Header.WaitListHead.Blink) = v11 & 0xFD | (2 * (a5 & 1)) | 1;
          KeInitializeEvent(&v24[4], NotificationEvent, 0);
          KeInitializeApc((__int64)v24, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
          if ( (unsigned __int8)KeInsertQueueApc((__int64)v24, 1LL, Thread, 2u) )
          {
            KeWaitForSingleObject(&v24[4], Executive, 0, 0, 0LL);
LABEL_14:
            Blink_high = HIDWORD(v24[3].Header.WaitListHead.Blink);
            if ( SHIDWORD(v24[3].Header.WaitListHead.Blink) >= 0 && a3 == 1 && a4 == 1 )
              EtwTiLogSetContextThread(
                KeGetCurrentThread()->PreviousMode,
                (__int64)Thread,
                *(__int64 *)&v24[5].Header.Lock,
                v21);
            return (unsigned int)Blink_high;
          }
          return (unsigned int)-1073741823;
        }
      }
    }
  }
  return result;
}
