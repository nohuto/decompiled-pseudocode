/*
 * XREFs of PspGetContextThreadInternal @ 0x14063CC44
 * Callers:
 *     PspWow64SetContextThread @ 0x1405F5270 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1405F561C (PspWow64GetContextThread.c)
 *     NtGetContextThread @ 0x14061D120 (NtGetContextThread.c)
 *     PspInitializeThunkContext @ 0x14063C810 (PspInitializeThunkContext.c)
 *     WbGetTrapFrame @ 0x140642100 (WbGetTrapFrame.c)
 *     WbSetTrapFrame @ 0x14064262C (WbSetTrapFrame.c)
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     PsGetContextThread @ 0x14090B600 (PsGetContextThread.c)
 *     PspPicoGetContextThreadEx @ 0x14090C460 (PspPicoGetContextThreadEx.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E9A4 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x140251190 (KeInitializeGate.c)
 *     RtlGetExtendedContextLength @ 0x140264410 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140264490 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140264514 (RtlpSanitizeContextFlags.c)
 *     KeInitializeApc @ 0x140266E00 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x14027E260 (KeInsertQueueApc.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140407970 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpWriteExtendedContext @ 0x1405F58E8 (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x14063CFF0 (RtlpReadExtendedContext.c)
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
