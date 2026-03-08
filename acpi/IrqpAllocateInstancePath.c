/*
 * XREFs of IrqpAllocateInstancePath @ 0x1C00A014C
 * Callers:
 *     IrqTraceAffinityPolicy @ 0x1C009FFC0 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall IrqpAllocateInstancePath(PDEVICE_OBJECT Pdo, __int64 a2)
{
  _WORD *Data; // rdi
  ULONG Size; // eax
  __int16 result; // ax
  const wchar_t *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  _WORD *v10; // r8
  __int16 v11; // ax
  ULONG RequiredSize; // [rsp+60h] [rbp+8h] BYREF
  ULONG Type; // [rsp+70h] [rbp+18h] BYREF

  Type = 0;
  RequiredSize = 0;
  Data = 0LL;
  if ( !Pdo )
    goto LABEL_8;
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
  {
    Size = RequiredSize;
    if ( RequiredSize >= 0xFFFE )
      goto LABEL_6;
    Data = (_WORD *)ExAllocatePool2(256LL, RequiredSize, 1232102209LL);
    if ( !Data )
    {
LABEL_8:
      result = 0x7FFF;
      v7 = &word_1C0063064;
      *(_OWORD *)a2 = 0LL;
      v8 = 0x7FFFLL;
      while ( *v7 )
      {
        ++v7;
        if ( !--v8 )
          return result;
      }
      result = 0x7FFF - v8;
      if ( a2 )
      {
        *(_QWORD *)(a2 + 8) = &word_1C0063064;
        goto LABEL_21;
      }
      return result;
    }
  }
  Size = RequiredSize;
LABEL_6:
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, Size, Data, &RequiredSize, &Type) < 0 )
  {
    ExFreePoolWithTag(Data, 0);
    goto LABEL_8;
  }
  if ( !Data )
    goto LABEL_8;
  result = 0x7FFF;
  *(_OWORD *)a2 = 0LL;
  v9 = 0x7FFFLL;
  v10 = Data;
  while ( *Data )
  {
    ++Data;
    if ( !--v9 )
      return result;
  }
  result = 0x7FFF - v9;
  if ( a2 )
  {
    *(_QWORD *)(a2 + 8) = v10;
LABEL_21:
    v11 = 2 * result;
    *(_WORD *)a2 = v11;
    result = v11 + 2;
    *(_WORD *)(a2 + 2) = result;
  }
  return result;
}
