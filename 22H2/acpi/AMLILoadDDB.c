/*
 * XREFs of AMLILoadDDB @ 0x1C00BE388
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00BE9B0 (ACPIInitializeDDBs.c)
 * Callees:
 *     LoadDDB @ 0x1C002372C (LoadDDB.c)
 *     NewContext @ 0x1C0023FE8 (NewContext.c)
 *     RtlStringCchCopyNA @ 0x1C00288C8 (RtlStringCchCopyNA.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     AMLIDebugger @ 0x1C0065C80 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 *     SyncLoadDDB @ 0x1C00BE478 (SyncLoadDDB.c)
 */

__int64 __fastcall AMLILoadDDB(int *a1, _QWORD *a2)
{
  char v4; // cl
  unsigned int DDB; // ebx
  PVOID v6; // rdi
  struct _SLIST_ENTRY *v7; // rcx
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int128 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+98h] [rbp+38h] BYREF
  int pszSrc; // [rsp+A0h] [rbp+40h] BYREF
  PVOID Entry; // [rsp+A8h] [rbp+48h] BYREF

  Entry = 0LL;
  dword_1C0082908 = 0;
  v11 = 0LL;
  v9 = 0LL;
  pszDest[0] = 0;
  v10 = 0LL;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  if ( (gDebugger & 8) != 0 )
  {
    pszSrc = *a1;
    RtlStringCchCopyNA(byte_1C0082B90, 5uLL, (STRSAFE_PCNZCH)&pszSrc, 4uLL);
    PrintDebugMessage(85, KeGetCurrentThread(), byte_1C0082B90, a1, 0LL);
  }
  v4 = 0;
  v12 = 0;
  if ( ghQueryDLMSupportHandler )
  {
    ghQueryDLMSupportHandler(&v12);
    v4 = v12;
  }
  gDeviceLockMutexSupported = v4;
  DDB = NewContext(&Entry);
  if ( !DDB )
  {
    v6 = Entry;
    v7 = (struct _SLIST_ENTRY *)Entry;
    *((_QWORD *)Entry + 40) = gpheapGlobal;
    DDB = LoadDDB(v7, (__int64)a1, gpnsNameSpaceRoot, (__int64)&v9);
    if ( !DDB )
      DDB = SyncLoadDDB(v6);
  }
  if ( a2 )
    *a2 = v10;
  if ( (gdwfAMLIInit & 2) != 0 )
  {
    PrintDebugMessage(16, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  return DDB;
}
