/*
 * XREFs of NVMeBuildPollingConfiguration @ 0x1C0008D3C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

void __fastcall NVMeBuildPollingConfiguration(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( !*(_BYTE *)(a1 + 20) )
  {
    *(_BYTE *)(a1 + 867) = 0;
    memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
    v2 = *(_QWORD *)(a1 + 952);
    *(_QWORD *)(a1 + 920) = v2;
    *(_DWORD *)(a1 + 856) = 1;
    *(_BYTE *)(v2 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
    v3 = *(_QWORD *)(a1 + 952);
    v4 = *(_QWORD *)(a1 + 1744);
    *(_BYTE *)(v3 + 4096) = 10;
    *(_QWORD *)(v3 + 4120) = v4;
    *(_BYTE *)(v3 + 4136) = -48;
    *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4224LL) = NVMeBuildDevicePollingConfiguration;
    ProcessCommand(a1, a1 + 864);
    WaitForCommandCompleteWithCustomTimeout(a1);
    if ( !*(_BYTE *)(a1 + 3832) )
    {
      if ( !*(_DWORD *)(a1 + 72) )
        return;
      *(_BYTE *)(a1 + 3832) = 1;
    }
    v5 = *(_DWORD *)(a1 + 3852);
    if ( v5 )
    {
      if ( v5 > 0x64 )
        v5 = 100;
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 72);
    }
    *(_DWORD *)(a1 + 3836) = v5;
    v6 = *(_DWORD *)(a1 + 3856);
    if ( !v6 )
      v6 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(a1 + 3840) = v6;
    v7 = *(_DWORD *)(a1 + 3860);
    if ( (v7 & 1) != 0 )
      *(_DWORD *)(a1 + 3844) = v7;
    else
      *(_DWORD *)(a1 + 3844) ^= (*(_DWORD *)(a1 + 3844) ^ (*(_DWORD *)(a1 + 116) >> 1)) & 0xFE;
  }
}
