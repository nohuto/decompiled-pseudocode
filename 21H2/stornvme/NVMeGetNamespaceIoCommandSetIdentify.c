/*
 * XREFs of NVMeGetNamespaceIoCommandSetIdentify @ 0x1C000B0FC
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C000F320 (NVMeReenumerateNameSpaceRescan.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

void __fastcall NVMeGetNamespaceIoCommandSetIdentify(__int64 a1)
{
  __int64 v1; // r14
  unsigned int i; // esi
  __int64 v4; // rax
  void *v5; // rcx
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 1736);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 224); ++i )
    {
      v4 = *(_QWORD *)(a1 + 8LL * i + 1752);
      if ( v4 && (*(_DWORD *)(v4 + 20) & 0x100) != 0 )
      {
        v5 = *(void **)(a1 + 952);
        *(_BYTE *)(a1 + 867) = 0;
        memset(v5, 0, 0x10A0uLL);
        v6 = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
        *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
        *(_DWORD *)(a1 + 856) = 1;
        do
          *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) |= ++v6;
        while ( v6 < 2 );
        *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
        v7 = *(_QWORD *)(a1 + 952) + 4096LL;
        *(_QWORD *)(v7 + 24) = *(_QWORD *)(a1 + 1744);
        *(_BYTE *)v7 = 6;
        *(_DWORD *)(v7 + 4) = i + 1;
        *(_BYTE *)(v7 + 40) = 5;
        *(_DWORD *)(v7 + 42) = 0;
        *(_BYTE *)(v7 + 47) = 2;
        ProcessCommand(a1, a1 + 864);
        WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
        if ( *(_BYTE *)(a1 + 867) == 1 )
        {
          *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1752) + 120LL) ^= (*(_WORD *)v1 ^ *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1752)
                                                                                           + 120LL)) & 1;
          *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1752) + 120LL) ^= (*(_WORD *)v1 ^ *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1752)
                                                                                           + 120LL)) & 2;
          v8 = *(_QWORD *)(a1 + 8LL * i + 1752);
          *(_WORD *)(v8 + 122) ^= (*(_WORD *)(v8 + 122) ^ *(_WORD *)(v1 + 2)) & 1;
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1752) + 124LL) = *(_DWORD *)(v1 + 4);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1752) + 128LL) = *(_DWORD *)(v1 + 8);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1752) + 132LL) = *(_DWORD *)(v1 + 12);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1752) + 136LL) = *(_DWORD *)(v1 + 16);
          *(_QWORD *)(*(_QWORD *)(a1 + 8LL * i + 1752) + 144LL) = *(_QWORD *)(v1 + 2816);
          *(_BYTE *)(*(_QWORD *)(a1 + 8LL * i + 1752) + 152LL) = *(_BYTE *)(v1 + 2824);
        }
      }
    }
  }
}
