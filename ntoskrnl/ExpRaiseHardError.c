/*
 * XREFs of ExpRaiseHardError @ 0x1409FE27C
 * Callers:
 *     ExRaiseHardError @ 0x1409FDD30 (ExRaiseHardError.c)
 *     NtRaiseHardError @ 0x1409FE610 (NtRaiseHardError.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x140422390 (ExpSystemErrorHandler.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     LpcSendWaitReceivePort @ 0x140796F40 (LpcSendWaitReceivePort.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     PsCaptureExceptionPort @ 0x1407D9D10 (PsCaptureExceptionPort.c)
 */

__int64 __fastcall ExpRaiseHardError(
        unsigned int a1,
        unsigned int a2,
        int a3,
        const void *a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r14
  KPROCESSOR_MODE PreviousMode; // bl
  unsigned int v12; // edx
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rcx
  _KPROCESS *Process; // r10
  int v18; // r11d
  void *Blink; // rbx
  char v20; // di
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *Teb; // rax
  int v23; // eax
  const void *v24; // r14
  int v25; // esi
  unsigned int v26; // ecx
  unsigned int v27; // eax
  bool v28; // zf
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // [rsp+20h] [rbp-358h]
  _QWORD v34[3]; // [rsp+68h] [rbp-310h] BYREF
  _DWORD v35[12]; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-2C8h]
  int v37; // [rsp+B8h] [rbp-2C0h]
  unsigned int v38; // [rsp+BCh] [rbp-2BCh]
  unsigned int v39; // [rsp+C0h] [rbp-2B8h]
  int v40; // [rsp+C4h] [rbp-2B4h]
  char v41[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  v34[0] = a4;
  v34[1] = a7;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *a7 = 0;
  if ( v12 > 0x4D )
    return 3221225485LL;
  v14 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo(v16, v15) )
      ExReadyForErrors = 0;
    LODWORD(CurrentServerSiloGlobals[56].Flink) = 2;
    v14 = 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v18 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10;
  if ( !v18 && (a1 & 0xC0000000) == 0xC0000000 && (!LODWORD(CurrentServerSiloGlobals[56].Flink) || v14) )
  {
    LOBYTE(v31) = PreviousMode != 0;
    ExpSystemErrorHandler(a1, a2, a3, a5, v31);
    return 0LL;
  }
  if ( Process == (_KPROCESS *)CurrentServerSiloGlobals[55].Flink )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
    {
      LOBYTE(v31) = PreviousMode != 0;
      ExpSystemErrorHandler(a1, a2, a3, a5, v31);
    }
LABEL_37:
    *a7 = 0;
    return 0LL;
  }
  Blink = 0LL;
  v20 = 0;
  if ( !v18 && ((Process[1].ActiveProcessors.StaticBitmap[9] & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    Blink = PsCaptureExceptionPort((__int64)Process);
    if ( Blink )
      v20 = 1;
    else
      Blink = CurrentServerSiloGlobals[55].Blink;
  }
  if ( Blink
    && ((CurrentThread = KeGetCurrentThread(), (CurrentThread->MiscFlags & 0x400) != 0)
     || CurrentThread->ApcStateIndex == 1
      ? (Teb = 0LL)
      : (Teb = CurrentThread->Teb),
        Teb) )
  {
    v28 = (Teb[5808] & 0x10) == 0;
    v23 = 0;
    if ( !v28 )
      v23 = -1073741823;
    v24 = a4;
    if ( v23 < 0 )
    {
      if ( v20 == 1 )
        ObfDereferenceObject(Blink);
      Blink = 0LL;
    }
  }
  else
  {
    v24 = a4;
  }
  if ( !Blink )
    goto LABEL_37;
  v35[0] = 7340104;
  v35[1] = 9;
  v35[10] = a1 & 0xEFFFFFFF;
  v37 = a6;
  v40 = a3;
  v39 = a2;
  if ( v24 )
    memmove(v41, v24, 8LL * a2);
  v36 = MEMORY[0xFFFFF78000000014];
  v34[0] = 688LL;
  v25 = LpcSendWaitReceivePort((int)Blink, 0x20000, (int)v35, (__int64)v35, (__int64)v34, 0LL);
  if ( v20 == 1 )
    ObfDereferenceObject(Blink);
  if ( v25 >= 0 )
  {
    v26 = v38;
    v27 = v38;
    if ( v38 > 5 )
    {
      v26 = v38 - 6;
      v28 = v38 == 6;
    }
    else
    {
      if ( v38 == 5 )
      {
LABEL_52:
        *a7 = v27;
        return (unsigned int)v25;
      }
      v28 = v38 == 0;
    }
    if ( !v28 )
    {
      v29 = v26 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 - 1 >= 2 )
            v27 = 0;
        }
      }
    }
    goto LABEL_52;
  }
  return (unsigned int)v25;
}
