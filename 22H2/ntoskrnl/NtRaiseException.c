/*
 * XREFs of NtRaiseException @ 0x1403FE0E0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     NtRaiseException @ 0x1403FE0E0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 *     KiRaiseException @ 0x140521DD0 (KiRaiseException.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall NtRaiseException(int a1, int a2, char a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v12; // cf
  _QWORD v15[87]; // [rsp-298h] [rbp-3D0h] BYREF

  *(_QWORD *)(v5 + 80) = *(_QWORD *)(v5 + 232);
  result = KiRaiseException(a1, a2, (unsigned int)v15, (int)v5 - 128, a3);
  if ( !(_DWORD)result )
  {
    if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
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
    v8 = KeGetCurrentThread();
    if ( (v8->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v8->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v8 = KeGetCurrentThread();
      }
      if ( (v8->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v8) = 1;
        ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(v8);
      }
    }
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    if ( *(_WORD *)(v5 + 128) )
      KiRestoreDebugRegisterState();
    v9 = *(_QWORD *)(v5 - 48);
    v10 = *(_QWORD *)(v5 - 56);
    __writegsbyte(0x856u, 0);
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsword(0x864u, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    v12 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
    if ( v12 )
      __writemsr(0x49u, 1uLL);
    v12 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
    if ( v12 )
    {
      v15[21] = 0x1403FE324LL;
      v15[52] = 0x1403FE43BLL;
      v15[51] = 0x1403FE432LL;
      v15[50] = 0x1403FE429LL;
      v15[49] = 0x1403FE420LL;
      v15[48] = 0x1403FE417LL;
      v15[47] = 0x1403FE40ELL;
      v15[46] = 0x1403FE405LL;
      v15[45] = 0x1403FE3FCLL;
      v15[44] = 0x1403FE3F3LL;
      v15[43] = 0x1403FE3EALL;
      v15[42] = 0x1403FE3E1LL;
      v15[41] = 0x1403FE3D8LL;
      v15[40] = 0x1403FE3CFLL;
      v15[39] = 0x1403FE3C6LL;
      v15[38] = 0x1403FE3BDLL;
      v15[37] = 0x1403FE3B4LL;
      v15[36] = 0x1403FE3ABLL;
      v15[35] = 0x1403FE3A2LL;
      v15[34] = 0x1403FE399LL;
      v15[33] = 0x1403FE390LL;
      v15[32] = 0x1403FE387LL;
      v15[31] = 0x1403FE37ELL;
      v15[30] = 0x1403FE375LL;
      v15[29] = 0x1403FE36CLL;
      v15[28] = 0x1403FE363LL;
      v15[27] = 0x1403FE35ALL;
      v15[26] = 0x1403FE351LL;
      v15[25] = 0x1403FE348LL;
      v15[24] = 0x1403FE33FLL;
      v15[23] = 0x1403FE336LL;
      v15[22] = 0x1403FE32DLL;
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
    return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v10, v9, a5);
  }
  return result;
}
