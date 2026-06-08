/*
 * XREFs of InitCommonPerfStateContext @ 0x1C00263A8
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000DF4C (InitLegacyPccInternal.c)
 *     InitPerfStatesInternal @ 0x1C0025BB0 (InitPerfStatesInternal.c)
 *     InitCpcStatesInternal @ 0x1C0035000 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0036570 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0037A50 (RegisterKernelPepPerf.c)
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
