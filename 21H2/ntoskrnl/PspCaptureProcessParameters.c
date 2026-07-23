/*
 * XREFs of PspCaptureProcessParameters @ 0x140696C30
 * Callers:
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 * Callees:
 *     PspCaptureUserProcessParameters @ 0x14069635C (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PspCaptureProcessParameters(char a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 result; // rax
  char v6; // al

  v3 = *(_BYTE *)(a3 + 8);
  if ( a1 )
  {
    result = PspCaptureUserProcessParameters(
               (_QWORD *)(a3 + 208),
               a2,
               *(_QWORD *)(a3 + 512),
               (v3 & 8) != 0,
               *(_QWORD *)(a3 + 464));
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
