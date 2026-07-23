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
NTSTATUS __cdecl NtRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  __int64 v3; // rbp
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v10; // cf
  _QWORD v13[87]; // [rsp-298h] [rbp-3D0h] BYREF
  char v15; // [rsp+160h] [rbp+28h]

  *(_QWORD *)(v3 + 80) = *(_QWORD *)(v3 + 232);
  result = KiRaiseException(
             (_DWORD)ExceptionRecord,
             (_DWORD)ContextRecord,
             (unsigned int)v13,
             (int)v3 - 128,
             FirstChance);
  if ( !result )
  {
    if ( (*(_BYTE *)(v3 + 240) & 1) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      CurrentThread->TrapFrame = *(_KTRAP_FRAME **)(v3 + 184);
      CurrentThread->PreviousMode = *(_BYTE *)(v3 - 88);
    }
    _disable();
    if ( (*(_BYTE *)(v3 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v3 - 84));
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
    v6 = KeGetCurrentThread();
    if ( (v6->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v6->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v6 = KeGetCurrentThread();
      }
      if ( (v6->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v6) = 1;
        ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(v6);
      }
    }
    _mm_setcsr(*(_DWORD *)(v3 - 84));
    if ( *(_WORD *)(v3 + 128) )
      KiRestoreDebugRegisterState();
    v7 = *(_QWORD *)(v3 - 48);
    v8 = *(_QWORD *)(v3 - 56);
    __writegsbyte(0x856u, 0);
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsword(0x864u, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    v10 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
    if ( v10 )
      __writemsr(0x49u, 1uLL);
    v10 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
    if ( v10 )
    {
      v13[21] = 0x1403FE324LL;
      v13[52] = 0x1403FE43BLL;
      v13[51] = 0x1403FE432LL;
      v13[50] = 0x1403FE429LL;
      v13[49] = 0x1403FE420LL;
      v13[48] = 0x1403FE417LL;
      v13[47] = 0x1403FE40ELL;
      v13[46] = 0x1403FE405LL;
      v13[45] = 0x1403FE3FCLL;
      v13[44] = 0x1403FE3F3LL;
      v13[43] = 0x1403FE3EALL;
      v13[42] = 0x1403FE3E1LL;
      v13[41] = 0x1403FE3D8LL;
      v13[40] = 0x1403FE3CFLL;
      v13[39] = 0x1403FE3C6LL;
      v13[38] = 0x1403FE3BDLL;
      v13[37] = 0x1403FE3B4LL;
      v13[36] = 0x1403FE3ABLL;
      v13[35] = 0x1403FE3A2LL;
      v13[34] = 0x1403FE399LL;
      v13[33] = 0x1403FE390LL;
      v13[32] = 0x1403FE387LL;
      v13[31] = 0x1403FE37ELL;
      v13[30] = 0x1403FE375LL;
      v13[29] = 0x1403FE36CLL;
      v13[28] = 0x1403FE363LL;
      v13[27] = 0x1403FE35ALL;
      v13[26] = 0x1403FE351LL;
      v13[25] = 0x1403FE348LL;
      v13[24] = 0x1403FE33FLL;
      v13[23] = 0x1403FE336LL;
      v13[22] = 0x1403FE32DLL;
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
    return KiKernelExit(*(_QWORD *)(v3 - 72), *(_QWORD *)(v3 - 64), v8, v7, v15);
  }
  return result;
}
