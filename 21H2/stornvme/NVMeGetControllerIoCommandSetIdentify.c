/*
 * XREFs of NVMeGetControllerIoCommandSetIdentify @ 0x1C0007D08
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 *     NVMeControllerIdentifyWorkItem @ 0x1C001CA60 (NVMeControllerIdentifyWorkItem.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeGetControllerIoCommandSetIdentify(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1736);
  *(_BYTE *)(a1 + 867) = 0;
  memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
  v3 = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
  *(_DWORD *)(a1 + 856) = 1;
  do
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) |= ++v3;
  while ( v3 < 2 );
  *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
  v4 = *(_QWORD *)(a1 + 1744);
  v5 = *(_QWORD *)(a1 + 952) + 4096LL;
  *(_DWORD *)(v5 + 4) = -1;
  *(_DWORD *)(v5 + 42) = 0;
  *(_BYTE *)(v5 + 47) = 0;
  *(_BYTE *)v5 = 6;
  *(_QWORD *)(v5 + 24) = v4;
  *(_BYTE *)(v5 + 40) = 6;
  ProcessCommand(a1, a1 + 864);
  result = WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 867) == 1 )
  {
    *(_BYTE *)(a1 + 4144) = *(_BYTE *)v1;
    *(_BYTE *)(a1 + 4145) = *(_BYTE *)(v1 + 1);
    *(_BYTE *)(a1 + 4146) = *(_BYTE *)(v1 + 2);
    *(_BYTE *)(a1 + 4147) = *(_BYTE *)(v1 + 3);
    *(_DWORD *)(a1 + 4148) = *(_DWORD *)(v1 + 4);
    result = *(_QWORD *)(v1 + 8);
    *(_QWORD *)(a1 + 4152) = result;
  }
  return result;
}
