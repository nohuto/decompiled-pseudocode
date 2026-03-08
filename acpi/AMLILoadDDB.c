/*
 * XREFs of AMLILoadDDB @ 0x1C00AB124
 * Callers:
 *     ACPIInitializeDDB @ 0x1C00A93C4 (ACPIInitializeDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchCopyNA @ 0x1C002BADC (RtlStringCchCopyNA.c)
 *     AMLIDebugger @ 0x1C004D630 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     LoadDDB @ 0x1C004FA40 (LoadDDB.c)
 *     NewContext @ 0x1C00539EC (NewContext.c)
 *     SyncLoadDDB @ 0x1C00AB82C (SyncLoadDDB.c)
 */

__int64 __fastcall AMLILoadDDB(int *a1, _QWORD *a2)
{
  char v4; // cl
  unsigned int DDB; // ebx
  PVOID v6; // rdi
  _QWORD *v7; // rcx
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int128 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-10h]
  int pszSrc; // [rsp+88h] [rbp+28h] BYREF
  PVOID Entry; // [rsp+90h] [rbp+30h] BYREF

  Entry = 0LL;
  dword_1C006F938 = 0;
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
    RtlStringCchCopyNA(byte_1C006FEF8, 5uLL, (STRSAFE_PCNZCH)&pszSrc, 4uLL);
    PrintDebugMessage(85, KeGetCurrentThread(), byte_1C006FEF8, a1, 0LL);
  }
  v4 = 0;
  pszSrc = 0;
  if ( ghQueryDLMSupportHandler )
  {
    ghQueryDLMSupportHandler(&pszSrc);
    v4 = pszSrc;
  }
  gDeviceLockMutexSupported = v4;
  DDB = NewContext((char **)&Entry);
  if ( !DDB )
  {
    v6 = Entry;
    v7 = Entry;
    *((_QWORD *)Entry + 40) = gpheapGlobal;
    DDB = LoadDDB(v7, (const char *)a1, gpnsNameSpaceRoot, (__int64)&v9);
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
