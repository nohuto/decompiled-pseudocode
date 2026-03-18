/*
 * XREFs of NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0008A28
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     BuildGetLogPageCommand @ 0x1C0005458 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

_UNKNOWN **__fastcall NVMeGetCloudSSDErrorRecoveryLog(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rbx
  void *v4; // rcx
  void *v5; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  __int64 v7; // [rsp+60h] [rbp+8h]
  void *v8; // [rsp+70h] [rbp+18h]

  result = &retaddr;
  v2 = *(_QWORD *)(a1 + 952);
  v4 = *(void **)(a1 + 4008);
  v8 = v4;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    *(_QWORD *)(a1 + 4008) = 0LL;
    if ( v4 )
    {
      result = *(_UNKNOWN ***)(a1 + 4024);
      v7 = (__int64)result;
      if ( result )
      {
        memset(v4, 0, 0x200uLL);
        v5 = *(void **)(a1 + 952);
        *(_BYTE *)(a1 + 867) = 0;
        memset(v5, 0, 0x10A0uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
        *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
        *(_DWORD *)(a1 + 856) = 1;
        *(_BYTE *)(v2 + 4253) |= 3u;
        *(_WORD *)(v2 + 4244) = 0;
        BuildGetLogPageCommand(a1, v2, 0xC1u, 0x200u, v7, -1, 0LL, 0);
        *(_BYTE *)(v2 + 4253) |= 4u;
        *(_QWORD *)(v2 + 4200) = v8;
        *(_QWORD *)(v2 + 4208) = v7;
        *(_QWORD *)(v2 + 4224) = NVMeGetCloudSSDErrorRecoveryLogPageCompletion;
        *(_DWORD *)(v2 + 4240) = 512;
        ProcessCommand(a1, a1 + 864);
        return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1);
      }
    }
    else
    {
      return (_UNKNOWN **)NVMeAllocateDmaBuffer(a1, 0x200u);
    }
  }
  return result;
}
