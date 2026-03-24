/*
 * XREFs of NtContinueEx @ 0x1403FDCB0
 * Callers:
 *     NtContinue @ 0x1403FDCA0 (NtContinue.c)
 *     RtlContinue @ 0x14058F8D8 (RtlContinue.c)
 *     RtlContinueLongJump @ 0x14058F8F0 (RtlContinueLongJump.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiContinueEx @ 0x14033F6D0 (KiContinueEx.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     NtContinueEx @ 0x1403FDCB0 (NtContinueEx.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall NtContinueEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v15; // cf
  _QWORD v18[32]; // [rsp-298h] [rbp-3D0h] BYREF
  __int64 v19; // [rsp-198h] [rbp-2D0h]
  __int64 v20; // [rsp-190h] [rbp-2C8h]
  __int64 v21; // [rsp-188h] [rbp-2C0h]
  __int64 v22; // [rsp-180h] [rbp-2B8h]
  __int64 v23; // [rsp-178h] [rbp-2B0h]
  __int64 v24; // [rsp-170h] [rbp-2A8h]
  __int64 v25; // [rsp-168h] [rbp-2A0h]
  __int64 v26; // [rsp-160h] [rbp-298h]
  __int64 v27; // [rsp-158h] [rbp-290h]
  __int64 v28; // [rsp-150h] [rbp-288h]
  __int64 v29; // [rsp-148h] [rbp-280h]
  __int64 v30; // [rsp-140h] [rbp-278h]
  __int64 v31; // [rsp-138h] [rbp-270h]
  __int64 v32; // [rsp-130h] [rbp-268h]
  __int64 v33; // [rsp-128h] [rbp-260h]
  __int64 v34; // [rsp-120h] [rbp-258h]
  __int64 v35; // [rsp-118h] [rbp-250h]
  __int64 v36; // [rsp-110h] [rbp-248h]
  __int64 v37; // [rsp-108h] [rbp-240h]
  __int64 v38; // [rsp-100h] [rbp-238h]
  __int64 v39; // [rsp-F8h] [rbp-230h]

  v6 = *(_QWORD *)(v5 + 192);
  v7 = *(_QWORD *)(v5 + 200);
  v8 = *(_QWORD *)(v5 + 208);
  *(_QWORD *)(v5 - 80) = 0LL;
  v19 = v6;
  v20 = v7;
  v21 = v8;
  result = KiContinueEx(a1, a2, (unsigned __int64)v18, (_KTRAP_FRAME *)(v5 - 128));
  if ( (int)result > 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
    {
      CurrentThread->TrapFrame = *(_KTRAP_FRAME **)(v5 + 184);
      CurrentThread->PreviousMode = *(_BYTE *)(v5 - 88);
    }
    _disable();
    if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v5 - 84));
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
      ((void (__fastcall *)(_QWORD))KiUpdateStibpPairing)(0LL);
    if ( (KeGetCurrentThread()->Header.LockNV & 0x8000000) != 0 )
      ((void (*)(void))KiRestoreSetContextState)();
    v11 = KeGetCurrentThread();
    if ( (v11->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v11->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v11 = KeGetCurrentThread();
      }
      if ( (v11->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v11) = 1;
        ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(v11);
      }
    }
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    if ( *(_WORD *)(v5 + 128) )
      KiRestoreDebugRegisterState();
    v12 = *(_QWORD *)(v5 - 48);
    v13 = *(_QWORD *)(v5 - 56);
    __writegsbyte(0x856u, 0);
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsword(0x864u, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    v15 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
    if ( v15 )
      __writemsr(0x49u, 1uLL);
    v15 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
    if ( v15 )
    {
      v18[21] = 0x1403FDEFFLL;
      v39 = 0x1403FE016LL;
      v38 = 0x1403FE00DLL;
      v37 = 0x1403FE004LL;
      v36 = 0x1403FDFFBLL;
      v35 = 0x1403FDFF2LL;
      v34 = 0x1403FDFE9LL;
      v33 = 0x1403FDFE0LL;
      v32 = 0x1403FDFD7LL;
      v31 = 0x1403FDFCELL;
      v30 = 0x1403FDFC5LL;
      v29 = 0x1403FDFBCLL;
      v28 = 0x1403FDFB3LL;
      v27 = 0x1403FDFAALL;
      v26 = 0x1403FDFA1LL;
      v25 = 0x1403FDF98LL;
      v24 = 0x1403FDF8FLL;
      v23 = 0x1403FDF86LL;
      v22 = 0x1403FDF7DLL;
      v21 = 0x1403FDF74LL;
      v20 = 0x1403FDF6BLL;
      v19 = 0x1403FDF62LL;
      v18[31] = 0x1403FDF59LL;
      v18[30] = 0x1403FDF50LL;
      v18[29] = 0x1403FDF47LL;
      v18[28] = 0x1403FDF3ELL;
      v18[27] = 0x1403FDF35LL;
      v18[26] = 0x1403FDF2CLL;
      v18[25] = 0x1403FDF23LL;
      v18[24] = 0x1403FDF1ALL;
      v18[23] = 0x1403FDF11LL;
      v18[22] = 0x1403FDF08LL;
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
    return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v13, v12, a5);
  }
  return result;
}
