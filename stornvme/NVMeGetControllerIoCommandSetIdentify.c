/*
 * XREFs of NVMeGetControllerIoCommandSetIdentify @ 0x1C001DF88
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000D7A8 (NVMeControllerInitPart1.c)
 *     NVMeControllerIdentifyWorkItem @ 0x1C0014EA0 (NVMeControllerIdentifyWorkItem.c)
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetControllerIoCommandSetIdentify(__int64 a1)
{
  __int64 v1; // rsi
  int i; // ecx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1936);
  LocalCommandReuse(a1, a1 + 944);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= i )
    ++i;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v4 = *(_QWORD *)(a1 + 1944);
  v5 = *(_QWORD *)(a1 + 1040) + 4096LL;
  *(_DWORD *)(v5 + 4) = -1;
  *(_BYTE *)v5 = 6;
  *(_QWORD *)(v5 + 24) = v4;
  *(_BYTE *)(v5 + 40) = 6;
  *(_DWORD *)(v5 + 42) = 0;
  *(_BYTE *)(v5 + 47) = 0;
  ProcessCommand(a1, a1 + 952);
  result = WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 955) == 1 )
  {
    *(_BYTE *)(a1 + 4344) = *(_BYTE *)v1;
    *(_BYTE *)(a1 + 4345) = *(_BYTE *)(v1 + 1);
    *(_BYTE *)(a1 + 4346) = *(_BYTE *)(v1 + 2);
    *(_BYTE *)(a1 + 4347) = *(_BYTE *)(v1 + 3);
    *(_DWORD *)(a1 + 4348) = *(_DWORD *)(v1 + 4);
    result = *(_QWORD *)(v1 + 8);
    *(_QWORD *)(a1 + 4352) = result;
  }
  return result;
}
