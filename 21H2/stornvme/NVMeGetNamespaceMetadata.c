/*
 * XREFs of NVMeGetNamespaceMetadata @ 0x1C000CC64
 * Callers:
 *     NVMeGetRichDeviceDescription @ 0x1C000CE44 (NVMeGetRichDeviceDescription.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeGetNamespaceMetadata(__int64 a1, int a2, __int64 a3)
{
  int v6; // edx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  void *v11; // [rsp+90h] [rbp+8h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+20h]

  *(_BYTE *)(a1 + 867) = 0;
  memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
  v6 = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
  *(_DWORD *)(a1 + 856) = 1;
  do
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) |= ++v6;
  while ( v6 < 2 );
  *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) |= 4u;
  *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
  v12 = 0LL;
  v11 = 0LL;
  result = NVMeAllocateDmaBuffer(a1, 0x1000u);
  if ( !v11 )
    goto LABEL_13;
  NVMeZeroMemory(v11, 0x1000u);
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4200LL) = v11;
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4208LL) = v12;
  *(_DWORD *)(*(_QWORD *)(a1 + 952) + 4240LL) = 4096;
  v8 = *(_QWORD *)(a1 + 952);
  v9 = *(_QWORD *)(v8 + 4208);
  *(_DWORD *)(v8 + 4140) |= 1u;
  *(_QWORD *)(v8 + 4120) = v9;
  *(_BYTE *)(v8 + 4096) = 10;
  *(_DWORD *)(v8 + 4100) = a2;
  *(_BYTE *)(v8 + 4136) = 127;
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4224LL) = NVMeGetNamespaceMetadataCompletion;
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = a3;
  ProcessCommand(a1, a1 + 864);
  result = WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
  v10 = *(unsigned __int8 *)(a1 + 867);
  if ( v11 )
    result = NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v11, v12);
  if ( v10 != 1 )
  {
LABEL_13:
    if ( *(_BYTE *)(a1 + 24) )
      return StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
  }
  return result;
}
