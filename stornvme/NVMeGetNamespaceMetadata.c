__int64 __fastcall NVMeGetNamespaceMetadata(__int64 a1, int a2, __int64 a3)
{
  int i; // ecx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  void *v11; // [rsp+90h] [rbp+8h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+20h]

  LocalCommandReuse(a1, a1 + 944);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= i )
    ++i;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 4u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v12 = 0LL;
  v11 = 0LL;
  result = NVMeAllocateDmaBuffer(a1, 0x1000u);
  if ( !v11 )
    goto LABEL_11;
  NVMeZeroMemory(v11, 0x1000u);
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4200LL) = v11;
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4208LL) = v12;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4240LL) = 4096;
  v8 = *(_QWORD *)(a1 + 1040);
  v9 = *(_QWORD *)(v8 + 4208);
  *(_DWORD *)(v8 + 4140) |= 1u;
  *(_QWORD *)(v8 + 4120) = v9;
  *(_BYTE *)(v8 + 4096) = 10;
  *(_DWORD *)(v8 + 4100) = a2;
  *(_BYTE *)(v8 + 4136) = 127;
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeGetNamespaceMetadataCompletion;
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4232LL) = a3;
  ProcessCommand(a1, a1 + 952);
  result = WaitForCommandCompleteWithCustomTimeout(a1);
  v10 = *(unsigned __int8 *)(a1 + 955);
  if ( v11 )
    result = NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v11, v12);
  if ( v10 != 1 )
  {
LABEL_11:
    if ( *(_BYTE *)(a1 + 24) )
      return StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
  }
  return result;
}
