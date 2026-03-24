/*
 * XREFs of NVMeBuildPollingConfiguration @ 0x1C0017E98
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeBuildPollingConfiguration(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 851) = 0;
    memset(*(void **)(a1 + 936), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
    v2 = *(_QWORD *)(a1 + 936);
    *(_QWORD *)(a1 + 904) = v2;
    *(_DWORD *)(a1 + 840) = 1;
    *(_BYTE *)(v2 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 936) + 4244LL) = 0;
    v3 = *(_QWORD *)(a1 + 936);
    v4 = *(_QWORD *)(a1 + 1728);
    *(_BYTE *)(v3 + 4096) = 10;
    *(_QWORD *)(v3 + 4120) = v4;
    *(_BYTE *)(v3 + 4136) = -48;
    *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4224LL) = NVMeBuildDevicePollingConfiguration;
    ProcessCommand(a1, a1 + 848);
    WaitForCommandCompleteWithCustomTimeout(a1);
    if ( !*(_BYTE *)(a1 + 3816) )
    {
      if ( !*(_DWORD *)(a1 + 64) )
        return;
      *(_BYTE *)(a1 + 3816) = 1;
    }
    v5 = *(_DWORD *)(a1 + 3836);
    if ( v5 )
    {
      if ( v5 > 0x64 )
        v5 = 100;
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 64);
    }
    *(_DWORD *)(a1 + 3820) = v5;
    v6 = *(_DWORD *)(a1 + 3840);
    if ( !v6 )
      v6 = *(_DWORD *)(a1 + 76);
    *(_DWORD *)(a1 + 3824) = v6;
    v7 = *(_DWORD *)(a1 + 3844);
    if ( (v7 & 1) != 0 )
      *(_DWORD *)(a1 + 3828) = v7;
    else
      *(_DWORD *)(a1 + 3828) ^= (*(_DWORD *)(a1 + 3828) ^ (*(_DWORD *)(a1 + 108) >> 1)) & 0xFE;
  }
}
