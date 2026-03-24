/*
 * XREFs of IrqpAllocateInstancePath @ 0x1C00964E4
 * Callers:
 *     IrqTraceAffinityPolicy @ 0x1C0096174 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqpAllocateInstancePath(PDEVICE_OBJECT Pdo, __int64 a2)
{
  PVOID Data; // rdi
  ULONG Size; // eax
  __int64 v6; // r8
  _WORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int16 v10; // cx
  const wchar_t *v11; // rax
  __int64 v12; // r8
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+8h] BYREF
  ULONG Type; // [rsp+70h] [rbp+18h] BYREF

  Type = 0;
  LODWORD(NumberOfBytes) = 0;
  Data = 0LL;
  if ( !Pdo )
    goto LABEL_17;
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, 0, 0LL, (PULONG)&NumberOfBytes, &Type) == -1073741789 )
  {
    Size = NumberOfBytes;
    if ( (unsigned int)NumberOfBytes >= 0xFFFE )
      goto LABEL_6;
    Data = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x49706341u);
    if ( !Data )
      goto LABEL_17;
  }
  Size = NumberOfBytes;
LABEL_6:
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, Size, Data, (PULONG)&NumberOfBytes, &Type) < 0 )
  {
    ExFreePoolWithTag(Data, 0);
    Data = 0LL;
  }
  if ( Data )
  {
    *(_OWORD *)a2 = 0LL;
    v6 = 0x7FFFLL;
    v7 = Data;
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v6;
    }
    while ( v6 );
    result = -v6;
    v9 = (0x7FFF - v6) & -(__int64)(v6 != 0);
    if ( v6 && a2 )
    {
      *(_QWORD *)(a2 + 8) = Data;
LABEL_15:
      v10 = 2 * v9;
      *(_WORD *)a2 = v10;
      *(_WORD *)(a2 + 2) = v10 + 2;
      return result;
    }
    return result;
  }
LABEL_17:
  v11 = &word_1C006F7EC;
  *(_OWORD *)a2 = 0LL;
  v12 = 0x7FFFLL;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v12;
  }
  while ( v12 );
  result = -v12;
  v9 = (0x7FFF - v12) & -(__int64)(v12 != 0);
  if ( v12 && a2 )
  {
    *(_QWORD *)(a2 + 8) = &word_1C006F7EC;
    goto LABEL_15;
  }
  return result;
}
