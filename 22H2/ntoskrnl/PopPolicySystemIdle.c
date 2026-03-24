/*
 * XREFs of PopPolicySystemIdle @ 0x1406F2890
 * Callers:
 *     PopPolicyWorkerThread @ 0x14031E2A0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopResetIdleTime @ 0x140329C20 (PopResetIdleTime.c)
 *     PopScanIdleList @ 0x140349888 (PopScanIdleList.c)
 *     PopGetConsoleDisplayRequestCount @ 0x14034AD04 (PopGetConsoleDisplayRequestCount.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     PopTraceSystemIdleUpdate @ 0x1406F3F9C (PopTraceSystemIdleUpdate.c)
 *     PopIsDozeSupported @ 0x1406F4118 (PopIsDozeSupported.c)
 *     PopIsHibernateSupported @ 0x1406F4158 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x1406F4274 (PopFilterCapabilities.c)
 *     PopExecutePowerAction @ 0x140775C28 (PopExecutePowerAction.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

__int64 PopPolicySystemIdle()
{
  bool v0; // bl
  bool v1; // di
  int ConsoleDisplayRequestCount; // ebp
  int v3; // ecx
  bool v4; // si
  int v5; // r9d
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v11; // [rsp+60h] [rbp-78h] BYREF
  __int64 v12; // [rsp+70h] [rbp-68h]
  _BYTE v13[80]; // [rsp+80h] [rbp-58h] BYREF

  memset(v13, 0, 0x4CuLL);
  v0 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( PopPlatformAoAc )
    KeBugCheckEx(0xA0u, 0xAuLL, 3uLL, 0LL, 0LL);
  v1 = 0;
  ConsoleDisplayRequestCount = PopGetConsoleDisplayRequestCount();
  PopAcquirePolicyLock(v3);
  if ( MEMORY[0xFFFFF780000002E4] != dword_140C23970 )
  {
    dword_140C23970 = MEMORY[0xFFFFF780000002E4];
    PopResetIdleTime();
  }
  PopFilterCapabilities(&PopCapabilities, v13);
  v4 = 0;
  if ( !v13[20] && dword_140C239A0 )
    v4 = dword_140C23968 - dword_140C239A0 < (unsigned int)dword_140C23360;
  if ( dword_140C2396C && dword_140C23968 >= (unsigned int)dword_140C2396C && !v4 && !PopUserShutdownInProgress )
  {
    if ( v13[20] )
    {
      if ( !PopConsoleDisplayState || !ConsoleDisplayRequestCount )
        v0 = 1;
    }
    else
    {
      v0 = dword_140C23984 == 0;
    }
  }
  byte_140C239B0 = v0;
  if ( v13[20] && (_DWORD)qword_140C23974 == 2 )
    v1 = dword_140C23980 == 1;
  if ( v0 )
  {
    if ( !v1 )
      PopResetIdleTime();
    byte_140C23995 = 0;
  }
  PopIsHibernateSupported(v13);
  PopIsDozeSupported(v13);
  LOBYTE(v5) = v4;
  LOBYTE(v6) = dword_140C23984 != 0;
  v7 = *((_DWORD *)PopPolicy + 22);
  LOBYTE(v7) = v0;
  PopTraceSystemIdleUpdate(dword_140C23968, v7, v6, v5);
  if ( v0 && !v1 )
  {
    *(_QWORD *)&v11 = 0x8000000007LL;
    PopExecutePowerAction((unsigned int)&v11, 0, (unsigned int)&qword_140C23974, dword_140C23980, 1);
  }
  PopReleasePolicyLock(v9, v8);
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList(dword_140C2396C, dword_140C23968 / (unsigned int)PopIdleScanInterval);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
