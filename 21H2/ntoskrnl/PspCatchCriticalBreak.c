/*
 * XREFs of PspCatchCriticalBreak @ 0x1409B1558
 * Callers:
 *     PspTerminateThreadByPointer @ 0x14079F130 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1407E6274 (PspTerminateAllThreads.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     PsGetServerSiloState @ 0x1402237B8 (PsGetServerSiloState.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     DbgPrompt @ 0x1405E4170 (DbgPrompt.c)
 *     PsTerminateServerSilo @ 0x1409AB9B0 (PsTerminateServerSilo.c)
 */

void PspCatchCriticalBreak(const char *a1, ULONG_PTR a2, __int64 a3, __int64 a4, ...)
{
  char v6; // bl
  __int64 v7; // rdx
  const CHAR *v8; // r8
  __int64 v9; // r9
  char v10; // al
  char v11; // bl
  struct _KPROCESS *v12; // rdi
  CHAR Response[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  v6 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (int)PsGetServerSiloState(a4) < 2 )
  {
    if ( !(_BYTE)KdDebuggerEnabled )
      goto LABEL_17;
    DbgPrintEx(0, 0, v8, v7, v9);
    while ( 1 )
    {
      v10 = 0;
      if ( v6 || (_BYTE)KdDebuggerNotPresent )
        break;
      DbgPrompt("Break, Ignore, or Continue into bugcheck (bic)? ", Response, 2u);
      switch ( Response[0] )
      {
        case 'B':
          goto LABEL_14;
        case 'C':
          goto LABEL_13;
        case 'I':
          goto LABEL_15;
        case 'b':
LABEL_14:
          __debugbreak();
LABEL_15:
          v10 = 1;
          goto LABEL_16;
        case 'c':
LABEL_13:
          v6 = 1;
          break;
        case 'i':
          goto LABEL_15;
      }
    }
LABEL_16:
    if ( !v10 )
    {
LABEL_17:
      v11 = *(_BYTE *)a2 & 0x7F;
      if ( v11 == 6 )
        v12 = *(struct _KPROCESS **)(a2 + 544);
      else
        v12 = (struct _KPROCESS *)a2;
      if ( PsIsHostSilo(a4) )
      {
        if ( v12 != KeGetCurrentThread()->ApcState.Process )
          KeStackAttachProcess(v12, &ApcState);
        KeBugCheckEx(0xEFu, a2, v11 == 6, 0LL, 0LL);
      }
      PsTerminateServerSilo(a4);
    }
  }
}
