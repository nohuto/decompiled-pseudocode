void PspCatchCriticalBreak(const char *a1, ULONG_PTR a2, __int64 a3, __int64 a4, ...)
{
  __int64 v6; // rdx
  const CHAR *v7; // r8
  __int64 v8; // r9
  char v9; // al
  char v10; // bl
  struct _KPROCESS *v11; // rsi
  _KPROCESS *Process; // rbp
  CHAR Response[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( (int)PsGetServerSiloState(a4) < 2 )
  {
    if ( !(_BYTE)KdDebuggerEnabled )
      goto LABEL_16;
    DbgPrintEx(0, 0, v7, v6, v8);
    while ( 1 )
    {
      v9 = 0;
      if ( (_BYTE)KdDebuggerNotPresent )
        break;
      DbgPrompt("Break, Ignore, or Continue into bugcheck (bic)? ", Response, 2u);
      switch ( Response[0] )
      {
        case 'B':
          goto LABEL_13;
        case 'C':
LABEL_12:
          v9 = 0;
          goto LABEL_15;
        case 'I':
          goto LABEL_14;
        case 'b':
LABEL_13:
          __debugbreak();
LABEL_14:
          v9 = 1;
          goto LABEL_15;
        case 'c':
          goto LABEL_12;
        case 'i':
          goto LABEL_14;
      }
    }
LABEL_15:
    if ( !v9 )
    {
LABEL_16:
      v10 = *(_BYTE *)a2 & 0x7F;
      if ( v10 == 6 )
        v11 = *(struct _KPROCESS **)(a2 + 544);
      else
        v11 = (struct _KPROCESS *)a2;
      if ( PsIsHostSilo(a4) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( v11 != Process )
          KeStackAttachProcess(v11, &ApcState);
        KeBugCheckEx(0xEFu, a2, v10 == 6, (ULONG_PTR)Process, 0LL);
      }
      PsTerminateServerSilo(a4);
    }
  }
}
