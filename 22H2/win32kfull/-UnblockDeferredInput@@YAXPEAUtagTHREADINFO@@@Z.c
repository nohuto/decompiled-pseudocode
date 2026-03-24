/*
 * XREFs of ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E106C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C14A0 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 */

void __fastcall UnblockDeferredInput(struct tagTHREADINFO *a1)
{
  __int64 v2; // rbx
  __int64 *i; // rbx
  int v4; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*((_DWORD *)a1 + 308) & 0x20000000) != 0 )
  {
    v2 = *((_QWORD *)a1 + 54);
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v6, v2);
    for ( i = *(__int64 **)(v2 + 24); ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        *((_DWORD *)a1 + 308) &= ~0x20000000u;
        return;
      }
      v4 = *((_DWORD *)i + 25);
      if ( ((v4 & 0x10000) != 0 || (v4 & 0x20000) != 0) && (struct tagTHREADINFO *)i[13] == a1 )
        break;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( (unsigned int)RIMQpcCountToMilliSecs(PerformanceCounter.QuadPart - i[16]) > 0x2710 )
      HandleDeferredInput(a1, 4LL);
  }
}
