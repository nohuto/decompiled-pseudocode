/*
 * XREFs of NVMeGetCommandEffectsLog @ 0x1C00088B0
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     BuildGetLogPageCommand @ 0x1C0005458 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeGetCommandEffectsLog(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  void **v4; // rbx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 952);
  v7 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    result = *(_QWORD *)(a1 + 1640);
    if ( (*(_BYTE *)(result + 261) & 2) != 0 )
    {
      v4 = (void **)(a1 + 3792);
      v5 = *(void **)(a1 + 3792);
      if ( !v5 )
      {
        result = NVMeAllocateDmaBuffer(a1, 0x1000u);
        v5 = *v4;
        if ( !*v4 )
          return result;
        *(_QWORD *)(a1 + 4016) = 0LL;
        goto LABEL_6;
      }
      result = *(_QWORD *)(a1 + 4016);
      v7 = result;
      if ( result )
      {
LABEL_6:
        memset(v5, 0, 0x1000uLL);
        v6 = *(void **)(a1 + 952);
        *(_BYTE *)(a1 + 867) = 0;
        memset(v6, 0, 0x10A0uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
        *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
        *(_DWORD *)(a1 + 856) = 1;
        *(_BYTE *)(v1 + 4253) |= 3u;
        *(_WORD *)(v1 + 4244) = 0;
        BuildGetLogPageCommand(a1, v1, 5u, 0x1000u, v7, -1, 0LL, 0);
        *(_BYTE *)(v1 + 4253) |= 4u;
        *(_QWORD *)(v1 + 4200) = *v4;
        *(_QWORD *)(v1 + 4208) = v7;
        *(_DWORD *)(v1 + 4240) = 4096;
        ProcessCommand(a1, a1 + 864);
        return WaitForCommandCompleteWithCustomTimeout(a1);
      }
    }
  }
  return result;
}
