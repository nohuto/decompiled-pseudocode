/*
 * XREFs of WbSetWowTrapFrame @ 0x140A4AFE0
 * Callers:
 *     WbSetTrapFrame @ 0x1406AF9A4 (WbSetTrapFrame.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     PspWow64GetContextThread @ 0x14077BF00 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x14077C1CC (PspWow64SetContextThread.c)
 */

__int64 __fastcall WbSetWowTrapFrame(unsigned int *a1, unsigned int *a2)
{
  _KPROCESS *Process; // rcx
  __int16 v5; // si
  int v6; // ebp
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ecx
  int ContextThread; // ebx
  struct _KTHREAD *v10; // rax
  bool v11; // zf

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].Affinity.StaticBitmap[30] )
    return (unsigned int)-1073741637;
  v5 = WORD2(Process[2].Affinity.StaticBitmap[20]);
  if ( !v5 )
    return (unsigned int)-1073741637;
  if ( v5 != 332 )
  {
    if ( v5 == 452 )
    {
      v6 = 416;
      goto LABEL_7;
    }
    return (unsigned int)-1073741637;
  }
  v6 = 716;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( v5 == 332 )
    v8 = 65537;
  else
    v8 = 2097153;
  a1[12] = v8;
  ContextThread = PspWow64GetContextThread((__int64)KeGetCurrentThread(), a1 + 12, v6, 0);
  if ( ContextThread >= 0 )
  {
    if ( v5 == 332 )
    {
      a1[58] = a2[2];
      a1[61] = *a2;
      a1[60] = a2[4];
    }
    else
    {
      a1[28] = a2[2];
      a1[26] = *a2;
      a1[29] = a2[4];
    }
    ContextThread = PspWow64SetContextThread(KeGetCurrentThread(), a1 + 12, v6, 0);
  }
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable++ == -1;
  if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)ContextThread;
}
