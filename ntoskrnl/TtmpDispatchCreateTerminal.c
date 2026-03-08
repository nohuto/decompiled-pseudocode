/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x1409A358C
 * Callers:
 *     TtmDispatchApi @ 0x1409A2FAC (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1409A3258 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiCreateTerminal @ 0x1409A7DD8 (TtmiCreateTerminal.c)
 */

__int64 __fastcall TtmpDispatchCreateTerminal(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  int Terminal; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  Object = 0LL;
  v4 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 16), 1, 0, &v11, &Object);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v8 = *(unsigned int *)(a1 + 8);
    v7 = v11;
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    Terminal = TtmiCreateTerminal(v11, v8, v5, a2, a2 + 8, 0LL);
    v6 = Terminal;
    if ( Terminal >= 0 )
      v6 = 0;
    else
      TtmiLogError("TtmpDispatchCreateTerminal", 239LL, (unsigned int)Terminal, (unsigned int)Terminal);
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateTerminal", 227LL, (unsigned int)v4, (unsigned int)v4);
    v7 = v11;
  }
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v6;
}
