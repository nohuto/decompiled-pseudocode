/*
 * XREFs of KiRestoreSetContextState @ 0x1403FE7A0
 * Callers:
 *     NtContinueEx @ 0x1403FDCB0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FE0E0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1403FEC40 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FF5C0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403FF9B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FFDA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400190 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140400580 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404011C0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140402570 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140403B30 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140403F30 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1404045E0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140404D10 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405370 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x140406870 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140407D00 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14040AFC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040B640 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040D300 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14040E800 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040F200 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14040F880 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140411000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412280 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140412700 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KeContextToKframes @ 0x1403FD6A0 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiRestoreSetContextState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  struct _KTHREAD *Thread; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v11; // cf
  _QWORD v15[87]; // [rsp-298h] [rbp-3D0h] BYREF

  __writecr8(1uLL);
  _enable();
  Thread = KeGetCurrentThread()[1].WaitBlock[3].Thread;
  KeContextToKframes(v5 - 128, (__int64)v15, (__int64)Thread, (int)Thread->StackLimit, 1LL);
  _disable();
  __writecr8(0LL);
  _interlockedbittestandreset(&KeGetCurrentThread()->Header.Lock, 0x1Bu);
  if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 20) & 2) != 0 )
    ((void (__fastcall *)(_QWORD))KiUpdateStibpPairing)(0LL);
  if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    __asm { iretq }
  }
  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(CurrentThread) = 1;
      ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(CurrentThread);
    }
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    KiRestoreDebugRegisterState();
  v8 = *(_QWORD *)(v5 - 48);
  v9 = *(_QWORD *)(v5 - 56);
  __writegsbyte(0x856u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x864u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v11 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
  if ( v11 )
    __writemsr(0x49u, 1uLL);
  v11 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
  if ( v11 )
  {
    v15[21] = 0x1403FE9A1LL;
    v15[52] = 0x1403FEAB8LL;
    v15[51] = 0x1403FEAAFLL;
    v15[50] = 0x1403FEAA6LL;
    v15[49] = 0x1403FEA9DLL;
    v15[48] = 0x1403FEA94LL;
    v15[47] = 0x1403FEA8BLL;
    v15[46] = 0x1403FEA82LL;
    v15[45] = 0x1403FEA79LL;
    v15[44] = 0x1403FEA70LL;
    v15[43] = 0x1403FEA67LL;
    v15[42] = 0x1403FEA5ELL;
    v15[41] = 0x1403FEA55LL;
    v15[40] = 0x1403FEA4CLL;
    v15[39] = 0x1403FEA43LL;
    v15[38] = 0x1403FEA3ALL;
    v15[37] = 0x1403FEA31LL;
    v15[36] = 0x1403FEA28LL;
    v15[35] = 0x1403FEA1FLL;
    v15[34] = 0x1403FEA16LL;
    v15[33] = 0x1403FEA0DLL;
    v15[32] = 0x1403FEA04LL;
    v15[31] = 0x1403FE9FBLL;
    v15[30] = 0x1403FE9F2LL;
    v15[29] = 0x1403FE9E9LL;
    v15[28] = 0x1403FE9E0LL;
    v15[27] = 0x1403FE9D7LL;
    v15[26] = 0x1403FE9CELL;
    v15[25] = 0x1403FE9C5LL;
    v15[24] = 0x1403FE9BCLL;
    v15[23] = 0x1403FE9B3LL;
    v15[22] = 0x1403FE9AALL;
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 0x100) != 0 )
      __asm { verw    [rsp-298h+arg_2B0] }
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v9, v8, a5);
}
