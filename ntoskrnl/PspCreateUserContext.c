/*
 * XREFs of PspCreateUserContext @ 0x1407EEA8C
 * Callers:
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     PspInitializeThunkContext @ 0x1407EDF4C (PspInitializeThunkContext.c)
 *     NtCreateThreadEx @ 0x1407EEB00 (NtCreateThreadEx.c)
 *     PspCreatePicoThread @ 0x1409B27F0 (PspCreatePicoThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspCreateUserContext(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  if ( (a2 & 1) == 0 )
    *(_DWORD *)(a1 + 48) = 1048587;
  *(_QWORD *)(a1 + 136) = a5;
  *(_WORD *)(a1 + 66) = 43;
  *(_QWORD *)(a1 + 248) = a3;
  *(_QWORD *)(a1 + 128) = a4;
  *(_WORD *)(a1 + 56) = 51;
  result = 639LL;
  *(_DWORD *)(a1 + 58) = 2818091;
  *(_WORD *)(a1 + 256) = 639;
  *(_DWORD *)(a1 + 62) = 2818131;
  *(_DWORD *)(a1 + 52) = 8064;
  *(_DWORD *)(a1 + 280) = 8064;
  return result;
}
