/*
 * XREFs of NVMeGetNamespaceIoCommandSetIdentify @ 0x1C001E908
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000D7A8 (NVMeControllerInitPart1.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C002237C (NVMeReenumerateNameSpaceRescan.c)
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeGetNamespaceIoCommandSetIdentify(__int64 a1)
{
  __int64 v1; // r14
  unsigned int i; // esi
  __int64 v4; // rax
  int j; // edx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 1936);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 232); ++i )
    {
      v4 = *(_QWORD *)(a1 + 8LL * i + 1952);
      if ( v4 && (*(_DWORD *)(v4 + 20) & 0x100) != 0 )
      {
        LocalCommandReuse(a1, a1 + 944);
        for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= j )
          ++j;
        *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
        v6 = *(_QWORD *)(a1 + 1040) + 4096LL;
        *(_QWORD *)(v6 + 24) = *(_QWORD *)(a1 + 1944);
        *(_BYTE *)v6 = 6;
        *(_DWORD *)(v6 + 4) = i + 1;
        *(_BYTE *)(v6 + 40) = 5;
        *(_DWORD *)(v6 + 42) = 0;
        *(_BYTE *)(v6 + 47) = 2;
        ProcessCommand(a1, a1 + 952);
        WaitForCommandCompleteWithCustomTimeout(a1);
        if ( *(_BYTE *)(a1 + 955) == 1 )
        {
          *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 120LL) ^= (*(_WORD *)v1 ^ *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1952)
                                                                                           + 120LL)) & 1;
          *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 120LL) ^= (*(_WORD *)v1 ^ *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1952)
                                                                                           + 120LL)) & 2;
          v7 = *(_QWORD *)(a1 + 8LL * i + 1952);
          *(_WORD *)(v7 + 122) ^= (*(_WORD *)(v7 + 122) ^ *(_WORD *)(v1 + 2)) & 1;
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 124LL) = *(_DWORD *)(v1 + 4);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 128LL) = *(_DWORD *)(v1 + 8);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 132LL) = *(_DWORD *)(v1 + 12);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 136LL) = *(_DWORD *)(v1 + 16);
          *(_QWORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 144LL) = *(_QWORD *)(v1 + 2816);
          *(_BYTE *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 152LL) = *(_BYTE *)(v1 + 2824);
        }
      }
    }
  }
}
