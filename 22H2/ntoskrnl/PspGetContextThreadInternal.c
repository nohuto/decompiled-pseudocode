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

__int64 __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  void *v15; // rsp
  void *v16; // rsp
  int v17; // ecx
  unsigned int v18; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v19; // [rsp+44h] [rbp+4h] BYREF
  __int64 v20; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v21[48]; // [rsp+50h] [rbp+10h] BYREF
  __int128 v22; // [rsp+1D0h] [rbp+190h] BYREF
  __int64 v23; // [rsp+1E0h] [rbp+1A0h]

  v20 = 0LL;
  memset(v21, 0, sizeof(v21));
  v19 = 0;
  v22 = 0LL;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v12 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    v18 = *(_DWORD *)v12;
  }
  else
  {
    v18 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&v18, a3);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      result = RtlGetExtendedContextLength(v18, (__int64)&v19);
      if ( (int)result < 0 )
        return result;
      v13 = v19 + 15LL;
      if ( v13 <= v19 )
        v13 = 0xFFFFFFFFFFFFFF0LL;
      v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
      v15 = alloca(v14);
      v16 = alloca(v14);
      v21[15] = &v18;
      result = RtlInitializeExtendedContext((__int64)&v18, v18, (__int64)&v20);
      if ( (int)result < 0 )
        return result;
      v11 = v20;
      v21[15] = v20 - 1232;
      result = RtlpReadExtendedContext(v17, 0, v20, v18, a2, (__int64)&v22);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v21[15] = a2;
      v11 = a2 + 1232;
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      return 3221225520LL;
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
        return 3221225473LL;
      KeWaitForGate((__int64)&v21[12], 0);
    }
    result = HIDWORD(v21[11]);
    if ( v21[11] >= 0 && v21[15] != a2 )
      return RtlpWriteExtendedContext(v21[15], a2 + 1232, (__int64)&v22, *(_DWORD *)(v21[15] + 48LL), v11);
  }
  return result;
}
