/*
 * XREFs of WbGetWowTrapFrame @ 0x140A4AD58
 * Callers:
 *     WbGetTrapFrame @ 0x1406AF738 (WbGetTrapFrame.c)
 * Callees:
 *     PspWow64GetContextThread @ 0x14077BF00 (PspWow64GetContextThread.c)
 */

__int64 __fastcall WbGetWowTrapFrame(unsigned int *a1, __int64 a2)
{
  _KPROCESS *Process; // rcx
  __int16 v5; // si
  int v6; // ecx
  int v7; // r8d
  int ContextThread; // edx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].Affinity.StaticBitmap[30] )
    return (unsigned int)-1073741637;
  v5 = WORD2(Process[2].Affinity.StaticBitmap[20]);
  if ( !v5 )
    return (unsigned int)-1073741637;
  if ( v5 == 332 )
  {
    v6 = 65537;
    v7 = 716;
    goto LABEL_7;
  }
  if ( v5 != 452 )
    return (unsigned int)-1073741637;
  v6 = 2097153;
  v7 = 416;
LABEL_7:
  a1[12] = v6;
  ContextThread = PspWow64GetContextThread((__int64)KeGetCurrentThread(), a1 + 12, v7, 0);
  if ( ContextThread >= 0 )
  {
    if ( v5 == 332 )
    {
      *(_QWORD *)(a2 + 8) = a1[58];
      *(_QWORD *)a2 = a1[61];
      *(_DWORD *)(a2 + 16) = a1[60];
    }
    else
    {
      *(_QWORD *)(a2 + 8) = a1[28];
      *(_QWORD *)a2 = a1[26];
      *(_DWORD *)(a2 + 16) = a1[29];
    }
  }
  return (unsigned int)ContextThread;
}
