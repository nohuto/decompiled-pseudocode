/*
 * XREFs of PopPolicySystemIdle @ 0x14066D1E0
 * Callers:
 *     PopPolicyWorkerThread @ 0x1402434B0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopResetIdleTime @ 0x14024EAF0 (PopResetIdleTime.c)
 *     PopScanIdleList @ 0x14026EAB8 (PopScanIdleList.c)
 *     PopGetConsoleDisplayRequestCount @ 0x14026FF34 (PopGetConsoleDisplayRequestCount.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopTraceSystemIdleUpdate @ 0x14066E8EC (PopTraceSystemIdleUpdate.c)
 *     PopIsDozeSupported @ 0x14066EA68 (PopIsDozeSupported.c)
 *     PopIsHibernateSupported @ 0x14066EAA8 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x14066EBC4 (PopFilterCapabilities.c)
 *     PopExecutePowerAction @ 0x140775388 (PopExecutePowerAction.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
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
    v4 = dword_140C23968 - dword_140C239A0 < (unsigned int)dword_140C23340;
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
