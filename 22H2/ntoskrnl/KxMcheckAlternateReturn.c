/*
 * XREFs of KxMcheckAlternateReturn @ 0x14040E800
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x140A14A40 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x14040E800 (KxMcheckAlternateReturn.c)
 *     KiUmsTrapEntry @ 0x140412B80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x1405265C0 (KiMcheckAlternateReturn.c)
 */

__int64 __fastcall KxMcheckAlternateReturn(__int64 a1, unsigned __int64 BpbState, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int128 v13; // xmm5
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v15; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  ULONG64 v17; // rax
  bool v18; // zf
  struct _KTHREAD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *v23; // rcx
  struct _KTHREAD *v24; // rcx
  int v25; // r9d
  int v26; // r8d
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v28; // cf
  __int64 v32; // [rsp+0h] [rbp-90h] BYREF
  __int64 v33; // [rsp+8h] [rbp-88h]
  __int64 v34; // [rsp+10h] [rbp-80h]
  __int64 v35; // [rsp+18h] [rbp-78h]
  __int64 v36; // [rsp+20h] [rbp-70h]
  __int64 v37; // [rsp+28h] [rbp-68h]
  __int64 v38; // [rsp+30h] [rbp-60h]
  __int64 v39; // [rsp+38h] [rbp-58h]
  __int64 v40; // [rsp+40h] [rbp-50h]
  __int64 v41; // [rsp+48h] [rbp-48h]
  __int64 v42; // [rsp+50h] [rbp-40h]
  __int64 v43; // [rsp+58h] [rbp-38h]
  __int64 v44; // [rsp+60h] [rbp-30h]
  __int64 v45; // [rsp+68h] [rbp-28h]
  __int64 v46; // [rsp+70h] [rbp-20h]
  __int64 v47; // [rsp+78h] [rbp-18h]
  __int128 v48; // [rsp+80h] [rbp-10h]
  __int128 v49; // [rsp+90h] [rbp+0h]
  __int128 v50; // [rsp+A0h] [rbp+10h]
  __int128 v51; // [rsp+B0h] [rbp+20h]
  __int128 v52; // [rsp+C0h] [rbp+30h]
  __int128 v53; // [rsp+D0h] [rbp+40h]
  __int64 v54; // [rsp+E0h] [rbp+50h]
  __int64 v55; // [rsp+E8h] [rbp+58h]
  __int64 v56; // [rsp+F0h] [rbp+60h]
  __int64 v57; // [rsp+F8h] [rbp+68h]
  __int64 v58; // [rsp+100h] [rbp+70h]
  __int16 v59; // [rsp+110h] [rbp+80h]
  char v60; // [rsp+180h] [rbp+F0h]

  BYTE3(v39) = 1;
  v40 = v5;
  v41 = a1;
  v42 = BpbState;
  v43 = a3;
  v44 = a4;
  v45 = v6;
  v46 = v7;
  if ( (v60 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v15 = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
    __writegsqword(0x858u, v15);
    __writegsword(0x852u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOWORD(v15) = KeGetPcr()->Prcb.BpbState;
    __writegsword(0x854u, v15);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x864u, BpbKernelSpecCtrl);
      v15 = 72LL;
      HIDWORD(BpbState) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(BpbState) = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v15 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
      LODWORD(BpbState) = (unsigned __int16)BpbState;
    }
    if ( (BpbState & 2) != 0 )
    {
      v33 = 0x14040E927LL;
      v58 = 0x14040EA3ELL;
      v57 = 0x14040EA35LL;
      v56 = 0x14040EA2CLL;
      v55 = 0x14040EA23LL;
      v54 = 0x14040EA1ALL;
      *((_QWORD *)&v53 + 1) = 0x14040EA11LL;
      *(_QWORD *)&v53 = 0x14040EA08LL;
      *((_QWORD *)&v52 + 1) = 0x14040E9FFLL;
      *(_QWORD *)&v52 = 0x14040E9F6LL;
      *((_QWORD *)&v51 + 1) = 0x14040E9EDLL;
      *(_QWORD *)&v51 = 0x14040E9E4LL;
      *((_QWORD *)&v50 + 1) = 0x14040E9DBLL;
      *(_QWORD *)&v50 = 0x14040E9D2LL;
      *((_QWORD *)&v49 + 1) = 0x14040E9C9LL;
      *(_QWORD *)&v49 = 0x14040E9C0LL;
      *((_QWORD *)&v48 + 1) = 0x14040E9B7LL;
      *(_QWORD *)&v48 = 0x14040E9AELL;
      v47 = 0x14040E9A5LL;
      v46 = 0x14040E99CLL;
      v45 = 0x14040E993LL;
      v44 = 0x14040E98ALL;
      v43 = 0x14040E981LL;
      v42 = 0x14040E978LL;
      v41 = 0x14040E96FLL;
      v40 = 0x14040E966LL;
      v39 = 0x14040E95DLL;
      v38 = 0x14040E954LL;
      v37 = 0x14040E94BLL;
      v36 = 0x14040E942LL;
      v35 = 0x14040E939LL;
      v34 = 0x14040E930LL;
    }
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v15);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v15 = 3221225730LL;
      v17 = __readmsr(0xC0000102);
      BpbState = (unsigned __int64)HIDWORD(v17) << 32;
      if ( v17 >= MmUserProbeAddress )
        v17 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v17 )
      {
        BpbState = (unsigned __int64)CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        *(_QWORD *)(BpbState + 128) = v17;
      }
    }
    v18 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v59 = 0;
    if ( !v18 )
      *(double *)&v8 = KiSaveDebugRegisterState(v15);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
    {
      BpbState = 0LL;
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    }
    else
    {
      _mm_lfence();
    }
  }
  HIDWORD(v39) = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v48 = v8;
  v49 = v9;
  v50 = v10;
  v51 = v11;
  v52 = v12;
  v53 = v13;
  if ( (_BYTE)KeSmapEnabled && (v60 & 1) != 0 )
    __asm { stac }
  _enable();
  v19 = KeGetCurrentThread();
  if ( _bittest((const signed __int32 *)&v19->116, 8u) )
  {
    KiUmsTrapEntry();
    v19 = KeGetCurrentThread();
  }
  KiMcheckAlternateReturn(&v32, BpbState, a3, v19);
  _disable();
  if ( (v60 & 1) == 0 )
  {
    _mm_setcsr(HIDWORD(v39));
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
  v23 = KeGetCurrentThread();
  if ( (v23->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)v23, v20, v21, v22, v32);
  v24 = KeGetCurrentThread();
  if ( (v24->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v24->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v24 = KeGetCurrentThread();
    }
    if ( (v24->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v24) = 1;
      KiUmsExit(v24);
    }
  }
  _mm_setcsr(HIDWORD(v39));
  if ( v59 )
    KiRestoreDebugRegisterState(v24);
  v25 = v44;
  v26 = v43;
  __writegsbyte(0x856u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x864u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v28 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
  if ( v28 )
    __writemsr(0x49u, 1uLL);
  v28 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
  if ( v28 )
  {
    v32 = 0x14040EC67LL;
    v57 = 0x14040ED7ELL;
    v56 = 0x14040ED75LL;
    v55 = 0x14040ED6CLL;
    v54 = 0x14040ED63LL;
    *((_QWORD *)&v53 + 1) = 0x14040ED5ALL;
    *(_QWORD *)&v53 = 0x14040ED51LL;
    *((_QWORD *)&v52 + 1) = 0x14040ED48LL;
    *(_QWORD *)&v52 = 0x14040ED3FLL;
    *((_QWORD *)&v51 + 1) = 0x14040ED36LL;
    *(_QWORD *)&v51 = 0x14040ED2DLL;
    *((_QWORD *)&v50 + 1) = 0x14040ED24LL;
    *(_QWORD *)&v50 = 0x14040ED1BLL;
    *((_QWORD *)&v49 + 1) = 0x14040ED12LL;
    *(_QWORD *)&v49 = 0x14040ED09LL;
    *((_QWORD *)&v48 + 1) = 0x14040ED00LL;
    *(_QWORD *)&v48 = 0x14040ECF7LL;
    v47 = 0x14040ECEELL;
    v46 = 0x14040ECE5LL;
    v45 = 0x14040ECDCLL;
    v44 = 0x14040ECD3LL;
    v43 = 0x14040ECCALL;
    v42 = 0x14040ECC1LL;
    v41 = 0x14040ECB8LL;
    v40 = 0x14040ECAFLL;
    v39 = 0x14040ECA6LL;
    v38 = 0x14040EC9DLL;
    v37 = 0x14040EC94LL;
    v36 = 0x14040EC8BLL;
    v35 = 0x14040EC82LL;
    v34 = 0x14040EC79LL;
    v33 = 0x14040EC70LL;
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 0x100) != 0 )
      __asm { verw    [rsp+arg_18] }
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(v41, v42, v26, v25, a5);
}
