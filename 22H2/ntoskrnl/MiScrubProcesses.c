/*
 * XREFs of MiScrubProcesses @ 0x1408DC060
 * Callers:
 *     MmScrubMemory @ 0x1408DC16C (MmScrubMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     MiGetProcessPartition @ 0x14021AD00 (MiGetProcessPartition.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiProcessHasAwePrivatePages @ 0x14054D288 (MiProcessHasAwePrivatePages.c)
 *     MiScrubInterrupted @ 0x140563998 (MiScrubInterrupted.c)
 *     MiScrubProcessLargePages @ 0x140564434 (MiScrubProcessLargePages.c)
 *     PsGetNextProcess @ 0x14062BFA0 (PsGetNextProcess.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6690 (MiScrubProcessPhysicalPages.c)
 *     MiInitializeScrubPacket @ 0x1408DBEA0 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1408DBFA0 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubProcesses(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *i; // rcx
  _KPROCESS *v6; // rcx
  _DWORD *v7; // r9
  unsigned __int64 NextProcess; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  int v11; // [rsp+28h] [rbp-D8h]
  _DWORD v12[53]; // [rsp+2Ch] [rbp-D4h] BYREF
  _OWORD v13[3]; // [rsp+100h] [rbp+0h] BYREF

  memset(v13, 0, sizeof(v13));
  memset(v12, 0, sizeof(v12));
  v11 = -1;
  v10 = a1;
  result = MiInitializeScrubPacket(&v10);
  if ( (int)result >= 0 )
  {
    for ( i = 0LL; ; i = (_QWORD *)v9 )
    {
      NextProcess = PsGetNextProcess(i);
      v9 = NextProcess;
      if ( !NextProcess )
        break;
      if ( MiGetProcessPartition(NextProcess) == *(_QWORD *)(a1 + 48) )
      {
        if ( MiScrubInterrupted((__int64)&v10) )
          break;
        if ( MiProcessHasAwePrivatePages(v9) || *(_DWORD *)(v9 + 2140) )
        {
          KiStackAttachProcess(v6, 0LL, (__int64)v13, v7);
          MiScrubProcessLargePages((__int64)&v10);
          MiScrubProcessPhysicalPages((__int64)&v10);
          KiUnstackDetachProcess((__int64)v13, 0);
        }
      }
    }
    *a2 = *(_QWORD *)&v12[49];
    MiReleaseScrubPacket((__int64)&v10);
    return 0LL;
  }
  return result;
}
