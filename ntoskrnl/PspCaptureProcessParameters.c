/*
 * XREFs of PspCaptureProcessParameters @ 0x14070D704
 * Callers:
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 * Callees:
 *     PspCaptureUserProcessParameters @ 0x140759A00 (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PspCaptureProcessParameters(char a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 result; // rax
  char v6; // al

  v3 = *(unsigned __int8 *)(a3 + 8);
  if ( a1 )
  {
    result = PspCaptureUserProcessParameters(
               (int)a3 + 208,
               a2,
               *(_QWORD *)(a3 + 488),
               (v3 >> 3) & 1,
               *(_QWORD *)(a3 + 440));
    if ( (int)result < 0 )
      return result;
    v6 = *(_BYTE *)(a3 + 8);
    if ( (v6 & 8) != 0 )
      *(_BYTE *)(a3 + 9) &= 0xF3u;
    *(_BYTE *)(a3 + 8) = v6 | 4;
  }
  else
  {
    *(_QWORD *)(a3 + 208) = a2;
    *(_BYTE *)(a3 + 8) = v3 & 0xFB;
  }
  return 0LL;
}
