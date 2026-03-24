/*
 * XREFs of KiFastFailDispatch @ 0x140412280
 * Callers:
 *     KiBoundFault @ 0x14040AFC0 (KiBoundFault.c)
 *     KiControlProtectionFault @ 0x14040F880 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x14040FEC0 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiDispatchException @ 0x14033C330 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140411D40 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x140412280 (KiFastFailDispatch.c)
 *     KiUmsExceptionEntry @ 0x140412F40 (KiUmsExceptionEntry.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiFastFailDispatch(NTSTATUS a1, int a2, __int64 a3, ULONG_PTR a4, char a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // r11
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
  unsigned __int8 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v33; // cf
  __int64 v37; // [rsp-338h] [rbp-510h] BYREF
  int v38; // [rsp-318h] [rbp-4F0h]
  int v39; // [rsp-310h] [rbp-4E8h]
  __int128 v40; // [rsp-308h] [rbp-4E0h]
  __int128 v41; // [rsp-2F8h] [rbp-4D0h]
  __int128 v42; // [rsp-2E8h] [rbp-4C0h]
  __int128 v43; // [rsp-2D8h] [rbp-4B0h]
  __int128 v44; // [rsp-2C8h] [rbp-4A0h]
  __int128 v45; // [rsp-2B8h] [rbp-490h]
  __int128 v46; // [rsp-2A8h] [rbp-480h]
  __int128 v47; // [rsp-298h] [rbp-470h]
  __int128 v48; // [rsp-288h] [rbp-460h]
  __int128 v49; // [rsp-278h] [rbp-450h]
  int v50; // [rsp-268h] [rbp-440h]
  int v51; // [rsp-260h] [rbp-438h]
  int v52; // [rsp-258h] [rbp-430h]
  int v53; // [rsp-250h] [rbp-428h]
  int v54; // [rsp-248h] [rbp-420h]
  int v55; // [rsp-240h] [rbp-418h]
  __int64 v56; // [rsp-238h] [rbp-410h]
  __int64 v57; // [rsp-230h] [rbp-408h]
  __int64 v58; // [rsp-228h] [rbp-400h]
  __int64 v59; // [rsp-220h] [rbp-3F8h]
  __int64 v60; // [rsp-218h] [rbp-3F0h]
  __int64 v61; // [rsp-210h] [rbp-3E8h]
  NTSTATUS v62[2]; // [rsp-200h] [rbp-3D8h] BYREF
  __int64 v63; // [rsp-1F8h] [rbp-3D0h]
  __int64 v64; // [rsp-1F0h] [rbp-3C8h]
  __int64 v65; // [rsp-1E8h] [rbp-3C0h]
  ULONG_PTR v66; // [rsp-1E0h] [rbp-3B8h]
  __int64 v67; // [rsp-1D8h] [rbp-3B0h]
  __int64 v68; // [rsp-1D0h] [rbp-3A8h]
  __int64 v69; // [rsp-1C8h] [rbp-3A0h]
  __int64 v70; // [rsp-1C0h] [rbp-398h]
  __int64 v71; // [rsp-1B8h] [rbp-390h]
  __int64 v72; // [rsp-1B0h] [rbp-388h]
  __int64 v73; // [rsp-1A8h] [rbp-380h]
  __int64 v74; // [rsp-1A0h] [rbp-378h]
  __int64 v75; // [rsp-198h] [rbp-370h]
  __int64 v76; // [rsp-190h] [rbp-368h]
  __int64 v77; // [rsp-188h] [rbp-360h]
  __int64 v78; // [rsp-180h] [rbp-358h]
  __int64 v79; // [rsp-178h] [rbp-350h]
  __int64 v80; // [rsp-170h] [rbp-348h]
  __int64 v81; // [rsp-168h] [rbp-340h]
  __int64 v82; // [rsp-160h] [rbp-338h]
  __int64 v83; // [rsp-158h] [rbp-330h]
  __int64 v84; // [rsp-150h] [rbp-328h]
  __int64 v85; // [rsp-148h] [rbp-320h]
  __int64 v86; // [rsp-140h] [rbp-318h]
  __int64 v87; // [rsp-138h] [rbp-310h]
  __int64 v88; // [rsp-130h] [rbp-308h]
  __int64 v89; // [rsp-128h] [rbp-300h]
  __int64 v90; // [rsp-120h] [rbp-2F8h]
  __int64 v91; // [rsp-118h] [rbp-2F0h]
  __int64 v92; // [rsp-110h] [rbp-2E8h]
  __int64 v93; // [rsp-108h] [rbp-2E0h]
  __int64 v94; // [rsp-100h] [rbp-2D8h]
  __int64 v95; // [rsp-F8h] [rbp-2D0h]

  v40 = v14;
  v41 = v15;
  v42 = v16;
  v43 = v17;
  v44 = v18;
  v45 = v19;
  v46 = v20;
  v47 = v21;
  v48 = v22;
  v49 = v23;
  v56 = v5;
  v57 = v7;
  v58 = v8;
  v59 = v11;
  v60 = v12;
  v61 = v13;
  if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) && (*(_BYTE *)(v6 + 240) & 1) != 0 )
    KiUmsExceptionEntry(
      a1,
      a2,
      a3,
      a4,
      v38,
      v39,
      v40,
      DWORD2(v40),
      v41,
      DWORD2(v41),
      v42,
      DWORD2(v42),
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
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  v62[0] = a1;
  v62[1] = 1;
  v63 = 0LL;
  v64 = a3;
  LODWORD(v65) = a2;
  v66 = a4;
  v67 = v9;
  v68 = v10;
  v24 = *(_BYTE *)(v6 + 240) & 1;
  if ( !v24 )
    KiBugCheckDispatch(0x139u, v66, v6 - 128, (ULONG_PTR)v62);
  KiDispatchException(v62, (unsigned __int64)&v37, v6 - 128, v24, 0);
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
    KiRestoreSetContextState((__int64)CurrentThread, v25, v26, v27, v38);
  v29 = KeGetCurrentThread();
  if ( (v29->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v29->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v29 = KeGetCurrentThread();
    }
    if ( (v29->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v29) = 1;
      KiUmsExit(v29);
    }
  }
  _mm_setcsr(*(_DWORD *)(v6 - 84));
  if ( *(_WORD *)(v6 + 128) )
    KiRestoreDebugRegisterState(v29);
  v30 = *(_QWORD *)(v6 - 48);
  v31 = *(_QWORD *)(v6 - 56);
  __writegsbyte(0x856u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x864u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v33 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
  if ( v33 )
    __writemsr(0x49u, 1uLL);
  v33 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
  if ( v33 )
  {
    v64 = 0x1404124FCLL;
    v95 = 0x140412613LL;
    v94 = 0x14041260ALL;
    v93 = 0x140412601LL;
    v92 = 0x1404125F8LL;
    v91 = 0x1404125EFLL;
    v90 = 0x1404125E6LL;
    v89 = 0x1404125DDLL;
    v88 = 0x1404125D4LL;
    v87 = 0x1404125CBLL;
    v86 = 0x1404125C2LL;
    v85 = 0x1404125B9LL;
    v84 = 0x1404125B0LL;
    v83 = 0x1404125A7LL;
    v82 = 0x14041259ELL;
    v81 = 0x140412595LL;
    v80 = 0x14041258CLL;
    v79 = 0x140412583LL;
    v78 = 0x14041257ALL;
    v77 = 0x140412571LL;
    v76 = 0x140412568LL;
    v75 = 0x14041255FLL;
    v74 = 0x140412556LL;
    v73 = 0x14041254DLL;
    v72 = 0x140412544LL;
    v71 = 0x14041253BLL;
    v70 = 0x140412532LL;
    v69 = 0x140412529LL;
    v68 = 0x140412520LL;
    v67 = 0x140412517LL;
    v66 = 0x14041250ELL;
    v65 = 0x140412505LL;
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
  return KiKernelExit(*(_QWORD *)(v6 - 72), *(_QWORD *)(v6 - 64), v31, v30, a5);
}
