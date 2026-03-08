/*
 * XREFs of ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01B7188
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall UnblockDeferredInput(struct tagTHREADINFO *a1)
{
  int v2; // ecx
  __int64 *i; // rbx
  int v4; // eax
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = *((_DWORD *)a1 + 318);
  if ( (v2 & 0x20000000) != 0 )
  {
    for ( i = *(__int64 **)(*((_QWORD *)a1 + 54) + 24LL); ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        *((_DWORD *)a1 + 318) = v2 & 0xDFFFFFFF;
        return;
      }
      v4 = *((_DWORD *)i + 25);
      if ( ((v4 & 0x2000) != 0 || (v4 & 0x4000) != 0) && (struct tagTHREADINFO *)i[13] == a1 )
        break;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( (unsigned int)RIMQpcCountToMilliSecs(PerformanceCounter.QuadPart - i[16]) > 0x2710 )
      HandleDeferredInput(a1, 4LL);
  }
}
