void __fastcall EtwTracePageFault(int a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int16 v5; // di
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ThreadServerSilo; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 *v14; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+4Ch] [rbp-2Ch]

  switch ( a1 )
  {
    case 273:
      v5 = 523;
      break;
    case 272:
      v5 = 522;
      break;
    case 274:
      v5 = 524;
      break;
    case 276:
      v5 = 526;
      break;
    case 275:
      v5 = 525;
      break;
    case -1073741819:
      v5 = 527;
      break;
    default:
      return;
  }
  v13 = 0LL;
  v12 = a2;
  if ( a4 )
    v13 = *(_QWORD *)(a4 + 360);
  v16 = 0;
  v14 = &v12;
  v15 = 16;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x10) != 0 )
  {
    ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
    EtwTraceSiloKernelEvent(ThreadServerSilo, (__int64)&v14, 1u, 0x1000u, v5, 0x2000102u);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    LOBYTE(CurrentThread[1].Queue) |= 0x10u;
    v8 = a3 != 0 ? 33558786 : 50338050;
    v9 = PsGetThreadServerSilo((__int64)CurrentThread);
    EtwTraceSiloKernelEvent(v9, (__int64)&v14, 1u, 0x1000u, v5, v8);
    LOBYTE(CurrentThread[1].Queue) &= ~0x10u;
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( EtwpHostSiloState != -4572 && (*(_DWORD *)(EtwpHostSiloState + 4572) & 0x1000) != 0 )
    {
      LOBYTE(v10) = a3;
      EtwpCoverageSamplerPageFault(v13, v12, v10);
    }
  }
}
