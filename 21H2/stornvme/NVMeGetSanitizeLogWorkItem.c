/*
 * XREFs of NVMeGetSanitizeLogWorkItem @ 0x1C001DC70
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0005458 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     NVMeRequestComplete @ 0x1C0019DF8 (NVMeRequestComplete.c)
 */

__int64 __fastcall NVMeGetSanitizeLogWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 SrbExtension; // rax
  __int64 v8; // rdx
  void *v10; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+48h]

  *(_BYTE *)(a1 + 867) = 0;
  memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
  *(_DWORD *)(a1 + 856) = 1;
  v10 = 0LL;
  v11 = 0LL;
  NVMeAllocateDmaBuffer(a1, 0x200u);
  if ( v10 )
  {
    memset(v10, 0, 0x200uLL);
    v6 = *(_QWORD *)(a1 + 952);
    *(_BYTE *)(v6 + 4253) |= 3u;
    *(_WORD *)(v6 + 4244) = 0;
    BuildGetLogPageCommand(a1, v6, 0x81u, 0x200u, v11, 0, 0LL, 0);
    *(_BYTE *)(v6 + 4253) |= 4u;
    *(_QWORD *)(v6 + 4224) = NVMeSanitizeRecoverCompletionRoutine;
    *(_QWORD *)(v6 + 4200) = v10;
    *(_QWORD *)(v6 + 4208) = v11;
    *(_DWORD *)(v6 + 4240) = 512;
    ProcessCommand(a1, a1 + 864);
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
    if ( *(_BYTE *)(a1 + 867) == 1 )
      goto LABEL_8;
  }
  else
  {
    *(_BYTE *)(a1 + 867) = 38;
  }
  if ( *(_QWORD *)(a1 + 4128) )
  {
    SrbExtension = GetSrbExtension(*(_QWORD *)(a1 + 4128));
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
    *(_BYTE *)(v8 + 3) = 4;
    NVMeRequestComplete(a1, v8, 0);
    *(_QWORD *)(a1 + 4128) = 0LL;
  }
  *(_DWORD *)(a1 + 4136) &= ~1u;
  if ( *(_BYTE *)(a1 + 22) )
    StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
LABEL_8:
  if ( v10 )
    NVMeFreeDmaBuffer(a1, 512LL, (__int64 *)&v10, v11);
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}
