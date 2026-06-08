/*
 * XREFs of InitCommonPerfStateContext @ 0x1C002D158
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000A628 (InitLegacyPccInternal.c)
 *     InitCpcStatesInternal @ 0x1C002D198 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002E704 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002EAC0 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C00308F0 (RegisterKernelPepPerf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitCommonPerfStateContext(_DWORD *a1, _QWORD *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax

  *a2 = a1;
  *(_QWORD *)(a3 + 8) = a2;
  if ( a1[20] )
  {
    *(_DWORD *)a3 = a1[21];
    *(_DWORD *)(a3 + 28) = a1[20];
  }
  else
  {
    *(_DWORD *)a3 = a1[14];
  }
  *(_DWORD *)(a3 + 20) = a1[180];
  result = a5;
  *(_DWORD *)(a3 + 24) = a5;
  *(_DWORD *)(a3 + 16) = a4;
  return result;
}
