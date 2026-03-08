/*
 * XREFs of PiCMCaptureEnumerateInputData @ 0x1408A043A
 * Callers:
 *     PiCMEnumerateSubKeys @ 0x140966A2C (PiCMEnumerateSubKeys.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureEnumerateInputData(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  if ( a1 && a2 >= 0x14 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = a1 + a2;
    if ( v4 > 0x7FFFFFFF0000LL || v4 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_OWORD *)a4 = *(_OWORD *)a1;
    *(_DWORD *)(a4 + 16) = *(_DWORD *)(a1 + 16);
    result = 0LL;
    if ( *(_DWORD *)a4 != 20 )
      result = 3221225485LL;
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result < 0 )
  {
    *(_OWORD *)a4 = 0LL;
    *(_DWORD *)(a4 + 16) = 0;
  }
  return result;
}
