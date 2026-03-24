/*
 * XREFs of NVMeGetCommandEffectsLog @ 0x1C0019218
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000E014 (NVMeControllerInitPart3.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0002AA4 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetCommandEffectsLog(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  void **v4; // rbx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 936);
  v7 = 0LL;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 1624);
    if ( (*(_BYTE *)(result + 261) & 2) != 0 )
    {
      v4 = (void **)(a1 + 3776);
      v5 = *(void **)(a1 + 3776);
      if ( v5 )
      {
        result = *(_QWORD *)(a1 + 4000);
        v7 = result;
        if ( !result )
          return result;
      }
      else
      {
        result = NVMeAllocateDmaBuffer(a1, 0x1000u);
        v5 = *v4;
        if ( !*v4 )
          return result;
        *(_QWORD *)(a1 + 4000) = 0LL;
      }
      memset(v5, 0, 0x1000uLL);
      v6 = *(void **)(a1 + 936);
      *(_BYTE *)(a1 + 851) = 0;
      memset(v6, 0, 0x10A0uLL);
      *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
      *(_QWORD *)(a1 + 904) = *(_QWORD *)(a1 + 936);
      *(_DWORD *)(a1 + 840) = 1;
      *(_BYTE *)(v1 + 4253) |= 3u;
      *(_WORD *)(v1 + 4244) = 0;
      BuildGetLogPageCommand(a1, v1, 5u, 0x1000u, v7, -1, 0LL, 0);
      *(_BYTE *)(v1 + 4253) |= 4u;
      *(_QWORD *)(v1 + 4200) = *v4;
      *(_QWORD *)(v1 + 4208) = v7;
      *(_DWORD *)(v1 + 4240) = 4096;
      ProcessCommand(a1, a1 + 848);
      return WaitForCommandCompleteWithCustomTimeout(a1);
    }
  }
  return result;
}
