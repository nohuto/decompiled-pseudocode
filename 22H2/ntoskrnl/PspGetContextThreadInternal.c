/*
 * XREFs of PspGetContextThreadInternal @ 0x1406C0C14
 * Callers:
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 *     PspWow64SetContextThread @ 0x14067A140 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x14067A4EC (PspWow64GetContextThread.c)
 *     NtGetContextThread @ 0x1406A0CD0 (NtGetContextThread.c)
 *     PspInitializeThunkContext @ 0x1406C07E0 (PspInitializeThunkContext.c)
 *     WbGetTrapFrame @ 0x1406C60A0 (WbGetTrapFrame.c)
 *     WbSetTrapFrame @ 0x1406C65CC (WbSetTrapFrame.c)
 *     PsGetContextThread @ 0x14090B4F0 (PsGetContextThread.c)
 *     PspPicoGetContextThreadEx @ 0x14090C350 (PspPicoGetContextThreadEx.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E894 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14025F120 (KeInsertQueueApc.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForGate @ 0x1402ED0C4 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x14032BE90 (KeInitializeGate.c)
 *     RtlGetExtendedContextLength @ 0x14033F480 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14033F500 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x14033F584 (RtlpSanitizeContextFlags.c)
 *     KeInitializeApc @ 0x140341E70 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140406E10 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlpWriteExtendedContext @ 0x14067A7B8 (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x1406C0FC0 (RtlpReadExtendedContext.c)
 */

int __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r12
  int result; // eax
  PCONTEXT_EX v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  void *v15; // rsp
  void *v16; // rsp
  int v17; // ecx
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v21[48]; // [rsp+50h] [rbp+10h] BYREF
  __int128 v22; // [rsp+1D0h] [rbp+190h] BYREF
  __int64 v23; // [rsp+1E0h] [rbp+1A0h]

  ContextEx = 0LL;
  memset(v21, 0, sizeof(v21));
  ContextLength = 0;
  v22 = 0LL;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v12 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v12;
  }
  else
  {
    ContextFlags = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&ContextFlags, a3);
  if ( result >= 0 )
  {
    if ( a3 )
    {
      result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
      if ( result < 0 )
        return result;
      v13 = ContextLength + 15LL;
      if ( v13 <= ContextLength )
        v13 = 0xFFFFFFFFFFFFFF0LL;
      v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
      v15 = alloca(v14);
      v16 = alloca(v14);
      v21[15] = &ContextFlags;
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, ContextFlags, &ContextEx);
      if ( result < 0 )
        return result;
      v11 = ContextEx;
      v21[15] = (char *)ContextEx - 1232;
      result = RtlpReadExtendedContext(v17, 0, (_DWORD)ContextEx, ContextFlags, a2, (__int64)&v22);
      if ( result < 0 )
        return result;
    }
    else
    {
      v21[15] = a2;
      v11 = (PCONTEXT_EX)(a2 + 1232);
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      return -1073741776;
    LOBYTE(v21[11]) = a4;
    if ( (struct _KTHREAD *)a1 == CurrentThread )
    {
      v21[8] = 0LL;
      v21[9] = a1;
      BYTE1(v21[11]) = BYTE1(v21[11]) & 0xFC | (2 * (a5 & 1));
      --CurrentThread->SpecialApcDisable;
      PspGetSetContextSpecialApc((__int64)v21, 0LL, 0LL, &v21[8]);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      BYTE1(v21[11]) = BYTE1(v21[11]) & 0xFD | (2 * (a5 & 1)) | 1;
      KeInitializeGate((__int64)&v21[12]);
      KeInitializeApc((__int64)v21, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
      if ( !KeInsertQueueApc((__int64)v21, 0LL, a1, 2) )
        return -1073741823;
      KeWaitForGate((__int64)&v21[12], 0);
    }
    result = HIDWORD(v21[11]);
    if ( v21[11] >= 0 && v21[15] != a2 )
      return RtlpWriteExtendedContext(v21[15], a2 + 1232, (__int64)&v22, *(_DWORD *)(v21[15] + 48LL), (__int64)v11);
  }
  return result;
}
