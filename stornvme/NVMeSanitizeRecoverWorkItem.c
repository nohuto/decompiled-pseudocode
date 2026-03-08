/*
 * XREFs of NVMeSanitizeRecoverWorkItem @ 0x1C0023470
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     NVMeRequestComplete @ 0x1C000318C (NVMeRequestComplete.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSanitizeRecoverWorkItem(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // esi
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 SrbExtension; // rax
  __int64 v11; // rdx

  v3 = 1;
  v4 = a2 >> 3;
  if ( (a2 & 8) == 0 )
    v3 = a2 & 7;
  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v7 = *(_QWORD *)(a1 + 1040);
  v8 = *(_DWORD *)(v7 + 4136) & 0xFFFFFFF8;
  *(_BYTE *)(v7 + 4096) = -124;
  *(_DWORD *)(v7 + 4140) = 0;
  *(_DWORD *)(v7 + 4136) = (8 * (v4 & 1)) | (v3 | v8) & 0xFFFFFC07;
  ProcessCommand(a1, a1 + 952);
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 955) != 1 )
  {
    if ( *(_QWORD *)(a1 + 4328) )
    {
      SrbExtension = GetSrbExtension(*(_QWORD *)(a1 + 4328));
      *(_BYTE *)(SrbExtension + 4253) |= 8u;
      *(_BYTE *)(v11 + 3) = 4;
      NVMeRequestComplete(a1, v11);
      *(_QWORD *)(a1 + 4328) = 0LL;
    }
    *(_DWORD *)(a1 + 4336) &= ~1u;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  }
  return StorPortExtendedFunction(31LL, a1, a3, v9);
}
