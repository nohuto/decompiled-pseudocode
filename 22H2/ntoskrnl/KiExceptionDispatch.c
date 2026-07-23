/*
 * XREFs of KiExceptionDispatch @ 0x140411DC0
 * Callers:
 *     KiDivideErrorFault @ 0x140409C00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14040A000 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14040A940 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14040AC80 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14040AFC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040B640 (KiInvalidOpcodeFault.c)
 *     KiSegmentNotPresentFault @ 0x14040C880 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14040CC40 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14040CFC0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14040D300 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14040DAC0 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14040DE80 (KiAlignmentFault.c)
 *     KiXmmException @ 0x14040EE40 (KiXmmException.c)
 *     KiControlProtectionFault @ 0x14040F880 (KiControlProtectionFault.c)
 *     KiRaiseAssertion @ 0x140410200 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140410540 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x140410B00 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140411000 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140A15E40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiDispatchException @ 0x14033C330 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiExceptionDispatchOnExceptionStack @ 0x1403FE680 (KiExceptionDispatchOnExceptionStack.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiUmsExceptionEntry @ 0x140412F40 (KiUmsExceptionEntry.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiExceptionDispatch(int a1, unsigned int a2, void *a3, unsigned __int64 a4, char a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  __int128 v14; // xmm6
  __int128 v15; // xmm7
  __int128 v16; // xmm8
  __int128 v17; // xmm9
  __int128 v18; // xmm10
  __int128 v19; // xmm11
  __int128 v20; // xmm12
  __int128 v21; // xmm13
  __int128 v22; // xmm14
  __int128 v23; // xmm15
  __int64 v24; // r8
  unsigned __int64 CurrentIrql; // r10
  char *v26; // r10
  char *IsrStack; // r10
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v36; // cf
  _BYTE v40[32]; // [rsp-338h] [rbp-510h] BYREF
  __int64 v41; // [rsp-318h] [rbp-4F0h]
  int v42; // [rsp-310h] [rbp-4E8h]
  __int128 v43; // [rsp-308h] [rbp-4E0h]
  __int128 v44; // [rsp-2F8h] [rbp-4D0h]
  __int128 v45; // [rsp-2E8h] [rbp-4C0h]
  __int128 v46; // [rsp-2D8h] [rbp-4B0h]
  __int128 v47; // [rsp-2C8h] [rbp-4A0h]
  __int128 v48; // [rsp-2B8h] [rbp-490h]
  __int128 v49; // [rsp-2A8h] [rbp-480h]
  __int128 v50; // [rsp-298h] [rbp-470h]
  __int128 v51; // [rsp-288h] [rbp-460h]
  __int128 v52; // [rsp-278h] [rbp-450h]
  int v53; // [rsp-268h] [rbp-440h]
  int v54; // [rsp-260h] [rbp-438h]
  int v55; // [rsp-258h] [rbp-430h]
  int v56; // [rsp-250h] [rbp-428h]
  int v57; // [rsp-248h] [rbp-420h]
  int v58; // [rsp-240h] [rbp-418h]
  __int64 v59; // [rsp-238h] [rbp-410h]
  __int64 v60; // [rsp-230h] [rbp-408h]
  __int64 v61; // [rsp-228h] [rbp-400h]
  __int64 v62; // [rsp-220h] [rbp-3F8h]
  __int64 v63; // [rsp-218h] [rbp-3F0h]
  __int64 v64; // [rsp-210h] [rbp-3E8h]
  EXCEPTION_RECORD v65; // [rsp-200h] [rbp-3D8h] BYREF
  __int64 v66; // [rsp-168h] [rbp-340h]
  __int64 v67; // [rsp-160h] [rbp-338h]
  __int64 v68; // [rsp-158h] [rbp-330h]
  __int64 v69; // [rsp-150h] [rbp-328h]
  __int64 v70; // [rsp-148h] [rbp-320h]
  __int64 v71; // [rsp-140h] [rbp-318h]
  __int64 v72; // [rsp-138h] [rbp-310h]
  __int64 v73; // [rsp-130h] [rbp-308h]
  __int64 v74; // [rsp-128h] [rbp-300h]
  __int64 v75; // [rsp-120h] [rbp-2F8h]
  __int64 v76; // [rsp-118h] [rbp-2F0h]
  __int64 v77; // [rsp-110h] [rbp-2E8h]
  __int64 v78; // [rsp-108h] [rbp-2E0h]
  __int64 v79; // [rsp-100h] [rbp-2D8h]
  __int64 v80; // [rsp-F8h] [rbp-2D0h]

  v43 = v14;
  v44 = v15;
  v45 = v16;
  v46 = v17;
  v47 = v18;
  v48 = v19;
  v49 = v20;
  v50 = v21;
  v51 = v22;
  v52 = v23;
  v59 = v5;
  v60 = v7;
  v61 = v8;
  v62 = v11;
  v63 = v12;
  v64 = v13;
  if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) && (*(_BYTE *)(v6 + 240) & 1) != 0 )
    KiUmsExceptionEntry(
      a1,
      a2,
      (_DWORD)a3,
      a4,
      v41,
      v42,
      v43,
      DWORD2(v43),
      v44,
      DWORD2(v44),
      v45,
      DWORD2(v45),
      v46,
      DWORD2(v46),
      v47,
      DWORD2(v47),
      v48,
      DWORD2(v48),
      v49,
      DWORD2(v49),
      v50,
      DWORD2(v50),
      v51,
      DWORD2(v51),
      v52,
      DWORD2(v52),
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  v65.ExceptionCode = a1;
  v65.ExceptionFlags = 0;
  v65.ExceptionRecord = 0LL;
  v65.ExceptionAddress = a3;
  v65.NumberParameters = a2;
  v65.ExceptionInformation[0] = a4;
  v65.ExceptionInformation[1] = v9;
  v65.ExceptionInformation[2] = v10;
  LOBYTE(a4) = *(_BYTE *)(v6 + 240) & 1;
  LOBYTE(v41) = 1;
  v24 = v6 - 128;
  if ( (_BYTE)a4 )
    goto LABEL_14;
  CurrentIrql = KeGetCurrentIrql();
  if ( (*(_DWORD *)(v6 + 248) & 0x200) == 0 )
    CurrentIrql = 2LL;
  if ( CurrentIrql < 2
    || KeGetPcr()->Prcb.ExceptionStackActive
    || (v26 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80, v40 <= v26) && v40 >= v26 - 24576
    || (IsrStack = (char *)KeGetPcr()->Prcb.IsrStack, v40 <= IsrStack) && v40 >= IsrStack - 24576 )
  {
LABEL_14:
    KiDispatchException(&v65, (unsigned __int64)v40, v24, a4, v41);
  }
  else
  {
    KiExceptionDispatchOnExceptionStack((int)&v65, (int)v40, v24, a4, v41, v42, v43, *((__int64 *)&v43 + 1));
  }
  _disable();
  if ( (*(_BYTE *)(v6 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v6 - 84));
    __asm { iretq }
  }
  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  while ( (KeGetCurrentThread()->ApcState.UserApcPendingAll & 3) != 0 )
  {
    __writecr8(1uLL);
    _enable();
    KiInitiateUserApc();
    _disable();
    __writecr8(0LL);
  }
  if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 20) & 2) != 0 )
    KiUpdateStibpPairing(0LL);
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)CurrentThread, v28, v29, v30, v41);
  v32 = KeGetCurrentThread();
  if ( (v32->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v32->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v32 = KeGetCurrentThread();
    }
    if ( (v32->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v32) = 1;
      KiUmsExit(v32);
    }
  }
  _mm_setcsr(*(_DWORD *)(v6 - 84));
  if ( *(_WORD *)(v6 + 128) )
    KiRestoreDebugRegisterState(v32);
  v33 = *(_QWORD *)(v6 - 48);
  v34 = *(_QWORD *)(v6 - 56);
  __writegsbyte(0x856u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x864u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v36 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
  if ( v36 )
    __writemsr(0x49u, 1uLL);
  v36 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
  if ( v36 )
  {
    v65.ExceptionAddress = &loc_140412084;
    v80 = 0x14041219BLL;
    v79 = 0x140412192LL;
    v78 = 0x140412189LL;
    v77 = 0x140412180LL;
    v76 = 0x140412177LL;
    v75 = 0x14041216ELL;
    v74 = 0x140412165LL;
    v73 = 0x14041215CLL;
    v72 = 0x140412153LL;
    v71 = 0x14041214ALL;
    v70 = 0x140412141LL;
    v69 = 0x140412138LL;
    v68 = 0x14041212FLL;
    v67 = 0x140412126LL;
    v66 = 0x14041211DLL;
    v65.ExceptionInformation[14] = 0x140412114LL;
    v65.ExceptionInformation[13] = 0x14041210BLL;
    v65.ExceptionInformation[12] = 0x140412102LL;
    v65.ExceptionInformation[11] = 0x1404120F9LL;
    v65.ExceptionInformation[10] = 0x1404120F0LL;
    v65.ExceptionInformation[9] = 0x1404120E7LL;
    v65.ExceptionInformation[8] = 0x1404120DELL;
    v65.ExceptionInformation[7] = 0x1404120D5LL;
    v65.ExceptionInformation[6] = 0x1404120CCLL;
    v65.ExceptionInformation[5] = 0x1404120C3LL;
    v65.ExceptionInformation[4] = 0x1404120BALL;
    v65.ExceptionInformation[3] = 0x1404120B1LL;
    v65.ExceptionInformation[2] = 0x1404120A8LL;
    v65.ExceptionInformation[1] = 0x14041209FLL;
    v65.ExceptionInformation[0] = 0x140412096LL;
    *(_QWORD *)&v65.NumberParameters = 0x14041208DLL;
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 0x100) != 0 )
      __asm { verw    [rsp-338h+arg_350] }
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v6 - 72), *(_QWORD *)(v6 - 64), v34, v33, a5);
}
