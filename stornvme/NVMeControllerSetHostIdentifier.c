/*
 * XREFs of NVMeControllerSetHostIdentifier @ 0x1C000E854
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DCDC (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     memmove @ 0x1C0004280 (memmove.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

char __fastcall NVMeControllerSetHostIdentifier(__int64 a1)
{
  unsigned __int8 v1; // dl
  char v3; // si
  int i; // edx
  char v5; // bl
  __int64 v6; // rdx
  int v7; // eax
  void *v9; // [rsp+90h] [rbp+8h] BYREF
  __int64 v10; // [rsp+98h] [rbp+10h]

  v1 = *(_BYTE *)(a1 + 4296);
  v9 = 0LL;
  v10 = 0LL;
  v3 = 0;
  if ( (v1 & 1) == 0 )
    goto LABEL_17;
  if ( ((v1 >> 1) & ((*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 96LL) & 1) != 0)) != 0 )
    *(_BYTE *)(a1 + 4296) = v1 | 8;
  LocalCommandReuse(a1, a1 + 944);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= ++i )
    ;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 4u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v5 = *(_BYTE *)(a1 + 4296) & 8;
  NVMeAllocateDmaBuffer(a1, 0x10u);
  if ( !v9 )
    goto LABEL_17;
  NVMeZeroMemory(v9, 0x10u);
  memmove(v9, (const void *)(a1 + 4297), v5 != 0 ? 16LL : 8LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4200LL) = v9;
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4208LL) = v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4240LL) = 16;
  v6 = *(_QWORD *)(a1 + 1040);
  v7 = *(_DWORD *)(v6 + 4140) ^ (*(_BYTE *)(a1 + 4296) >> 3);
  *(_QWORD *)(v6 + 4120) = *(_QWORD *)(v6 + 4208);
  *(_DWORD *)(v6 + 4140) ^= v7 & 1;
  *(_BYTE *)(v6 + 4096) = 9;
  *(_BYTE *)(v6 + 4136) = -127;
  ProcessCommand(a1, a1 + 952);
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 955) == 1 )
  {
    *(_BYTE *)(a1 + 4296) |= 4u;
    v3 = 1;
  }
  if ( v9 )
    NVMeFreeDmaBuffer(a1, 16LL, &v9, v10);
  if ( !v3 )
  {
LABEL_17:
    if ( *(_BYTE *)(a1 + 24) )
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
  }
  return v3;
}
