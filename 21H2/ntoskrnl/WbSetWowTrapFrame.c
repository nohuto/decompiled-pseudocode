/*
 * XREFs of WbSetWowTrapFrame @ 0x140A0EE3C
 * Callers:
 *     WbSetTrapFrame @ 0x1407E3C20 (WbSetTrapFrame.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PspWow64GetContextThread @ 0x140704EF8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x140705578 (PspWow64SetContextThread.c)
 */

__int64 __fastcall WbSetWowTrapFrame(int *a1, int *a2)
{
  _KPROCESS *Process; // rcx
  __int16 v5; // di
  int v6; // ebp
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
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
  if ( v11 && ($CEA84C04E3712D858E5667A507841A2A *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)ContextThread;
}
